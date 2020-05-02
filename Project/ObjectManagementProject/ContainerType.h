#ifndef __CONTAINERTYPE_H
#define __CONTAINERTYPE_H

#include "pch.h"

class ContainerType {
private:
	int C_ID;				//container�� ID
	string C_Name;
	string C_Type;			//container�� ����
	int numOfitem;
	string C_Photo;			//container�� ������ ���
	UnsortedList<SimpleItemType> ItemList;	//Container�� ��� �ִ� ���� List
public:
	ContainerType();				//������
	~ContainerType() {}				//�Ҹ���

	/*
	@brief: Container�� ���� ID �� �ޱ�
	@pre: ContainerID�� �����Ǿ� �־����
	@post: none
	@return: ContainerID return
	*/
	int GetContainerID() const;

	int GetDrawerID();

	int GetRoomID();

	/*
	@brief: Container�� ���� �� �ޱ�
	@pre: Container�� ������ �����Ǿ� �־����
	@post: none
	@return: Container Type return
	*/
	string GetContainerName() const;

	/*
	@brief: Container�� ���� �� �ޱ�
	@pre: Container�� ������ �����Ǿ� �־����
	@post: none
	@return: Container Type return
	*/
	string GetContainerType() const;

	string GetContainerPhoto() const;

	/*
	@brief: Container�� ����ִ� ���� ���� �ޱ�
	@pre: none
	@post: none
	@return: Container�� ��� ������ ���� return
	*/
	int GetNumOfItem() const;

	/*
	@brief: ContainerID ����
	@pre: none
	@post: ContainerID ���� ������
	@param: ������ ContainerID integer
	*/
	void SetContainerID(int inID);

	/*
	@brief: Container��  �̸� ����
	@pre: none
	@post: Container�� �̸��� ������
	@param: ������ Container �̸� string
	*/
	void SetContainerName(string inName);

	/*
	@brief: Container��  ���� ����
	@pre: none
	@post: Container�� ������ ������
	@param: ������ Container ���� string
	*/
	void SetContainerType(string inType);

	void SetContainerPhoto(string inPhoto);

	/*
	@brief: Container�� ���� ����
	@pre: none
	@post: container�� ID, ��ġ, ������ ������
	@param: ������ Container�� ID(int), Location(string), Type(string)
	*/
	void SetContainerRecord(int inID, string inName, string inType, string inPhoto);

	/*
	@brief: Container�� ������ ����ڷκ��� �Է¹���
	@pre: none
	@post: Container�� ������ ����ڷκ��� ����
	*/
	void SetContainerIDfromKB();

	/*
	@brief: Container�� ������ ����ڷκ��� �Է¹���
	@pre: none
	@post: Container�� ������ ����ڷκ��� ����
	*/
	void SetContainerNamefromKB();

	/*
	@brief: Container�� ������ ����ڷκ��� �Է¹���
	@pre: none
	@post: Container�� ������ ����ڷκ��� ����
	*/
	void SetContainerTypefromKB();

	void SetContainerPhotofromKB();

	/*
	@brief: Container�� ������ ����ڷκ��� �Է¹���
	@pre: none
	@post: Container�� ID, Location, Type�� ����ڷκ��� �Է¹���
	*/
	void SetContainerRecordfromKB();

	/*
	@brief: Container�� ������ ����
	@pre: ���� ������ ������ �����Ǿ� �־�� ��
	@post: Container�� ItemList�� ������ �߰���.
	@param: ��⿡ ���� ���� (SimpleItemType)
	*/
	int AddItem(const SimpleItemType& data);

	/*
	@brief: Container���� ������ ��
	@pre: �� ������ ID�� �����Ǿ� �־�� ��
	@post: Container�� ItemList���� �ش��ϴ� ������ ������.
	@param: ��⿡�� �� ���� (SimpleItemType)
	*/
	int DeleteItem(SimpleItemType& data);

	/*
	@brief: Container�� ��� ������ ������ ������
	@pre: ������ ������ ������ �����Ǿ� �־�� ��
	@post: Container�� ItemList���� �ش��ϴ� ������ ������ ���ŵ�.
	@param: ��⿡�� ������ ���� (SimpleItemType)
	*/
	int UpdateItem(SimpleItemType& data);

	int GetItem(SimpleItemType& data);

	/*
	@brief: ItemList�� �ִ� ������ ��� display��
	@pre: none
	@post: ItemList�� �ִ� ������ ������ ȭ�鿡 ��� display��
	*/
	void DisplayAllItem();

	/*
	@brief: Container�� ������, ��� ����, ������ ��ΰ� ��� ȭ�鿡 Display��
	@pre: none
	@post: Container�� ������, ��� ����, ������ ��ΰ� ��� ȭ�鿡 Display��
	*/
	void DisplayContainer();

	void MakeConatinerEmpty();

	/*
	@brief: Container�� ������ ����
	@pre: ContainerID�� ������ �Ǿ��־����
	@post: none
	@return: ContainerID�� ������ 1, �ٸ��� 0�� return
	*/
	bool operator==(const ContainerType& data) {
		if (C_ID == data.GetContainerID()) {
			return true;
		}
		else {
			return false;
		}
	}

	/*
	@brief: Container ��
	@pre: ���� Container�� ID�� �����Ǿ� �־�� ��
	@post: none
	@return: ���� ContainerID�� �� ũ�� 1, ������ 0�� return��
	*/
	bool operator>(const ContainerType& data) {
		if (C_ID > data.GetContainerID()) {
			return true;
		}
		else {
			return false;
		}
	}

	/*
	@brief: Container ��
	@pre: ���� Container�� ID�� �����Ǿ� �־�� ��
	@post: none
	@return: ���� ContainerID�� �� ������ 1, ũ�� 0�� return��
	*/
	bool operator<(const ContainerType& data) {
		if (C_ID < data.GetContainerID()) {
			return true;
		}
		else {
			return false;
		}
	}

	/*
	@brief: Container�� ���� �Ҵ����
	@pre: �Ҵ��� Container�� ������ �����Ǿ� �־����
	@post: parameter�� ���� Container�� ���� Container�� ��ü��
	@param: �Ҵ��� Container
	*/
	void operator=(const ContainerType& data) {
		C_ID = data.GetContainerID();
		C_Name = data.GetContainerName();
		C_Type = data.GetContainerType();
		numOfitem = data.GetNumOfItem();
		ItemList = data.ItemList;
		C_Photo = data.GetContainerPhoto();
	}
};


#endif // !__CONTAINERTYPE_H