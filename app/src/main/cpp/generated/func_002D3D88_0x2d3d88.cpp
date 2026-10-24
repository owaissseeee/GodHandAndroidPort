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

// Function: func_002D3D88
// Address: 0x2d3d88 - 0x2d40f8
void func_002D3D88_0x2d3d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3D88_0x2d3d88");
#endif

    switch (ctx->pc) {
        case 0x2d3dc0u: goto label_2d3dc0;
        case 0x2d3e08u: goto label_2d3e08;
        case 0x2d3e20u: goto label_2d3e20;
        case 0x2d3e38u: goto label_2d3e38;
        case 0x2d3e88u: goto label_2d3e88;
        case 0x2d3e98u: goto label_2d3e98;
        case 0x2d3eb4u: goto label_2d3eb4;
        case 0x2d3eccu: goto label_2d3ecc;
        case 0x2d3ed8u: goto label_2d3ed8;
        case 0x2d3f04u: goto label_2d3f04;
        case 0x2d3f20u: goto label_2d3f20;
        case 0x2d3fa4u: goto label_2d3fa4;
        case 0x2d3fb0u: goto label_2d3fb0;
        case 0x2d3fbcu: goto label_2d3fbc;
        case 0x2d402cu: goto label_2d402c;
        case 0x2d403cu: goto label_2d403c;
        case 0x2d4070u: goto label_2d4070;
        case 0x2d4084u: goto label_2d4084;
        case 0x2d408cu: goto label_2d408c;
        case 0x2d40a0u: goto label_2d40a0;
        case 0x2d40b8u: goto label_2d40b8;
        case 0x2d40d0u: goto label_2d40d0;
        default: break;
    }

    ctx->pc = 0x2d3d88u;

    // 0x2d3d88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d3d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d3d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d90: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d3d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d3d94: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2d3d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d3d98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d3d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d9c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d3d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d3da0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d3da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d3da4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3da8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d3da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2d3dac: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2d3dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2d3db0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d3db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2d3db4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d3db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d3db8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D3DB8u;
    SET_GPR_U32(ctx, 31, 0x2D3DC0u);
    ctx->pc = 0x2D3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3DB8u;
    // 0x2d3dbc: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D3DB8u, 0x2D3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DC0u;
label_2d3dc0:
    // 0x2d3dc0: 0x8e690028  lw          $t1, 0x28($s3)
    ctx->pc = 0x2d3dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2d3dc4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2d3dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3dc8: 0x8e68002c  lw          $t0, 0x2C($s3)
    ctx->pc = 0x2d3dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2d3dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3dd0: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x2d3dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2d3dd4: 0x8663001e  lh          $v1, 0x1E($s3)
    ctx->pc = 0x2d3dd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2d3dd8: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x2d3dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d3ddc: 0x8e670030  lw          $a3, 0x30($s3)
    ctx->pc = 0x2d3ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2d3de0: 0x8662001c  lh          $v0, 0x1C($s3)
    ctx->pc = 0x2d3de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d3de4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2d3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2d3de8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2d3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2d3dec: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x2d3decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x2d3df0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x2d3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x2d3df4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2d3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2d3df8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2d3df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2d3dfc: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x2d3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x2d3e00: 0xc0d0be6  jal         func_342F98
    ctx->pc = 0x2D3E00u;
    SET_GPR_U32(ctx, 31, 0x2D3E08u);
    ctx->pc = 0x2D3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E00u;
    // 0x2d3e04: 0xafa70024  sw          $a3, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342F98u, 0x2D3E00u, 0x2D3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E08u;
label_2d3e08:
    // 0x2d3e08: 0x8e063cf0  lw          $a2, 0x3CF0($s0)
    ctx->pc = 0x2d3e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15600)));
    // 0x2d3e0c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2d3e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2d3e10: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2d3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2d3e14: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2d3e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d3e18: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D3E18u;
    SET_GPR_U32(ctx, 31, 0x2D3E20u);
    ctx->pc = 0x2D3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E18u;
    // 0x2d3e1c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D3E18u, 0x2D3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E20u;
