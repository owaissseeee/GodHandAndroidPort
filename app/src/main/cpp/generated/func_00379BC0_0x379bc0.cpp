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

// Function: func_00379BC0
// Address: 0x379bc0 - 0x379ec0
void func_00379BC0_0x379bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00379BC0_0x379bc0");
#endif

    switch (ctx->pc) {
        case 0x379c04u: goto label_379c04;
        case 0x379c24u: goto label_379c24;
        case 0x379c40u: goto label_379c40;
        case 0x379c5cu: goto label_379c5c;
        case 0x379c78u: goto label_379c78;
        case 0x379c94u: goto label_379c94;
        case 0x379cb0u: goto label_379cb0;
        case 0x379cccu: goto label_379ccc;
        case 0x379ce8u: goto label_379ce8;
        case 0x379d04u: goto label_379d04;
        case 0x379d24u: goto label_379d24;
        case 0x379d44u: goto label_379d44;
        case 0x379d64u: goto label_379d64;
        case 0x379d84u: goto label_379d84;
        case 0x379da4u: goto label_379da4;
        case 0x379dc4u: goto label_379dc4;
        case 0x379de0u: goto label_379de0;
        case 0x379dfcu: goto label_379dfc;
        case 0x379e18u: goto label_379e18;
        case 0x379e34u: goto label_379e34;
        case 0x379e50u: goto label_379e50;
        case 0x379e6cu: goto label_379e6c;
        case 0x379e88u: goto label_379e88;
        case 0x379ea4u: goto label_379ea4;
        default: break;
    }

    ctx->pc = 0x379bc0u;

    // 0x379bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379bc4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x379bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x379bc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x379bcc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379bccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379bd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379bd4: 0x24e7b868  addiu       $a3, $a3, -0x4798
    ctx->pc = 0x379bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948968));
    // 0x379bd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379bdc: 0x3c110077  lui         $s1, 0x77
    ctx->pc = 0x379bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)119 << 16));
    // 0x379be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379be4: 0x2452e910  addiu       $s2, $v0, -0x16F0
    ctx->pc = 0x379be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x379be8: 0x9448e910  lhu         $t0, -0x16F0($v0)
    ctx->pc = 0x379be8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x76E910u));
    // 0x379bec: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379bf0: 0x96490014  lhu         $t1, 0x14($s2)
    ctx->pc = 0x379bf0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x76E924u));
    // 0x379bf4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379bf8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x379bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379bfc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379BFCu;
    SET_GPR_U32(ctx, 31, 0x379C04u);
    ctx->pc = 0x379C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379BFCu;
    // 0x379c00: 0x2630b340  addiu       $s0, $s1, -0x4CC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379BFCu, 0x379C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C04u;
label_379c04:
    // 0x379c04: 0x96090012  lhu         $t1, 0x12($s0)
    ctx->pc = 0x379c04u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x379c08: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379c08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379c0c: 0x9628b340  lhu         $t0, -0x4CC0($s1)
    ctx->pc = 0x379c0cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294947648)));
    // 0x379c10: 0x24e7b888  addiu       $a3, $a3, -0x4778
    ctx->pc = 0x379c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949000));
    // 0x379c14: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379c18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379c1c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379C1Cu;
    SET_GPR_U32(ctx, 31, 0x379C24u);
    ctx->pc = 0x379C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C1Cu;
    // 0x379c20: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379C1Cu, 0x379C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C24u;
label_379c24:
    // 0x379c24: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x379c24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x379c28: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379c28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379c2c: 0x24e7b8a8  addiu       $a3, $a3, -0x4758
    ctx->pc = 0x379c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949032));
    // 0x379c30: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379c34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x379c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x379c38: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379C38u;
    SET_GPR_U32(ctx, 31, 0x379C40u);
    ctx->pc = 0x379C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C38u;
    // 0x379c3c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379C38u, 0x379C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C40u;
label_379c40:
    // 0x379c40: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x379c40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x379c44: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379c48: 0x24e7b8c0  addiu       $a3, $a3, -0x4740
    ctx->pc = 0x379c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949056));
    // 0x379c4c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379c50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x379c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x379c54: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379C54u;
    SET_GPR_U32(ctx, 31, 0x379C5Cu);
    ctx->pc = 0x379C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C54u;
    // 0x379c58: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379C54u, 0x379C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C5Cu;
