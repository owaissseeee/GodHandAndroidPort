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

// Function: func_002AC9B8
// Address: 0x2ac9b8 - 0x2acbe8
void func_002AC9B8_0x2ac9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC9B8_0x2ac9b8");
#endif

    switch (ctx->pc) {
        case 0x2aca18u: goto label_2aca18;
        case 0x2aca24u: goto label_2aca24;
        case 0x2aca30u: goto label_2aca30;
        case 0x2aca3cu: goto label_2aca3c;
        case 0x2aca48u: goto label_2aca48;
        case 0x2aca54u: goto label_2aca54;
        case 0x2aca60u: goto label_2aca60;
        case 0x2aca6cu: goto label_2aca6c;
        case 0x2aca78u: goto label_2aca78;
        case 0x2aca84u: goto label_2aca84;
        case 0x2acae0u: goto label_2acae0;
        case 0x2acb14u: goto label_2acb14;
        case 0x2acb20u: goto label_2acb20;
        case 0x2acb2cu: goto label_2acb2c;
        case 0x2acb38u: goto label_2acb38;
        case 0x2acb44u: goto label_2acb44;
        case 0x2acb50u: goto label_2acb50;
        case 0x2acb5cu: goto label_2acb5c;
        case 0x2acb68u: goto label_2acb68;
        case 0x2acb74u: goto label_2acb74;
        case 0x2acb80u: goto label_2acb80;
        default: break;
    }

    ctx->pc = 0x2ac9b8u;

    // 0x2ac9b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ac9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ac9bc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2ac9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2ac9c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2ac9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2ac9c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9c8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2ac9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2ac9cc: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x2ac9ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ac9d0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2ac9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2ac9d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ac9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ac9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ac9dc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2ac9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2ac9e0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2ac9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2ac9e4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2ac9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2ac9e8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2ac9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2ac9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac9f0: 0xa620001a  sh          $zero, 0x1A($s1)
    ctx->pc = 0x2ac9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ac9f4: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x2ac9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac9f8: 0x1240006e  beqz        $s2, . + 4 + (0x6E << 2)
    ctx->pc = 0x2AC9F8u;
    {
        const bool branch_taken_0x2ac9f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9F8u;
        // 0x2ac9fc: 0xa220001e  sb          $zero, 0x1E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9f8) {
            ctx->pc = 0x2ACBB4u;
            goto label_2acbb4;
        }
    }
    ctx->pc = 0x2ACA00u;
    // 0x2aca00: 0xa64000a0  sh          $zero, 0xA0($s2)
    ctx->pc = 0x2aca00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aca04: 0xa64000a2  sh          $zero, 0xA2($s2)
    ctx->pc = 0x2aca04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aca08: 0xa64000a6  sh          $zero, 0xA6($s2)
    ctx->pc = 0x2aca08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aca0c: 0xa64000a8  sh          $zero, 0xA8($s2)
    ctx->pc = 0x2aca0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aca10: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x2ACA10u;
    SET_GPR_U32(ctx, 31, 0x2ACA18u);
    ctx->pc = 0x2ACA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA10u;
    // 0x2aca14: 0xa64000a4  sh          $zero, 0xA4($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 164), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABC18u, 0x2ACA10u, 0x2ACA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA18u;
label_2aca18:
    // 0x2aca18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca1c: 0xc0aaf0c  jal         func_2ABC30
    ctx->pc = 0x2ACA1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA24u);
    ctx->pc = 0x2ACA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA1Cu;
    // 0x2aca20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABC30u, 0x2ACA1Cu, 0x2ACA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA24u;
label_2aca24:
    // 0x2aca24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca28: 0xc0aaf3a  jal         func_2ABCE8
    ctx->pc = 0x2ACA28u;
    SET_GPR_U32(ctx, 31, 0x2ACA30u);
    ctx->pc = 0x2ACA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA28u;
    // 0x2aca2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCE8u, 0x2ACA28u, 0x2ACA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA30u;
label_2aca30:
    // 0x2aca30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca34: 0xc0aaf4c  jal         func_2ABD30
    ctx->pc = 0x2ACA34u;
    SET_GPR_U32(ctx, 31, 0x2ACA3Cu);
    ctx->pc = 0x2ACA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA34u;
    // 0x2aca38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD30u, 0x2ACA34u, 0x2ACA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA3Cu;
label_2aca3c:
    // 0x2aca3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca40: 0xc0aaf5e  jal         func_2ABD78
    ctx->pc = 0x2ACA40u;
    SET_GPR_U32(ctx, 31, 0x2ACA48u);
    ctx->pc = 0x2ACA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA40u;
    // 0x2aca44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD78u, 0x2ACA40u, 0x2ACA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA48u;