label_2d3e20:
    // 0x2d3e20: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2D3E20u;
    {
        const bool branch_taken_0x2d3e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E20u;
        // 0x2d3e24: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e20) {
            ctx->pc = 0x2D40B0u;
            goto label_2d40b0;
        }
    }
    ctx->pc = 0x2D3E28u;
    // 0x2d3e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d3e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e30: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D3E30u;
    SET_GPR_U32(ctx, 31, 0x2D3E38u);
    ctx->pc = 0x2D3E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E30u;
    // 0x2d3e34: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D3E30u, 0x2D3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E38u;
label_2d3e38:
    // 0x2d3e38: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2d3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2d3e3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d3e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d3e40: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D3E40u;
    {
        const bool branch_taken_0x2d3e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E40u;
        // 0x2d3e44: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e40) {
            ctx->pc = 0x2D3ED8u;
            goto label_2d3ed8;
        }
    }
    ctx->pc = 0x2D3E48u;
    // 0x2d3e48: 0x8664001c  lh          $a0, 0x1C($s3)
    ctx->pc = 0x2d3e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d3e4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d3e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3e50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d3e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e54: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2d3e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d3e58: 0x2671000c  addiu       $s1, $s3, 0xC
    ctx->pc = 0x2d3e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2d3e5c: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2d3e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d3e60: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x2d3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d3e64: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2d3e64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2d3e68: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2d3e68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d3e6c: 0x24430026  addiu       $v1, $v0, 0x26
    ctx->pc = 0x2d3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x2d3e70: 0x24420035  addiu       $v0, $v0, 0x35
    ctx->pc = 0x2d3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 53));
    // 0x2d3e74: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x2d3e74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d3e78: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x2d3e78u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2d3e7c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2d3e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d3e80: 0x28200  sll         $s0, $v0, 8
    ctx->pc = 0x2d3e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d3e84: 0x0  nop
    ctx->pc = 0x2d3e84u;
    // NOP
label_2d3e88:
    // 0x2d3e88: 0x8e863cf0  lw          $a2, 0x3CF0($s4)
    ctx->pc = 0x2d3e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15600)));
    // 0x2d3e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e90: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D3E90u;
    SET_GPR_U32(ctx, 31, 0x2D3E98u);
    ctx->pc = 0x2D3E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E90u;
    // 0x2d3e94: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D3E90u, 0x2D3E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E98u;
label_2d3e98:
    // 0x2d3e98: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2D3E98u;
    {
        const bool branch_taken_0x2d3e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E98u;
        // 0x2d3e9c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e98) {
            ctx->pc = 0x2D40B0u;
            goto label_2d40b0;
        }
    }
    ctx->pc = 0x2D3EA0u;
    // 0x2d3ea0: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x2d3ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d3ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d3ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ea8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d3eac: 0xc0ec190  jal         func_3B0640
    ctx->pc = 0x2D3EACu;
    SET_GPR_U32(ctx, 31, 0x2D3EB4u);
    ctx->pc = 0x2D3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EACu;
    // 0x2d3eb0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0640u, 0x2D3EACu, 0x2D3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EB4u;
label_2d3eb4:
    // 0x2d3eb4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2d3eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d3eb8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D3EB8u;
    {
        const bool branch_taken_0x2d3eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EB8u;
        // 0x2d3ebc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eb8) {
            ctx->pc = 0x2D3E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3e88;
        }
    }
    ctx->pc = 0x2D3EC0u;
    // 0x2d3ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d3ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ec4: 0xc0b516c  jal         func_2D45B0
    ctx->pc = 0x2D3EC4u;
    SET_GPR_U32(ctx, 31, 0x2D3ECCu);
    ctx->pc = 0x2D3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EC4u;
    // 0x2d3ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D45B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D45B0u, 0x2D3EC4u, 0x2D3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3ECCu;
label_2d3ecc:
    // 0x2d3ecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d3eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ed0: 0xc0b516c  jal         func_2D45B0
    ctx->pc = 0x2D3ED0u;
    SET_GPR_U32(ctx, 31, 0x2D3ED8u);
    ctx->pc = 0x2D3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3ED0u;
    // 0x2d3ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D45B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D45B0u, 0x2D3ED0u, 0x2D3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3ED8u;