label_379c5c:
    // 0x379c5c: 0x8e080030  lw          $t0, 0x30($s0)
    ctx->pc = 0x379c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x379c60: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379c64: 0x24e7b8d8  addiu       $a3, $a3, -0x4728
    ctx->pc = 0x379c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949080));
    // 0x379c68: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379c6c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x379c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379c70: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379C70u;
    SET_GPR_U32(ctx, 31, 0x379C78u);
    ctx->pc = 0x379C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C70u;
    // 0x379c74: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379C70u, 0x379C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C78u;
label_379c78:
    // 0x379c78: 0x8e080064  lw          $t0, 0x64($s0)
    ctx->pc = 0x379c78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x379c7c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379c80: 0x24e7b8f0  addiu       $a3, $a3, -0x4710
    ctx->pc = 0x379c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949104));
    // 0x379c84: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379c88: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x379c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x379c8c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379C8Cu;
    SET_GPR_U32(ctx, 31, 0x379C94u);
    ctx->pc = 0x379C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C8Cu;
    // 0x379c90: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379C8Cu, 0x379C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C94u;
label_379c94:
    // 0x379c94: 0x8e080068  lw          $t0, 0x68($s0)
    ctx->pc = 0x379c94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x379c98: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379c98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379c9c: 0x24e7b908  addiu       $a3, $a3, -0x46F8
    ctx->pc = 0x379c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949128));
    // 0x379ca0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379ca4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x379ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x379ca8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379CA8u;
    SET_GPR_U32(ctx, 31, 0x379CB0u);
    ctx->pc = 0x379CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CA8u;
    // 0x379cac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379CA8u, 0x379CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CB0u;
label_379cb0:
    // 0x379cb0: 0x8e08006c  lw          $t0, 0x6C($s0)
    ctx->pc = 0x379cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x379cb4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379cb8: 0x24e7b920  addiu       $a3, $a3, -0x46E0
    ctx->pc = 0x379cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949152));
    // 0x379cbc: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379cc0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x379cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x379cc4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379CC4u;
    SET_GPR_U32(ctx, 31, 0x379CCCu);
    ctx->pc = 0x379CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CC4u;
    // 0x379cc8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379CC4u, 0x379CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CCCu;
label_379ccc:
    // 0x379ccc: 0x8e080074  lw          $t0, 0x74($s0)
    ctx->pc = 0x379cccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x379cd0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379cd4: 0x24e7b938  addiu       $a3, $a3, -0x46C8
    ctx->pc = 0x379cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949176));
    // 0x379cd8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379cdc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x379cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x379ce0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379CE0u;
    SET_GPR_U32(ctx, 31, 0x379CE8u);
    ctx->pc = 0x379CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CE0u;
    // 0x379ce4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379CE0u, 0x379CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CE8u;
label_379ce8:
    // 0x379ce8: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x379ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x379cec: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379cf0: 0x24e7b950  addiu       $a3, $a3, -0x46B0
    ctx->pc = 0x379cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949200));
    // 0x379cf4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379cf8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x379cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x379cfc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379CFCu;
    SET_GPR_U32(ctx, 31, 0x379D04u);
    ctx->pc = 0x379D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CFCu;
    // 0x379d00: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379CFCu, 0x379D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D04u;
label_379d04:
    // 0x379d04: 0x82080084  lb          $t0, 0x84($s0)
    ctx->pc = 0x379d04u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x379d08: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379d08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379d0c: 0x82090085  lb          $t1, 0x85($s0)
    ctx->pc = 0x379d0cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x379d10: 0x24e7b968  addiu       $a3, $a3, -0x4698
    ctx->pc = 0x379d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949224));
    // 0x379d14: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379d18: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x379d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379d1c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379D1Cu;
    SET_GPR_U32(ctx, 31, 0x379D24u);
    ctx->pc = 0x379D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D1Cu;
    // 0x379d20: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379D1Cu, 0x379D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D24u;
