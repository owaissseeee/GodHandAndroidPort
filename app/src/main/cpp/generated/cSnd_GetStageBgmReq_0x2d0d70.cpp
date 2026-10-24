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

// Function: cSnd_GetStageBgmReq
// Address: 0x2d0d70 - 0x2d0ea0
void cSnd_GetStageBgmReq_0x2d0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_GetStageBgmReq_0x2d0d70");
#endif

    switch (ctx->pc) {
        case 0x2d0df8u: goto label_2d0df8;
        case 0x2d0e14u: goto label_2d0e14;
        case 0x2d0e38u: goto label_2d0e38;
        default: break;
    }

    ctx->pc = 0x2d0d70u;

    // 0x2d0d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0d74: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d0d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0d7c: 0x8c46d930  lw          $a2, -0x26D0($v0)
    ctx->pc = 0x2d0d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3BD930u));
    // 0x2d0d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d0d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d0d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0d8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0d90: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x2d0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2d0d94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0D94u;
    {
        const bool branch_taken_0x2d0d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D94u;
        // 0x2d0d98: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d94) {
            ctx->pc = 0x2D0DA8u;
            goto label_2d0da8;
        }
    }
    ctx->pc = 0x2D0D9Cu;
    // 0x2d0d9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2d0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d0da0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D0DA0u;
    {
        const bool branch_taken_0x2d0da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DA0u;
        // 0x2d0da4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0da0) {
            ctx->pc = 0x2D0E00u;
            goto label_2d0e00;
        }
    }
    ctx->pc = 0x2D0DA8u;
label_2d0da8:
    // 0x2d0da8: 0x8cc20ee8  lw          $v0, 0xEE8($a2)
    ctx->pc = 0x2d0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3816)));
    // 0x2d0dac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0DACu;
    {
        const bool branch_taken_0x2d0dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DACu;
        // 0x2d0db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dac) {
            ctx->pc = 0x2D0DB8u;
            goto label_2d0db8;
        }
    }
    ctx->pc = 0x2D0DB4u;
    // 0x2d0db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0db8:
    // 0x2d0db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0dbc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0DBCu;
    {
        const bool branch_taken_0x2d0dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DBCu;
        // 0x2d0dc0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dbc) {
            ctx->pc = 0x2D0E00u;
            goto label_2d0e00;
        }
    }
    ctx->pc = 0x2D0DC4u;
    // 0x2d0dc4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2d0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2d0dc8: 0x8c636b28  lw          $v1, 0x6B28($v1)
    ctx->pc = 0x2d0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B28u));
    // 0x2d0dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0dd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0dd4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0DD4u;
    {
        const bool branch_taken_0x2d0dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0dd4) {
            ctx->pc = 0x2D0DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0DD4u;
            // 0x2d0dd8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0DE4u;
            goto label_2d0de4;
        }
    }
    ctx->pc = 0x2D0DDCu;
    // 0x2d0ddc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0DDCu;
    {
        const bool branch_taken_0x2d0ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DDCu;
        // 0x2d0de0: 0x94630008  lhu         $v1, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ddc) {
            ctx->pc = 0x2D0DE8u;
            goto label_2d0de8;
        }
    }
    ctx->pc = 0x2D0DE4u;
label_2d0de4:
    // 0x2d0de4: 0x94433eec  lhu         $v1, 0x3EEC($v0)
    ctx->pc = 0x2d0de4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16108)));
label_2d0de8:
    // 0x2d0de8: 0x38820021  xori        $v0, $a0, 0x21
    ctx->pc = 0x2d0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)33);
    // 0x2d0dec: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2d0decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d0df0: 0xc0b42e2  jal         func_2D0B88
    ctx->pc = 0x2D0DF0u;
    SET_GPR_U32(ctx, 31, 0x2D0DF8u);
    ctx->pc = 0x2D0DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DF0u;
    // 0x2d0df4: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B88u, 0x2D0DF0u, 0x2D0DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DF8u;
label_2d0df8:
    // 0x2d0df8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0DF8u;
    {
        const bool branch_taken_0x2d0df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DF8u;
        // 0x2d0dfc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0df8) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E00u;
label_2d0e00:
    // 0x2d0e00: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x2d0e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x2d0e04: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D0E04u;
    {
        const bool branch_taken_0x2d0e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E04u;
        // 0x2d0e08: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e04) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E0Cu;
    // 0x2d0e0c: 0xc0b42e2  jal         func_2D0B88
    ctx->pc = 0x2D0E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E14u);
    ctx->pc = 0x2D0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B88u, 0x2D0E0Cu, 0x2D0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E14u;
label_2d0e14:
    // 0x2d0e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e18: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x2d0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2d0e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0e20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0E20u;
    {
        const bool branch_taken_0x2d0e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0e20) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0E28u;
    // 0x2d0e28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D0E28u;
    {
        const bool branch_taken_0x2d0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E28u;
        // 0x2d0e2c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e28) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E30u;
label_2d0e30:
    // 0x2d0e30: 0xc0b4334  jal         func_2D0CD0
    ctx->pc = 0x2D0E30u;
    SET_GPR_U32(ctx, 31, 0x2D0E38u);
    ctx->pc = 0x2D0E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E30u;
    // 0x2d0e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CD0u, 0x2D0E30u, 0x2D0E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E38u;
label_2d0e38:
    // 0x2d0e38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0e38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e3c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2d0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d0e40: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0E40u;
    {
        const bool branch_taken_0x2d0e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E40u;
        // 0x2d0e44: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e40) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E48u;
    // 0x2d0e48: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x2d0e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2d0e4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0e50: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0E50u;
    {
        const bool branch_taken_0x2d0e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E50u;
        // 0x2d0e54: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e50) {
            ctx->pc = 0x2D0E7Cu;
            goto label_2d0e7c;
        }
    }
    ctx->pc = 0x2D0E58u;
    // 0x2d0e58: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0E58u;
    {
        const bool branch_taken_0x2d0e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e58) {
            ctx->pc = 0x2D0E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E58u;
            // 0x2d0e5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E60u;
    // 0x2d0e60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0e64: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0E64u;
    {
        const bool branch_taken_0x2d0e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E64u;
        // 0x2d0e68: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e64) {
            ctx->pc = 0x2D0E84u;
            goto label_2d0e84;
        }
    }
    ctx->pc = 0x2D0E6Cu;
    // 0x2d0e6c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0E6Cu;
    {
        const bool branch_taken_0x2d0e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0e6c) {
            ctx->pc = 0x2D0E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E6Cu;
            // 0x2d0e70: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E74u;
    // 0x2d0e74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0E74u;
    {
        const bool branch_taken_0x2d0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E74u;
        // 0x2d0e78: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e74) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E7Cu;
label_2d0e7c:
    // 0x2d0e7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0E7Cu;
    {
        const bool branch_taken_0x2d0e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E7Cu;
        // 0x2d0e80: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e7c) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E84u;
label_2d0e84:
    // 0x2d0e84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d0e88:
    // 0x2d0e88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d0e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E94u;
        // 0x2d0e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E9Cu;
    // 0x2d0e9c: 0x0  nop
    ctx->pc = 0x2d0e9cu;
    // NOP
    ctx->pc = 0x2d0ea0u;
}
