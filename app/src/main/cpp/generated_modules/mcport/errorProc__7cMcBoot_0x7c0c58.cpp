#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: errorProc__7cMcBoot
// Address: 0x7c0c58 - 0x7c0e80
void errorProc__7cMcBoot_0x7c0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("errorProc__7cMcBoot_0x7c0c58");
#endif

    switch (ctx->pc) {
        case 0x7c0d14u: goto label_7c0d14;
        case 0x7c0d50u: goto label_7c0d50;
        case 0x7c0d68u: goto label_7c0d68;
        case 0x7c0da8u: goto label_7c0da8;
        case 0x7c0dfcu: goto label_7c0dfc;
        case 0x7c0e24u: goto label_7c0e24;
        case 0x7c0e58u: goto label_7c0e58;
        default: break;
    }

    ctx->pc = 0x7c0c58u;

    // 0x7c0c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c0c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c0c5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c0c60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c0c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c0c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c0c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0c68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c0c6c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c0c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c0c74: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c0c78: 0x1072000d  beq         $v1, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7C0C78u;
    {
        const bool branch_taken_0x7c0c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0C78u;
        // 0x7c0c7c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0c78) {
            ctx->pc = 0x7C0CB0u;
            goto label_7c0cb0;
        }
    }
    ctx->pc = 0x7C0C80u;
    // 0x7c0c80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0C80u;
    {
        const bool branch_taken_0x7c0c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c0c80) {
            ctx->pc = 0x7C0C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0C80u;
            // 0x7c0c84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0C98u;
            goto label_7c0c98;
        }
    }
    ctx->pc = 0x7C0C88u;
    // 0x7c0c88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C0C88u;
    {
        const bool branch_taken_0x7c0c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0C88u;
        // 0x7c0c8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0c88) {
            ctx->pc = 0x7C0CA8u;
            goto label_7c0ca8;
        }
    }
    ctx->pc = 0x7C0C90u;
    // 0x7c0c90: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x7C0C90u;
    {
        const bool branch_taken_0x7c0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0C90u;
        // 0x7c0c94: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0c90) {
            ctx->pc = 0x7C0E70u;
            goto label_7c0e70;
        }
    }
    ctx->pc = 0x7C0C98u;
label_7c0c98:
    // 0x7c0c98: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x7C0C98u;
    {
        const bool branch_taken_0x7c0c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0C98u;
        // 0x7c0c9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0c98) {
            ctx->pc = 0x7C0D5Cu;
            goto label_7c0d5c;
        }
    }
    ctx->pc = 0x7C0CA0u;
    // 0x7c0ca0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x7C0CA0u;
    {
        const bool branch_taken_0x7c0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CA0u;
        // 0x7c0ca4: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ca0) {
            ctx->pc = 0x7C0E70u;
            goto label_7c0e70;
        }
    }
    ctx->pc = 0x7C0CA8u;
label_7c0ca8:
    // 0x7c0ca8: 0xae3200f4  sw          $s2, 0xF4($s1)
    ctx->pc = 0x7c0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 18));
    // 0x7c0cac: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c0cacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_7c0cb0:
    // 0x7c0cb0: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x7c0cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c0cb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c0cb8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C0CB8u;
    {
        const bool branch_taken_0x7c0cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CB8u;
        // 0x7c0cbc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0cb8) {
            ctx->pc = 0x7C0CF8u;
            goto label_7c0cf8;
        }
    }
    ctx->pc = 0x7C0CC0u;
    // 0x7c0cc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0CC0u;
    {
        const bool branch_taken_0x7c0cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CC0u;
        // 0x7c0cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0cc0) {
            ctx->pc = 0x7C0CD8u;
            goto label_7c0cd8;
        }
    }
    ctx->pc = 0x7C0CC8u;
    // 0x7c0cc8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C0CC8u;
    {
        const bool branch_taken_0x7c0cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CC8u;
        // 0x7c0ccc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0cc8) {
            ctx->pc = 0x7C0CECu;
            goto label_7c0cec;
        }
    }
    ctx->pc = 0x7C0CD0u;
    // 0x7c0cd0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x7C0CD0u;
    {
        const bool branch_taken_0x7c0cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CD0u;
        // 0x7c0cd4: 0x3c043000  lui         $a0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0cd0) {
            ctx->pc = 0x7C0D20u;
            goto label_7c0d20;
        }
    }
    ctx->pc = 0x7C0CD8u;