label_379d24:
    // 0x379d24: 0x96080094  lhu         $t0, 0x94($s0)
    ctx->pc = 0x379d24u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x379d28: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379d28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379d2c: 0x96090096  lhu         $t1, 0x96($s0)
    ctx->pc = 0x379d2cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x379d30: 0x24e7b988  addiu       $a3, $a3, -0x4678
    ctx->pc = 0x379d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949256));
    // 0x379d34: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379d38: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x379d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379d3c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379D3Cu;
    SET_GPR_U32(ctx, 31, 0x379D44u);
    ctx->pc = 0x379D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D3Cu;
    // 0x379d40: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379D3Cu, 0x379D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D44u;
label_379d44:
    // 0x379d44: 0x960800c8  lhu         $t0, 0xC8($s0)
    ctx->pc = 0x379d44u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x379d48: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379d48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379d4c: 0x960900ca  lhu         $t1, 0xCA($s0)
    ctx->pc = 0x379d4cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 202)));
    // 0x379d50: 0x24e7b9a8  addiu       $a3, $a3, -0x4658
    ctx->pc = 0x379d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949288));
    // 0x379d54: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379d58: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x379d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x379d5c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379D5Cu;
    SET_GPR_U32(ctx, 31, 0x379D64u);
    ctx->pc = 0x379D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D5Cu;
    // 0x379d60: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379D5Cu, 0x379D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D64u;
label_379d64:
    // 0x379d64: 0x82080086  lb          $t0, 0x86($s0)
    ctx->pc = 0x379d64u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x379d68: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379d68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379d6c: 0x82090089  lb          $t1, 0x89($s0)
    ctx->pc = 0x379d6cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 137)));
    // 0x379d70: 0x24e7b9c8  addiu       $a3, $a3, -0x4638
    ctx->pc = 0x379d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949320));
    // 0x379d74: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379d78: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x379d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x379d7c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379D7Cu;
    SET_GPR_U32(ctx, 31, 0x379D84u);
    ctx->pc = 0x379D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D7Cu;
    // 0x379d80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379D7Cu, 0x379D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D84u;
label_379d84:
    // 0x379d84: 0x82080087  lb          $t0, 0x87($s0)
    ctx->pc = 0x379d84u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 135)));
    // 0x379d88: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379d8c: 0x8209008a  lb          $t1, 0x8A($s0)
    ctx->pc = 0x379d8cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 138)));
    // 0x379d90: 0x24e7b9e8  addiu       $a3, $a3, -0x4618
    ctx->pc = 0x379d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949352));
    // 0x379d94: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379d98: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x379d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x379d9c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379D9Cu;
    SET_GPR_U32(ctx, 31, 0x379DA4u);
    ctx->pc = 0x379DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D9Cu;
    // 0x379da0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379D9Cu, 0x379DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DA4u;
label_379da4:
    // 0x379da4: 0x8209008c  lb          $t1, 0x8C($s0)
    ctx->pc = 0x379da4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x379da8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379da8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379dac: 0x8208008b  lb          $t0, 0x8B($s0)
    ctx->pc = 0x379dacu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x379db0: 0x24e7ba08  addiu       $a3, $a3, -0x45F8
    ctx->pc = 0x379db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949384));
    // 0x379db4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379db8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x379db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x379dbc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379DBCu;
    SET_GPR_U32(ctx, 31, 0x379DC4u);
    ctx->pc = 0x379DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DBCu;
    // 0x379dc0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379DBCu, 0x379DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DC4u;
label_379dc4:
    // 0x379dc4: 0x8208008d  lb          $t0, 0x8D($s0)
    ctx->pc = 0x379dc4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
    // 0x379dc8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379dcc: 0x24e7ba28  addiu       $a3, $a3, -0x45D8
    ctx->pc = 0x379dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949416));
    // 0x379dd0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x379dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379dd4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x379dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x379dd8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379DD8u;
    SET_GPR_U32(ctx, 31, 0x379DE0u);
    ctx->pc = 0x379DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DD8u;
    // 0x379ddc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379DD8u, 0x379DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DE0u;
