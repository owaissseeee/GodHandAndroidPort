#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _motionVector
// Address: 0x39db28 - 0x39df50
void _motionVector_0x39db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVector_0x39db28");
#endif

    switch (ctx->pc) {
        case 0x39db78u: goto label_39db78;
        case 0x39db9cu: goto label_39db9c;
        case 0x39dc14u: goto label_39dc14;
        case 0x39dcacu: goto label_39dcac;
        case 0x39dcd0u: goto label_39dcd0;
        case 0x39dd3cu: goto label_39dd3c;
        case 0x39dd60u: goto label_39dd60;
        case 0x39ddd4u: goto label_39ddd4;
        case 0x39de98u: goto label_39de98;
        case 0x39debcu: goto label_39debc;
        default: break;
    }

    ctx->pc = 0x39db28u;

    // 0x39db28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x39db2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39db30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39db30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db34: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x39db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x39db38: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x39db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x39db3c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x39db3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db40: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x39db40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x39db44: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x39db44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db48: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x39db48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x39db4c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x39db4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x39db54: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x39db54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39db5c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x39db5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39db60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39db64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39db64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x39db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x39db6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x39db6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db70: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39DB70u;
    SET_GPR_U32(ctx, 31, 0x39DB78u);
    ctx->pc = 0x39DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DB70u;
    // 0x39db74: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39DB70u, 0x39DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DB78u;
label_39db78:
    // 0x39db78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39db7c: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x39db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x39db80: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39db84: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x39db84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x39db88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39db88u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39db8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39db90: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x39db90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x39db94: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39DB94u;
    SET_GPR_U32(ctx, 31, 0x39DB9Cu);
    ctx->pc = 0x39DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DB94u;
    // 0x39db98: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39DB94u, 0x39DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DB9Cu;
label_39db9c:
    // 0x39db9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39db9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dba0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39dba4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39dba8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39dba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39dbac: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39dbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39dbb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x39dbb4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39dbb4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39dbb8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39dbbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39dbbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39dbc0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39DBC0u;
    {
        const bool branch_taken_0x39dbc0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBC0u;
        // 0x39dbc4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dbc0) {
            ctx->pc = 0x39DBD8u;
            goto label_39dbd8;
        }
    }
    ctx->pc = 0x39DBC8u;
    // 0x39dbc8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x39dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39dbcc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x39dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x39dbd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39DBD0u;
    {
        const bool branch_taken_0x39dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBD0u;
        // 0x39dbd4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dbd0) {
            ctx->pc = 0x39DBDCu;
            goto label_39dbdc;
        }
    }
    ctx->pc = 0x39DBD8u;
label_39dbd8:
    // 0x39dbd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_39dbdc:
    // 0x39dbdc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x39dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x39dbe0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x39dbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x39dbe4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x39dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x39dbe8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39dbe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39dbec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39dbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39dbf0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x39dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x39dbf4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x39dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x39dbf8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x39DBF8u;
    {
        const bool branch_taken_0x39dbf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DBF8u;
        // 0x39dbfc: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dbf8) {
            ctx->pc = 0x39DC1Cu;
            goto label_39dc1c;
        }
    }
    ctx->pc = 0x39DC00u;
    // 0x39dc00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39DC00u;
    {
        const bool branch_taken_0x39dc00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC00u;
        // 0x39dc04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc00) {
            ctx->pc = 0x39DC20u;
            goto label_39dc20;
        }
    }
    ctx->pc = 0x39DC08u;
    // 0x39dc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39dc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dc0c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39DC0Cu;
    SET_GPR_U32(ctx, 31, 0x39DC14u);
    ctx->pc = 0x39DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DC0Cu;
    // 0x39dc10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39DC0Cu, 0x39DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DC14u;
label_39dc14:
    // 0x39dc14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39DC14u;
    {
        const bool branch_taken_0x39dc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC14u;
        // 0x39dc18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc14) {
            ctx->pc = 0x39DC20u;
            goto label_39dc20;
        }
    }
    ctx->pc = 0x39DC1Cu;