label_7c0cd8:
    // 0x7c0cd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7c0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c0cdc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C0CDCu;
    {
        const bool branch_taken_0x7c0cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CDCu;
        // 0x7c0ce0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0cdc) {
            ctx->pc = 0x7C0D04u;
            goto label_7c0d04;
        }
    }
    ctx->pc = 0x7C0CE4u;
    // 0x7c0ce4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C0CE4u;
    {
        const bool branch_taken_0x7c0ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CE4u;
        // 0x7c0ce8: 0x3c043000  lui         $a0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ce4) {
            ctx->pc = 0x7C0D20u;
            goto label_7c0d20;
        }
    }
    ctx->pc = 0x7C0CECu;
label_7c0cec:
    // 0x7c0cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C0CF0u;
    {
        const bool branch_taken_0x7c0cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CF0u;
        // 0x7c0cf4: 0x24100012  addiu       $s0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0cf0) {
            ctx->pc = 0x7C0D0Cu;
            goto label_7c0d0c;
        }
    }
    ctx->pc = 0x7C0CF8u;
label_7c0cf8:
    // 0x7c0cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C0CFCu;
    {
        const bool branch_taken_0x7c0cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0CFCu;
        // 0x7c0d00: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0cfc) {
            ctx->pc = 0x7C0D0Cu;
            goto label_7c0d0c;
        }
    }
    ctx->pc = 0x7C0D04u;
label_7c0d04:
    // 0x7c0d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0d08: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x7c0d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_7c0d0c:
    // 0x7c0d0c: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C0D0Cu;
    SET_GPR_U32(ctx, 31, 0x7C0D14u);
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C0D0Cu, 0x7C0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0D14u;
label_7c0d14:
    // 0x7c0d14: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c0d18: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c0d1c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x7c0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_7c0d20:
    // 0x7c0d20: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x7c0d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x7c0d24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c0d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c0d28: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x7C0D28u;
    {
        const bool branch_taken_0x7c0d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0D28u;
        // 0x7c0d2c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0d28) {
            ctx->pc = 0x7C0E68u;
            goto label_7c0e68;
        }
    }
    ctx->pc = 0x7C0D30u;
    // 0x7c0d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c0d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0d34: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c0d38: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c0d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c0d3c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c0d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0d40: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c0d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0d44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c0d44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0d48: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C0D48u;
    SET_GPR_U32(ctx, 31, 0x7C0D50u);
    ctx->pc = 0x7C0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0D48u;
    // 0x7c0d4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C0D48u, 0x7C0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0D50u;
label_7c0d50:
    // 0x7c0d50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c0d54: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x7C0D54u;
    {
        const bool branch_taken_0x7c0d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0D54u;
        // 0x7c0d58: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0d54) {
            ctx->pc = 0x7C0E68u;
            goto label_7c0e68;
        }
    }
    ctx->pc = 0x7C0D5Cu;
label_7c0d5c:
    // 0x7c0d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0d60: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C0D60u;
    SET_GPR_U32(ctx, 31, 0x7C0D68u);
    ctx->pc = 0x7C0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0D60u;
    // 0x7c0d64: 0x24100017  addiu       $s0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C0D60u, 0x7C0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0D68u;
label_7c0d68:
    // 0x7c0d68: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c0d6c: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c0d70: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x7c0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c0d74: 0x3c030c00  lui         $v1, 0xC00
    ctx->pc = 0x7c0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
    // 0x7c0d78: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x7c0d78u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747650u));
    // 0x7c0d7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c0d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c0d80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C0D80u;
    {
        const bool branch_taken_0x7c0d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0D80u;
        // 0x7c0d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0d80) {
            ctx->pc = 0x7C0DBCu;
            goto label_7c0dbc;
        }
    }
    ctx->pc = 0x7C0D88u;
    // 0x7c0d88: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7c0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7c0d8c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c0d90: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c0d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c0d94: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c0d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0d98: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c0d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0d9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c0d9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0da0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C0DA0u;
    SET_GPR_U32(ctx, 31, 0x7C0DA8u);
    ctx->pc = 0x7C0DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0DA0u;
    // 0x7c0da4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C0DA0u, 0x7C0DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0DA8u;