label_379de0:
    // 0x379de0: 0x86480038  lh          $t0, 0x38($s2)
    ctx->pc = 0x379de0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x379de4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379de4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379de8: 0x24e7ba40  addiu       $a3, $a3, -0x45C0
    ctx->pc = 0x379de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949440));
    // 0x379dec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x379decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379df0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x379df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379df4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379DF4u;
    SET_GPR_U32(ctx, 31, 0x379DFCu);
    ctx->pc = 0x379DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DF4u;
    // 0x379df8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379DF4u, 0x379DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DFCu;
label_379dfc:
    // 0x379dfc: 0x8648003a  lh          $t0, 0x3A($s2)
    ctx->pc = 0x379dfcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x379e00: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379e04: 0x24e7ba58  addiu       $a3, $a3, -0x45A8
    ctx->pc = 0x379e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949464));
    // 0x379e08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x379e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379e0c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x379e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379e10: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379E10u;
    SET_GPR_U32(ctx, 31, 0x379E18u);
    ctx->pc = 0x379E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E10u;
    // 0x379e14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379E10u, 0x379E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E18u;
label_379e18:
    // 0x379e18: 0x8648003c  lh          $t0, 0x3C($s2)
    ctx->pc = 0x379e18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x379e1c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379e20: 0x24e7ba70  addiu       $a3, $a3, -0x4590
    ctx->pc = 0x379e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949488));
    // 0x379e24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x379e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379e28: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x379e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x379e2c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379E2Cu;
    SET_GPR_U32(ctx, 31, 0x379E34u);
    ctx->pc = 0x379E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E2Cu;
    // 0x379e30: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379E2Cu, 0x379E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E34u;
label_379e34:
    // 0x379e34: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x379e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x379e38: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379e3c: 0x24e7ba88  addiu       $a3, $a3, -0x4578
    ctx->pc = 0x379e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949512));
    // 0x379e40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x379e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379e44: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x379e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x379e48: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379E48u;
    SET_GPR_U32(ctx, 31, 0x379E50u);
    ctx->pc = 0x379E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E48u;
    // 0x379e4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379E48u, 0x379E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E50u;
label_379e50:
    // 0x379e50: 0x8648005c  lh          $t0, 0x5C($s2)
    ctx->pc = 0x379e50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x379e54: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379e54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379e58: 0x24e7baa0  addiu       $a3, $a3, -0x4560
    ctx->pc = 0x379e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949536));
    // 0x379e5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x379e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379e60: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x379e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x379e64: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379E64u;
    SET_GPR_U32(ctx, 31, 0x379E6Cu);
    ctx->pc = 0x379E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E64u;
    // 0x379e68: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379E64u, 0x379E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E6Cu;
label_379e6c:
    // 0x379e6c: 0x86480060  lh          $t0, 0x60($s2)
    ctx->pc = 0x379e6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x379e70: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379e70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379e74: 0x24e7bab8  addiu       $a3, $a3, -0x4548
    ctx->pc = 0x379e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949560));
    // 0x379e78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x379e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379e7c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x379e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x379e80: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379E80u;
    SET_GPR_U32(ctx, 31, 0x379E88u);
    ctx->pc = 0x379E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E80u;
    // 0x379e84: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379E80u, 0x379E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E88u;
label_379e88:
    // 0x379e88: 0x96080010  lhu         $t0, 0x10($s0)
    ctx->pc = 0x379e88u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x379e8c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379e90: 0x24e7bad0  addiu       $a3, $a3, -0x4530
    ctx->pc = 0x379e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949584));
    // 0x379e94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x379e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379e98: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x379e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x379e9c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379E9Cu;
    SET_GPR_U32(ctx, 31, 0x379EA4u);
    ctx->pc = 0x379EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E9Cu;
    // 0x379ea0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379E9Cu, 0x379EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379EA4u;
label_379ea4:
    // 0x379ea4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379ea8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379eac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x379EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379EB4u;
        // 0x379eb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379EBCu;
    // 0x379ebc: 0x0  nop
    ctx->pc = 0x379ebcu;
    // NOP
    ctx->pc = 0x379ec0u;
}