label_2aca48:
    // 0x2aca48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca4c: 0xc0aaf70  jal         func_2ABDC0
    ctx->pc = 0x2ACA4Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA54u);
    ctx->pc = 0x2ACA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA4Cu;
    // 0x2aca50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDC0u, 0x2ACA4Cu, 0x2ACA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA54u;
label_2aca54:
    // 0x2aca54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca58: 0xc0ab012  jal         func_2AC048
    ctx->pc = 0x2ACA58u;
    SET_GPR_U32(ctx, 31, 0x2ACA60u);
    ctx->pc = 0x2ACA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA58u;
    // 0x2aca5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC048u, 0x2ACA58u, 0x2ACA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA60u;
label_2aca60:
    // 0x2aca60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca64: 0xc0ab070  jal         func_2AC1C0
    ctx->pc = 0x2ACA64u;
    SET_GPR_U32(ctx, 31, 0x2ACA6Cu);
    ctx->pc = 0x2ACA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA64u;
    // 0x2aca68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC1C0u, 0x2ACA64u, 0x2ACA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA6Cu;
label_2aca6c:
    // 0x2aca6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca70: 0xc0ab0a6  jal         func_2AC298
    ctx->pc = 0x2ACA70u;
    SET_GPR_U32(ctx, 31, 0x2ACA78u);
    ctx->pc = 0x2ACA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA70u;
    // 0x2aca74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC298u, 0x2ACA70u, 0x2ACA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA78u;
label_2aca78:
    // 0x2aca78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aca78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca7c: 0xc0ab0de  jal         func_2AC378
    ctx->pc = 0x2ACA7Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA84u);
    ctx->pc = 0x2ACA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA7Cu;
    // 0x2aca80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC378u, 0x2ACA7Cu, 0x2ACA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA84u;
label_2aca84:
    // 0x2aca84: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ACA84u;
    {
        const bool branch_taken_0x2aca84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA84u;
        // 0x2aca88: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca84) {
            ctx->pc = 0x2ACAB8u;
            goto label_2acab8;
        }
    }
    ctx->pc = 0x2ACA8Cu;
    // 0x2aca8c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2aca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2aca90: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x2aca90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2aca94: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x2aca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2aca98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2aca9c: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2aca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2acaa0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2acaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2acaa4: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x2acaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x2acaa8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2acaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2acaac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2acaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2acab0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACAB0u;
    {
        const bool branch_taken_0x2acab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAB0u;
        // 0x2acab4: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acab0) {
            ctx->pc = 0x2ACABCu;
            goto label_2acabc;
        }
    }
    ctx->pc = 0x2ACAB8u;
label_2acab8:
    // 0x2acab8: 0x34427c00  ori         $v0, $v0, 0x7C00
    ctx->pc = 0x2acab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31744);
label_2acabc:
    // 0x2acabc: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2acabcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x2acac0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2acac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2acac4: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2ACAC4u;
    {
        const bool branch_taken_0x2acac4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ACAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAC4u;
        // 0x2acac8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acac4) {
            ctx->pc = 0x2ACBB4u;
            goto label_2acbb4;
        }
    }
    ctx->pc = 0x2ACACCu;
    // 0x2acacc: 0x241edfff  addiu       $fp, $zero, -0x2001
    ctx->pc = 0x2acaccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2acad0: 0x2417efff  addiu       $s7, $zero, -0x1001
    ctx->pc = 0x2acad0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2acad4: 0x2416f7ff  addiu       $s6, $zero, -0x801
    ctx->pc = 0x2acad4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2acad8: 0x2415fbff  addiu       $s5, $zero, -0x401
    ctx->pc = 0x2acad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x2acadc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2acadcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acae0:
    // 0x2acae0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2acae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2acae4: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x2acae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2acae8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2acae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2acaec: 0x5643002d  bnel        $s2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2ACAECu;
    {
        const bool branch_taken_0x2acaec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2acaec) {
            ctx->pc = 0x2ACAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACAECu;
            // 0x2acaf0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACBA4u;
            goto label_2acba4;
        }
    }
    ctx->pc = 0x2ACAF4u;
    // 0x2acaf4: 0xa60000a0  sh          $zero, 0xA0($s0)
    ctx->pc = 0x2acaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x2acaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acafc: 0xa60000a2  sh          $zero, 0xA2($s0)
    ctx->pc = 0x2acafcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x2acb00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2acb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb04: 0xa60000a6  sh          $zero, 0xA6($s0)
    ctx->pc = 0x2acb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x2acb08: 0xa60000a8  sh          $zero, 0xA8($s0)
    ctx->pc = 0x2acb08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x2acb0c: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x2ACB0Cu;
    SET_GPR_U32(ctx, 31, 0x2ACB14u);
    ctx->pc = 0x2ACB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB0Cu;
    // 0x2acb10: 0xa60000a4  sh          $zero, 0xA4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABC18u, 0x2ACB0Cu, 0x2ACB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB14u;