label_2d3ed8:
    // 0x2d3ed8: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2d3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2d3edc: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2d3edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d3ee0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D3EE0u;
    {
        const bool branch_taken_0x2d3ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EE0u;
        // 0x2d3ee4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ee0) {
            ctx->pc = 0x2D3FF4u;
            goto label_2d3ff4;
        }
    }
    ctx->pc = 0x2D3EE8u;
    // 0x2d3ee8: 0x8664001c  lh          $a0, 0x1C($s3)
    ctx->pc = 0x2d3ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d3eec: 0x8662001e  lh          $v0, 0x1E($s3)
    ctx->pc = 0x2d3eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2d3ef0: 0x8e863cf0  lw          $a2, 0x3CF0($s4)
    ctx->pc = 0x2d3ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15600)));
    // 0x2d3ef4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2d3ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d3ef8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d3ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d3efc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D3EFCu;
    SET_GPR_U32(ctx, 31, 0x2D3F04u);
    ctx->pc = 0x2D3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EFCu;
    // 0x2d3f00: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D3EFCu, 0x2D3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F04u;
label_2d3f04:
    // 0x2d3f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f08: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d3f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d3f0c: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x2d3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x2d3f10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d3f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3f14: 0x24a5d188  addiu       $a1, $a1, -0x2E78
    ctx->pc = 0x2d3f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955400));
    // 0x2d3f18: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x2D3F18u;
    SET_GPR_U32(ctx, 31, 0x2D3F20u);
    ctx->pc = 0x2D3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F18u;
    // 0x2d3f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x2D3F18u, 0x2D3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F20u;
label_2d3f20:
    // 0x2d3f20: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2d3f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d3f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3f28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3f2c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2d3f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d3f30: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2d3f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d3f34: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d3f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3f38: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2d3f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3f3c: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x2d3f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d3f40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d3f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f44: 0x8663001e  lh          $v1, 0x1E($s3)
    ctx->pc = 0x2d3f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2d3f48: 0x8662001c  lh          $v0, 0x1C($s3)
    ctx->pc = 0x2d3f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d3f4c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2d3f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d3f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3f54: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2d3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d3f58: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d3f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2d3f5c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2d3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2d3f60: 0x8662001e  lh          $v0, 0x1E($s3)
    ctx->pc = 0x2d3f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2d3f64: 0x8663001c  lh          $v1, 0x1C($s3)
    ctx->pc = 0x2d3f64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d3f68: 0xa646000c  sh          $a2, 0xC($s2)
    ctx->pc = 0x2d3f68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d3f6c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2d3f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d3f70: 0xa2470013  sb          $a3, 0x13($s2)
    ctx->pc = 0x2d3f70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 19), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d3f74: 0xa2450011  sb          $a1, 0x11($s2)
    ctx->pc = 0x2d3f74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d3f78: 0xa640000e  sh          $zero, 0xE($s2)
    ctx->pc = 0x2d3f78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3f7c: 0xa2400010  sb          $zero, 0x10($s2)
    ctx->pc = 0x2d3f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3f80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3f84: 0xa2400012  sb          $zero, 0x12($s2)
    ctx->pc = 0x2d3f84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3f88: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2d3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2d3f8c: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x2d3f8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d3f90: 0xa6420014  sh          $v0, 0x14($s2)
    ctx->pc = 0x2d3f90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3f94: 0x9663001e  lhu         $v1, 0x1E($s3)
    ctx->pc = 0x2d3f94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2d3f98: 0xa6430016  sh          $v1, 0x16($s2)
    ctx->pc = 0x2d3f98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d3f9c: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x2D3F9Cu;
    SET_GPR_U32(ctx, 31, 0x2D3FA4u);
    ctx->pc = 0x2D3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F9Cu;
    // 0x2d3fa0: 0x8665001c  lh          $a1, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x2D3F9Cu, 0x2D3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FA4u;
label_2d3fa4:
    // 0x2d3fa4: 0x8664001c  lh          $a0, 0x1C($s3)
    ctx->pc = 0x2d3fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d3fa8: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x2D3FA8u;
    SET_GPR_U32(ctx, 31, 0x2D3FB0u);
    ctx->pc = 0x2D3FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3FA8u;
    // 0x2d3fac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x2D3FA8u, 0x2D3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FB0u;