label_39dc1c:
    // 0x39dc1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39dc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc20:
    // 0x39dc20: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x39dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39dc24: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x39dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39dc28: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x39dc28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x39dc2c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x39dc2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x39dc30: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x39DC30u;
    {
        const bool branch_taken_0x39dc30 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x39DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC30u;
        // 0x39dc34: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc30) {
            ctx->pc = 0x39DC64u;
            goto label_39dc64;
        }
    }
    ctx->pc = 0x39DC38u;
    // 0x39dc38: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x39dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x39dc3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39dc40: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x39dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x39dc44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39dc48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39dc4c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x39dc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x39dc50: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x39DC50u;
    {
        const bool branch_taken_0x39dc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC50u;
        // 0x39dc54: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc50) {
            ctx->pc = 0x39DC98u;
            goto label_39dc98;
        }
    }
    ctx->pc = 0x39DC58u;
    // 0x39dc58: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39dc5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39DC5Cu;
    {
        const bool branch_taken_0x39dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC5Cu;
        // 0x39dc60: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc5c) {
            ctx->pc = 0x39DC94u;
            goto label_39dc94;
        }
    }
    ctx->pc = 0x39DC64u;
label_39dc64:
    // 0x39dc64: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x39DC64u;
    {
        const bool branch_taken_0x39dc64 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x39DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC64u;
        // 0x39dc68: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc64) {
            ctx->pc = 0x39DC98u;
            goto label_39dc98;
        }
    }
    ctx->pc = 0x39DC6Cu;
    // 0x39dc6c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x39dc6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x39dc70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x39dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x39dc74: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x39dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x39dc78: 0x61823  negu        $v1, $a2
    ctx->pc = 0x39dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x39dc7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39dc80: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x39dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39dc84: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39dc84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39dc88: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39DC88u;
    {
        const bool branch_taken_0x39dc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC88u;
        // 0x39dc8c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc88) {
            ctx->pc = 0x39DC94u;
            goto label_39dc94;
        }
    }
    ctx->pc = 0x39DC90u;
    // 0x39dc90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_39dc94:
    // 0x39dc94: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x39dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_39dc98:
    // 0x39dc98: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x39dc98u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x39dc9c: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x39DC9Cu;
    {
        const bool branch_taken_0x39dc9c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DC9Cu;
        // 0x39dca0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc9c) {
            ctx->pc = 0x39DD34u;
            goto label_39dd34;
        }
    }
    ctx->pc = 0x39DCA4u;
    // 0x39dca4: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39DCA4u;
    SET_GPR_U32(ctx, 31, 0x39DCACu);
    ctx->pc = 0x39DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DCA4u;
    // 0x39dca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39DCA4u, 0x39DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DCACu;
label_39dcac:
    // 0x39dcac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39dcb0: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x39dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x39dcb4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39dcb8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x39dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x39dcbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39dcbcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39dcc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dcc4: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x39dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x39dcc8: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39DCC8u;
    SET_GPR_U32(ctx, 31, 0x39DCD0u);
    ctx->pc = 0x39DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DCC8u;
    // 0x39dccc: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39DCC8u, 0x39DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DCD0u;
label_39dcd0:
    // 0x39dcd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39dcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dcd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39dcd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39dcdc: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39dcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39dce0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39dce4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x39dce8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39dce8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39dcec: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39dcf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39dcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39dcf4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39DCF4u;
    {
        const bool branch_taken_0x39dcf4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DCF4u;
        // 0x39dcf8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dcf4) {
            ctx->pc = 0x39DD0Cu;
            goto label_39dd0c;
        }
    }
    ctx->pc = 0x39DCFCu;
    // 0x39dcfc: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x39dcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39dd00: 0x21023  negu        $v0, $v0
    ctx->pc = 0x39dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x39dd04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39DD04u;
    {
        const bool branch_taken_0x39dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD04u;
        // 0x39dd08: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd04) {
            ctx->pc = 0x39DD10u;
            goto label_39dd10;
        }
    }
    ctx->pc = 0x39DD0Cu;
label_39dd0c:
    // 0x39dd0c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_39dd10:
    // 0x39dd10: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x39dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x39dd14: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x39dd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x39dd18: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x39dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x39dd1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39dd1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39dd20: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39dd20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39dd24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x39dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x39dd28: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x39dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x39dd2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x39dd2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x39dd30: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x39dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_39dd34:
    // 0x39dd34: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39DD34u;
    SET_GPR_U32(ctx, 31, 0x39DD3Cu);
    ctx->pc = 0x39DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DD34u;
    // 0x39dd38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39DD34u, 0x39DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DD3Cu;
