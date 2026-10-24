#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_00799C58
// Address: 0x799c58 - 0x799d80
void func_00799C58_0x799c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799C58_0x799c58");
#endif

    switch (ctx->pc) {
        case 0x799c98u: goto label_799c98;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cd4u: goto label_799cd4;
        case 0x799ce0u: goto label_799ce0;
        case 0x799d04u: goto label_799d04;
        case 0x799d20u: goto label_799d20;
        case 0x799d28u: goto label_799d28;
        case 0x799d34u: goto label_799d34;
        case 0x799d54u: goto label_799d54;
        case 0x799d60u: goto label_799d60;
        default: break;
    }

    ctx->pc = 0x799c58u;

    // 0x799c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799c5c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799c60: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x799c64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799c68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799c6c: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x799c70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799c78: 0x8e628658  lw          $v0, -0x79A8($s3)
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799c7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799c80: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799C80u;
    {
        const bool branch_taken_0x799c80 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x799C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C80u;
        // 0x799c84: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c80) {
            ctx->pc = 0x799CA0u;
            goto label_799ca0;
        }
    }
    ctx->pc = 0x799C88u;
    // 0x799c88: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799c8c: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799c90: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C90u;
    SET_GPR_U32(ctx, 31, 0x799C98u);
    ctx->pc = 0x799C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C90u;
    // 0x799c94: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C90u, 0x799C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x799C98u;
    {
        const bool branch_taken_0x799c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C98u;
        // 0x799c9c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c98) {
            ctx->pc = 0x799D64u;
            goto label_799d64;
        }
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799ca4: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799ca8: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x799CA8u;
    SET_GPR_U32(ctx, 31, 0x799CB0u);
    ctx->pc = 0x799CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA8u;
    // 0x799cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x799CA8u, 0x799CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB0u;
label_799cb0:
    // 0x799cb0: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CB0u;
            // 0x799cb4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CE4u;
            goto label_799ce4;
        }
    }
    ctx->pc = 0x799CB8u;
    // 0x799cb8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799cbc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799cc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ccc: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799CCCu;
    SET_GPR_U32(ctx, 31, 0x799CD4u);
    ctx->pc = 0x799CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CCCu;
    // 0x799cd0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799CCCu, 0x799CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD4u;
label_799cd4:
    // 0x799cd4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799cd8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799CD8u;
    SET_GPR_U32(ctx, 31, 0x799CE0u);
    ctx->pc = 0x799CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD8u;
    // 0x799cdc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799CD8u, 0x799CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE0u;
label_799ce0:
    // 0x799ce0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799ce4:
    // 0x799ce4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799ce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ce8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799cec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799cf0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799cf4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799cf8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799cfc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d18: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799D18u;
    SET_GPR_U32(ctx, 31, 0x799D20u);
    ctx->pc = 0x799D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D18u;
    // 0x799d1c: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799D18u, 0x799D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D20u;
label_799d20:
    // 0x799d20: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x799D20u;
    SET_GPR_U32(ctx, 31, 0x799D28u);
    ctx->pc = 0x799D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D20u;
    // 0x799d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x799D20u, 0x799D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D28u;
label_799d28:
    // 0x799d28: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799d2c: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x799D2Cu;
    SET_GPR_U32(ctx, 31, 0x799D34u);
    ctx->pc = 0x799D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D2Cu;
    // 0x799d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x799D2Cu, 0x799D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D34u;
label_799d34:
    // 0x799d34: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x799d38: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799d3c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799d40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d48: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x799d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x799d4c: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x799D4Cu;
    SET_GPR_U32(ctx, 31, 0x799D54u);
    ctx->pc = 0x799D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D4Cu;
    // 0x799d50: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x799D4Cu, 0x799D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D54u;
label_799d54:
    // 0x799d54: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d58: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D58u;
    SET_GPR_U32(ctx, 31, 0x799D60u);
    ctx->pc = 0x799D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D58u;
    // 0x799d5c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D58u, 0x799D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D60u;
label_799d60:
    // 0x799d60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799d64:
    // 0x799d64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799d6c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799d74: 0x3e00008  jr          $ra
    ctx->pc = 0x799D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D74u;
        // 0x799d78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D7Cu;
    // 0x799d7c: 0x0  nop
    ctx->pc = 0x799d7cu;
    // NOP
    ctx->pc = 0x799d80u;
}
} // namespace gh_r606