label_2d3fb0:
    // 0x2d3fb0: 0x8664001e  lh          $a0, 0x1E($s3)
    ctx->pc = 0x2d3fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2d3fb4: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x2D3FB4u;
    SET_GPR_U32(ctx, 31, 0x2D3FBCu);
    ctx->pc = 0x2D3FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3FB4u;
    // 0x2d3fb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x2D3FB4u, 0x2D3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FBCu;
label_2d3fbc:
    // 0x2d3fbc: 0x1083b8  dsll        $s0, $s0, 14
    ctx->pc = 0x2d3fbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 14);
    // 0x2d3fc0: 0x118eb8  dsll        $s1, $s1, 26
    ctx->pc = 0x2d3fc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 26);
    // 0x2d3fc4: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x2d3fc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x2d3fc8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2d3fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2d3fcc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2d3fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d3fd0: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2d3fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2d3fd4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2d3fd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2d3fd8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x2d3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x2d3fdc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2d3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d3fe0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2d3fe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2d3fe4: 0xfe420020  sd          $v0, 0x20($s2)
    ctx->pc = 0x2d3fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 2));
    // 0x2d3fe8: 0xfe500018  sd          $s0, 0x18($s2)
    ctx->pc = 0x2d3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 16));
    // 0x2d3fec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3FECu;
    {
        const bool branch_taken_0x2d3fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FECu;
        // 0x2d3ff0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fec) {
            ctx->pc = 0x2D4030u;
            goto label_2d4030;
        }
    }
    ctx->pc = 0x2D3FF4u;
label_2d3ff4:
    // 0x2d3ff4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2d3ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2d3ff8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3FF8u;
    {
        const bool branch_taken_0x2d3ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ff8) {
            ctx->pc = 0x2D3FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3FF8u;
            // 0x2d3ffc: 0x8664001c  lh          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4014u;
            goto label_2d4014;
        }
    }
    ctx->pc = 0x2D4000u;
    // 0x2d4000: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x2d4000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2d4004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4008: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4008u;
    {
        const bool branch_taken_0x2d4008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d4008) {
            ctx->pc = 0x2D400Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4008u;
            // 0x2d400c: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4030u;
            goto label_2d4030;
        }
    }
    ctx->pc = 0x2D4010u;
    // 0x2d4010: 0x8664001c  lh          $a0, 0x1C($s3)
    ctx->pc = 0x2d4010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_2d4014:
    // 0x2d4014: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2d4014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d4018: 0x8662001e  lh          $v0, 0x1E($s3)
    ctx->pc = 0x2d4018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2d401c: 0x8e863cf0  lw          $a2, 0x3CF0($s4)
    ctx->pc = 0x2d401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15600)));
    // 0x2d4020: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2d4020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d4024: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D4024u;
    SET_GPR_U32(ctx, 31, 0x2D402Cu);
    ctx->pc = 0x2D4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4024u;
    // 0x2d4028: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D4024u, 0x2D402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D402Cu;
label_2d402c:
    // 0x2d402c: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2d402cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2d4030:
    // 0x2d4030: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2d4030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x2d4034: 0xc0d0f8a  jal         func_343E28
    ctx->pc = 0x2D4034u;
    SET_GPR_U32(ctx, 31, 0x2D403Cu);
    ctx->pc = 0x2D4038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4034u;
    // 0x2d4038: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343E28u, 0x2D4034u, 0x2D403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D403Cu;
label_2d403c:
    // 0x2d403c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4040: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D4040u;
    {
        const bool branch_taken_0x2d4040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4040u;
        // 0x2d4044: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4040) {
            ctx->pc = 0x2D40B0u;
            goto label_2d40b0;
        }
    }
    ctx->pc = 0x2D4048u;
    // 0x2d4048: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2d4048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2d404c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2d404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2d4050: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4050u;
    {
        const bool branch_taken_0x2d4050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d4050) {
            ctx->pc = 0x2D4054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4050u;
            // 0x2d4054: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4074u;
            goto label_2d4074;
        }
    }
    ctx->pc = 0x2D4058u;
    // 0x2d4058: 0x8e67003c  lw          $a3, 0x3C($s3)
    ctx->pc = 0x2d4058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2d405c: 0x86650040  lh          $a1, 0x40($s3)
    ctx->pc = 0x2d405cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2d4060: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x2d4060u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x2d4064: 0x86660042  lh          $a2, 0x42($s3)
    ctx->pc = 0x2d4064u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
    // 0x2d4068: 0xc0d1dc0  jal         func_347700
    ctx->pc = 0x2D4068u;
    SET_GPR_U32(ctx, 31, 0x2D4070u);
    ctx->pc = 0x2D406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4068u;
    // 0x2d406c: 0x30e70001  andi        $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x347700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347700u, 0x2D4068u, 0x2D4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4070u;