label_39dd3c:
    // 0x39dd3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39dd40: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x39dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x39dd44: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39dd48: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x39dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x39dd4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39dd4cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39dd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dd54: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x39dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x39dd58: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39DD58u;
    SET_GPR_U32(ctx, 31, 0x39DD60u);
    ctx->pc = 0x39DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DD58u;
    // 0x39dd5c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39DD58u, 0x39DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DD60u;
label_39dd60:
    // 0x39dd60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39dd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dd64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39dd68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39dd6c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39dd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39dd70: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39dd74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x39dd78: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39dd78u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39dd7c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39dd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39dd80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39dd80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39dd84: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39DD84u;
    {
        const bool branch_taken_0x39dd84 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD84u;
        // 0x39dd88: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd84) {
            ctx->pc = 0x39DD9Cu;
            goto label_39dd9c;
        }
    }
    ctx->pc = 0x39DD8Cu;
    // 0x39dd8c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x39dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39dd90: 0x21023  negu        $v0, $v0
    ctx->pc = 0x39dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x39dd94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39DD94u;
    {
        const bool branch_taken_0x39dd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DD94u;
        // 0x39dd98: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd94) {
            ctx->pc = 0x39DDA0u;
            goto label_39dda0;
        }
    }
    ctx->pc = 0x39DD9Cu;
label_39dd9c:
    // 0x39dd9c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_39dda0:
    // 0x39dda0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x39dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x39dda4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x39dda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x39dda8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x39dda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x39ddac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39ddacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39ddb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39ddb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39ddb4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x39ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x39ddb8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x39ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x39ddbc: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x39DDBCu;
    {
        const bool branch_taken_0x39ddbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDBCu;
        // 0x39ddc0: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ddbc) {
            ctx->pc = 0x39DDDCu;
            goto label_39dddc;
        }
    }
    ctx->pc = 0x39DDC4u;
    // 0x39ddc4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39DDC4u;
    {
        const bool branch_taken_0x39ddc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDC4u;
        // 0x39ddc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ddc4) {
            ctx->pc = 0x39DDDCu;
            goto label_39dddc;
        }
    }
    ctx->pc = 0x39DDCCu;
    // 0x39ddcc: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39DDCCu;
    SET_GPR_U32(ctx, 31, 0x39DDD4u);
    ctx->pc = 0x39DDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DDCCu;
    // 0x39ddd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39DDCCu, 0x39DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DDD4u;
label_39ddd4:
    // 0x39ddd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39DDD4u;
    {
        const bool branch_taken_0x39ddd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DDD4u;
        // 0x39ddd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ddd4) {
            ctx->pc = 0x39DDE0u;
            goto label_39dde0;
        }
    }
    ctx->pc = 0x39DDDCu;
label_39dddc:
    // 0x39dddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39dddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dde0:
    // 0x39dde0: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39DDE0u;
    {
        const bool branch_taken_0x39dde0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dde0) {
            ctx->pc = 0x39DDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DDE0u;
            // 0x39dde4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DDF8u;
            goto label_39ddf8;
        }
    }
    ctx->pc = 0x39DDE8u;
    // 0x39dde8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x39dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x39ddec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39ddecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39ddf0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x39ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x39ddf4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x39ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_39ddf8:
    // 0x39ddf8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x39ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39ddfc: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x39ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x39de00: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x39de00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x39de04: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x39de04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x39de08: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x39DE08u;
    {
        const bool branch_taken_0x39de08 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x39DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE08u;
        // 0x39de0c: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de08) {
            ctx->pc = 0x39DE3Cu;
            goto label_39de3c;
        }
    }
    ctx->pc = 0x39DE10u;
    // 0x39de10: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x39de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x39de14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39de18: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x39de18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x39de1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39de20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39de20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39de24: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x39de24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x39de28: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x39DE28u;
    {
        const bool branch_taken_0x39de28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE28u;
        // 0x39de2c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de28) {
            ctx->pc = 0x39DE70u;
            goto label_39de70;
        }
    }
    ctx->pc = 0x39DE30u;
    // 0x39de30: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39de30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39de34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39DE34u;
    {
        const bool branch_taken_0x39de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE34u;
        // 0x39de38: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de34) {
            ctx->pc = 0x39DE6Cu;
            goto label_39de6c;
        }
    }
    ctx->pc = 0x39DE3Cu;