label_2acb14:
    // 0x2acb14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb18: 0xc0aaf0c  jal         func_2ABC30
    ctx->pc = 0x2ACB18u;
    SET_GPR_U32(ctx, 31, 0x2ACB20u);
    ctx->pc = 0x2ACB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB18u;
    // 0x2acb1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABC30u, 0x2ACB18u, 0x2ACB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB20u;
label_2acb20:
    // 0x2acb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb24: 0xc0aaf3a  jal         func_2ABCE8
    ctx->pc = 0x2ACB24u;
    SET_GPR_U32(ctx, 31, 0x2ACB2Cu);
    ctx->pc = 0x2ACB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB24u;
    // 0x2acb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCE8u, 0x2ACB24u, 0x2ACB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB2Cu;
label_2acb2c:
    // 0x2acb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb30: 0xc0aaf4c  jal         func_2ABD30
    ctx->pc = 0x2ACB30u;
    SET_GPR_U32(ctx, 31, 0x2ACB38u);
    ctx->pc = 0x2ACB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB30u;
    // 0x2acb34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD30u, 0x2ACB30u, 0x2ACB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB38u;
label_2acb38:
    // 0x2acb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb3c: 0xc0aaf5e  jal         func_2ABD78
    ctx->pc = 0x2ACB3Cu;
    SET_GPR_U32(ctx, 31, 0x2ACB44u);
    ctx->pc = 0x2ACB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB3Cu;
    // 0x2acb40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD78u, 0x2ACB3Cu, 0x2ACB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB44u;
label_2acb44:
    // 0x2acb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb48: 0xc0aaf70  jal         func_2ABDC0
    ctx->pc = 0x2ACB48u;
    SET_GPR_U32(ctx, 31, 0x2ACB50u);
    ctx->pc = 0x2ACB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB48u;
    // 0x2acb4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDC0u, 0x2ACB48u, 0x2ACB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB50u;
label_2acb50:
    // 0x2acb50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb54: 0xc0ab012  jal         func_2AC048
    ctx->pc = 0x2ACB54u;
    SET_GPR_U32(ctx, 31, 0x2ACB5Cu);
    ctx->pc = 0x2ACB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB54u;
    // 0x2acb58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC048u, 0x2ACB54u, 0x2ACB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB5Cu;
label_2acb5c:
    // 0x2acb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb60: 0xc0ab070  jal         func_2AC1C0
    ctx->pc = 0x2ACB60u;
    SET_GPR_U32(ctx, 31, 0x2ACB68u);
    ctx->pc = 0x2ACB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB60u;
    // 0x2acb64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC1C0u, 0x2ACB60u, 0x2ACB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB68u;
label_2acb68:
    // 0x2acb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb6c: 0xc0ab0a6  jal         func_2AC298
    ctx->pc = 0x2ACB6Cu;
    SET_GPR_U32(ctx, 31, 0x2ACB74u);
    ctx->pc = 0x2ACB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB6Cu;
    // 0x2acb70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC298u, 0x2ACB6Cu, 0x2ACB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB74u;
label_2acb74:
    // 0x2acb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb78: 0xc0ab0de  jal         func_2AC378
    ctx->pc = 0x2ACB78u;
    SET_GPR_U32(ctx, 31, 0x2ACB80u);
    ctx->pc = 0x2ACB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB78u;
    // 0x2acb7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC378u, 0x2ACB78u, 0x2ACB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB80u;
label_2acb80:
    // 0x2acb80: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2acb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2acb84: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2acb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2acb88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2acb8c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2acb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2acb90: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2acb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2acb94: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2acb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2acb98: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2acb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2acb9c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2acb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2acba0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2acba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2acba4:
    // 0x2acba4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2acba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2acba8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2acba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2acbac: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2ACBACu;
    {
        const bool branch_taken_0x2acbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBACu;
        // 0x2acbb0: 0x269400ac  addiu       $s4, $s4, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbac) {
            ctx->pc = 0x2ACAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acae0;
        }
    }
    ctx->pc = 0x2ACBB4u;
label_2acbb4:
    // 0x2acbb4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2acbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2acbb8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2acbb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2acbbc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2acbbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2acbc0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2acbc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acbc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2acbc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acbc8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2acbc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acbcc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2acbccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acbd0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2acbd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acbd4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2acbd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acbd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBDCu;
        // 0x2acbe0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACBE4u;
    // 0x2acbe4: 0x0  nop
    ctx->pc = 0x2acbe4u;
    // NOP
    ctx->pc = 0x2acbe8u;
}