label_2d4070:
    // 0x2d4070: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2d4070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2d4074:
    // 0x2d4074: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D4074u;
    {
        const bool branch_taken_0x2d4074 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2D4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4074u;
        // 0x2d4078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4074) {
            ctx->pc = 0x2D40D4u;
            goto label_2d40d4;
        }
    }
    ctx->pc = 0x2D407Cu;
    // 0x2d407c: 0xc0c987c  jal         func_3261F0
    ctx->pc = 0x2D407Cu;
    SET_GPR_U32(ctx, 31, 0x2D4084u);
    ctx->pc = 0x3261F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3261F0u, 0x2D407Cu, 0x2D4084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4084u;
label_2d4084:
    // 0x2d4084: 0xc0d2076  jal         func_3481D8
    ctx->pc = 0x2D4084u;
    SET_GPR_U32(ctx, 31, 0x2D408Cu);
    ctx->pc = 0x3481D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3481D8u, 0x2D4084u, 0x2D408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D408Cu;
label_2d408c:
    // 0x2d408c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d408cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4090: 0x8e863cf0  lw          $a2, 0x3CF0($s4)
    ctx->pc = 0x2d4090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15600)));
    // 0x2d4094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4098: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D4098u;
    SET_GPR_U32(ctx, 31, 0x2D40A0u);
    ctx->pc = 0x2D409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4098u;
    // 0x2d409c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D4098u, 0x2D40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40A0u;
label_2d40a0:
    // 0x2d40a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D40A0u;
    {
        const bool branch_taken_0x2d40a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40A0u;
        // 0x2d40a4: 0xae6200a8  sw          $v0, 0xA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40a0) {
            ctx->pc = 0x2D40C0u;
            goto label_2d40c0;
        }
    }
    ctx->pc = 0x2D40A8u;
    // 0x2d40a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D40A8u;
    {
        const bool branch_taken_0x2d40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40A8u;
        // 0x2d40ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40a8) {
            ctx->pc = 0x2D40D4u;
            goto label_2d40d4;
        }
    }
    ctx->pc = 0x2D40B0u;
label_2d40b0:
    // 0x2d40b0: 0xc0b503e  jal         func_2D40F8
    ctx->pc = 0x2D40B0u;
    SET_GPR_U32(ctx, 31, 0x2D40B8u);
    ctx->pc = 0x2D40B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D40B0u;
    // 0x2d40b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40F8u, 0x2D40B0u, 0x2D40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40B8u;
label_2d40b8:
    // 0x2d40b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D40B8u;
    {
        const bool branch_taken_0x2d40b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40B8u;
        // 0x2d40bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40b8) {
            ctx->pc = 0x2D40D4u;
            goto label_2d40d4;
        }
    }
    ctx->pc = 0x2D40C0u;
label_2d40c0:
    // 0x2d40c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d40c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d40c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40c8: 0xc0d0a1c  jal         func_342870
    ctx->pc = 0x2D40C8u;
    SET_GPR_U32(ctx, 31, 0x2D40D0u);
    ctx->pc = 0x2D40CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D40C8u;
    // 0x2d40cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342870u, 0x2D40C8u, 0x2D40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40D0u;
label_2d40d0:
    // 0x2d40d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d40d4:
    // 0x2d40d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d40d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d40d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d40d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d40dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d40dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d40e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d40e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d40e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d40e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d40e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d40e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d40ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D40ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40ECu;
        // 0x2d40f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D40ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D40F4u;
    // 0x2d40f4: 0x0  nop
    ctx->pc = 0x2d40f4u;
    // NOP
    ctx->pc = 0x2d40f8u;
}