label_39de3c:
    // 0x39de3c: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x39DE3Cu;
    {
        const bool branch_taken_0x39de3c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x39DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE3Cu;
        // 0x39de40: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de3c) {
            ctx->pc = 0x39DE70u;
            goto label_39de70;
        }
    }
    ctx->pc = 0x39DE44u;
    // 0x39de44: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x39de44u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x39de48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x39de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x39de4c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x39de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x39de50: 0x61823  negu        $v1, $a2
    ctx->pc = 0x39de50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x39de54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39de54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39de58: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x39de58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39de5c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39de5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39de60: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39DE60u;
    {
        const bool branch_taken_0x39de60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE60u;
        // 0x39de64: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de60) {
            ctx->pc = 0x39DE6Cu;
            goto label_39de6c;
        }
    }
    ctx->pc = 0x39DE68u;
    // 0x39de68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_39de6c:
    // 0x39de6c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x39de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_39de70:
    // 0x39de70: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x39de70u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x39de74: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x39DE74u;
    {
        const bool branch_taken_0x39de74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE74u;
        // 0x39de78: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de74) {
            ctx->pc = 0x39DE88u;
            goto label_39de88;
        }
    }
    ctx->pc = 0x39DE7Cu;
    // 0x39de7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x39de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x39de80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39de80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39de84: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x39de84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_39de88:
    // 0x39de88: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x39DE88u;
    {
        const bool branch_taken_0x39de88 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DE88u;
        // 0x39de8c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39de88) {
            ctx->pc = 0x39DF24u;
            goto label_39df24;
        }
    }
    ctx->pc = 0x39DE90u;
    // 0x39de90: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39DE90u;
    SET_GPR_U32(ctx, 31, 0x39DE98u);
    ctx->pc = 0x39DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DE90u;
    // 0x39de94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39DE90u, 0x39DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DE98u;
label_39de98:
    // 0x39de98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39de9c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x39de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x39dea0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39dea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39dea4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x39dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x39dea8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39dea8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x39deac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39deb0: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x39deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x39deb4: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39DEB4u;
    SET_GPR_U32(ctx, 31, 0x39DEBCu);
    ctx->pc = 0x39DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DEB4u;
    // 0x39deb8: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39DEB4u, 0x39DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DEBCu;
label_39debc:
    // 0x39debc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39debcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dec0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39dec4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39dec8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39dec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39decc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39ded0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x39ded4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39ded4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39ded8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39ded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39dedc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39dedcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39dee0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39DEE0u;
    {
        const bool branch_taken_0x39dee0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEE0u;
        // 0x39dee4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dee0) {
            ctx->pc = 0x39DEF8u;
            goto label_39def8;
        }
    }
    ctx->pc = 0x39DEE8u;
    // 0x39dee8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x39dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39deec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x39deecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x39def0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39DEF0u;
    {
        const bool branch_taken_0x39def0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DEF0u;
        // 0x39def4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39def0) {
            ctx->pc = 0x39DEFCu;
            goto label_39defc;
        }
    }
    ctx->pc = 0x39DEF8u;
label_39def8:
    // 0x39def8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_39defc:
    // 0x39defc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x39defcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x39df00: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x39df00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x39df04: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x39df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x39df08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39df08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39df0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39df0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39df10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x39df10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x39df14: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x39df14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x39df18: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x39df18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x39df1c: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x39df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x39df20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39df20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_39df24:
    // 0x39df24: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x39df24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39df28: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x39df28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39df2c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x39df2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39df30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x39df30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39df34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39df34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39df38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39df38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39df3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39df3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39df40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39df40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39df44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39df44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39df48: 0x3e00008  jr          $ra
    ctx->pc = 0x39DF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF48u;
        // 0x39df4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DF50u;
}