label_7c0da8:
    // 0x7c0da8: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c0da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c0dac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x7c0dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7c0db0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c0db0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c0db4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x7C0DB4u;
    {
        const bool branch_taken_0x7c0db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0DB4u;
        // 0x7c0db8: 0xa223000c  sb          $v1, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0db4) {
            ctx->pc = 0x7C0E68u;
            goto label_7c0e68;
        }
    }
    ctx->pc = 0x7C0DBCu;
label_7c0dbc:
    // 0x7c0dbc: 0xdc8301a0  ld          $v1, 0x1A0($a0)
    ctx->pc = 0x7c0dbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x7c0dc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x7c0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x7c0dc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c0dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c0dc8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7C0DC8u;
    {
        const bool branch_taken_0x7c0dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0DC8u;
        // 0x7c0dcc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0dc8) {
            ctx->pc = 0x7C0E2Cu;
            goto label_7c0e2c;
        }
    }
    ctx->pc = 0x7C0DD0u;
    // 0x7c0dd0: 0x9230000c  lbu         $s0, 0xC($s1)
    ctx->pc = 0x7c0dd0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c0dd4: 0x1612000b  bne         $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x7C0DD4u;
    {
        const bool branch_taken_0x7c0dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0DD4u;
        // 0x7c0dd8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0dd4) {
            ctx->pc = 0x7C0E04u;
            goto label_7c0e04;
        }
    }
    ctx->pc = 0x7C0DDCu;
    // 0x7c0ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c0ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0de0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c0de4: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c0de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c0de8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c0de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0dec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c0decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0df0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c0df0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0df4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C0DF4u;
    SET_GPR_U32(ctx, 31, 0x7C0DFCu);
    ctx->pc = 0x7C0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0DF4u;
    // 0x7c0df8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C0DF4u, 0x7C0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0DFCu;
label_7c0dfc:
    // 0x7c0dfc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7C0DFCu;
    {
        const bool branch_taken_0x7c0dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0DFCu;
        // 0x7c0e00: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0dfc) {
            ctx->pc = 0x7C0E68u;
            goto label_7c0e68;
        }
    }
    ctx->pc = 0x7C0E04u;
label_7c0e04:
    // 0x7c0e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c0e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0e08: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c0e0c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c0e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c0e10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c0e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0e14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c0e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0e18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c0e18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0e1c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C0E1Cu;
    SET_GPR_U32(ctx, 31, 0x7C0E24u);
    ctx->pc = 0x7C0E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0E1Cu;
    // 0x7c0e20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C0E1Cu, 0x7C0E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0E24u;
label_7c0e24:
    // 0x7c0e24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C0E24u;
    {
        const bool branch_taken_0x7c0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0E24u;
        // 0x7c0e28: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0e24) {
            ctx->pc = 0x7C0E60u;
            goto label_7c0e60;
        }
    }
    ctx->pc = 0x7C0E2Cu;
label_7c0e2c:
    // 0x7c0e2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c0e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c0e30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C0E30u;
    {
        const bool branch_taken_0x7c0e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0E30u;
        // 0x7c0e34: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0e30) {
            ctx->pc = 0x7C0E68u;
            goto label_7c0e68;
        }
    }
    ctx->pc = 0x7C0E38u;
    // 0x7c0e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c0e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0e3c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c0e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c0e40: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c0e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c0e44: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c0e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0e48: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c0e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0e4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c0e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0e50: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C0E50u;
    SET_GPR_U32(ctx, 31, 0x7C0E58u);
    ctx->pc = 0x7C0E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0E50u;
    // 0x7c0e54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C0E50u, 0x7C0E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0E58u;
label_7c0e58:
    // 0x7c0e58: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c0e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c0e5c: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c0e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_7c0e60:
    // 0x7c0e60: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c0e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c0e64: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c0e68:
    // 0x7c0e68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c0e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c0e6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c0e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c0e70:
    // 0x7c0e70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c0e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c0e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c0e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c0e78: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0E78u;
        // 0x7c0e7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0E80u;
}
} // namespace gh_mcport
