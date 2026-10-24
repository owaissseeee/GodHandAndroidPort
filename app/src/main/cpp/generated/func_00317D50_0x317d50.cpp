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

// Function: func_00317D50
// Address: 0x317d50 - 0x317e80
void func_00317D50_0x317d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00317D50_0x317d50");
#endif

    switch (ctx->pc) {
        case 0x317d88u: goto label_317d88;
        case 0x317da4u: goto label_317da4;
        case 0x317dacu: goto label_317dac;
        case 0x317dc8u: goto label_317dc8;
        case 0x317e08u: goto label_317e08;
        case 0x317e18u: goto label_317e18;
        default: break;
    }

    ctx->pc = 0x317d50u;

    // 0x317d50: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317d54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x317d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x317d58: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317d58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317d5c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x317d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317d60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x317d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x317d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x317d68: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317d6c: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x317D6Cu;
    {
        const bool branch_taken_0x317d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D6Cu;
        // 0x317d70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d6c) {
            ctx->pc = 0x317E64u;
            goto label_317e64;
        }
    }
    ctx->pc = 0x317D74u;
    // 0x317d74: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317d78: 0x240430e0  addiu       $a0, $zero, 0x30E0
    ctx->pc = 0x317d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12512));
    // 0x317d7c: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317d80: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x317D80u;
    SET_GPR_U32(ctx, 31, 0x317D88u);
    ctx->pc = 0x317D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D80u;
    // 0x317d84: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x317D80u, 0x317D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D88u;
label_317d88:
    // 0x317d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317d8c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x317D8Cu;
    {
        const bool branch_taken_0x317d8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D8Cu;
        // 0x317d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d8c) {
            ctx->pc = 0x317E64u;
            goto label_317e64;
        }
    }
    ctx->pc = 0x317D94u;
    // 0x317d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317d98: 0x240630e0  addiu       $a2, $zero, 0x30E0
    ctx->pc = 0x317d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12512));
    // 0x317d9c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317D9Cu;
    SET_GPR_U32(ctx, 31, 0x317DA4u);
    ctx->pc = 0x317DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D9Cu;
    // 0x317da0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317D9Cu, 0x317DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DA4u;
label_317da4:
    // 0x317da4: 0xc053a64  jal         func_14E990
    ctx->pc = 0x317DA4u;
    SET_GPR_U32(ctx, 31, 0x317DACu);
    ctx->pc = 0x317DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317DA4u;
    // 0x317da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E990u, 0x317DA4u, 0x317DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DACu;
label_317dac:
    // 0x317dac: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x317dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x317db0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x317db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317db4: 0x2442b528  addiu       $v0, $v0, -0x4AD8
    ctx->pc = 0x317db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948136));
    // 0x317db8: 0x260313a0  addiu       $v1, $s0, 0x13A0
    ctx->pc = 0x317db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5024));
    // 0x317dbc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x317dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x317dc0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x317dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x317dc4: 0x0  nop
    ctx->pc = 0x317dc4u;
    // NOP
label_317dc8:
    // 0x317dc8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x317dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317dcc: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x317dccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317dd0: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x317dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317dd4: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x317dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317dd8: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x317dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317ddc: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x317ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317de4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x317DE4u;
    {
        const bool branch_taken_0x317de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x317DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DE4u;
        // 0x317de8: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317de4) {
            ctx->pc = 0x317DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317dc8;
        }
    }
    ctx->pc = 0x317DECu;
    // 0x317dec: 0xfa202f80  sqc2        $vf0, 0x2F80($s1)
    ctx->pc = 0x317decu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317df0: 0xfa202fb0  sqc2        $vf0, 0x2FB0($s1)
    ctx->pc = 0x317df0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317df4: 0xfa202fd0  sqc2        $vf0, 0x2FD0($s1)
    ctx->pc = 0x317df4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317df8: 0xfa202fe0  sqc2        $vf0, 0x2FE0($s1)
    ctx->pc = 0x317df8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317dfc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x317dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317e00: 0x26223000  addiu       $v0, $s1, 0x3000
    ctx->pc = 0x317e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
    // 0x317e04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x317e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_317e08:
    // 0x317e08: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x317e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x317e0c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x317e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x317e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x317e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317e14: 0x0  nop
    ctx->pc = 0x317e14u;
    // NOP
label_317e18:
    // 0x317e18: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x317e18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317e1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x317e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x317e20: 0x0  nop
    ctx->pc = 0x317e20u;
    // NOP
    // 0x317e24: 0x0  nop
    ctx->pc = 0x317e24u;
    // NOP
    // 0x317e28: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317E28u;
    {
        const bool branch_taken_0x317e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x317E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E28u;
        // 0x317e2c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e28) {
            ctx->pc = 0x317E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e18;
        }
    }
    ctx->pc = 0x317E30u;
    // 0x317e30: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x317e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317e34: 0x1466fff4  bne         $v1, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x317E34u;
    {
        const bool branch_taken_0x317e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x317E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E34u;
        // 0x317e38: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e34) {
            ctx->pc = 0x317E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e08;
        }
    }
    ctx->pc = 0x317E3Cu;
    // 0x317e3c: 0xfa2030c0  sqc2        $vf0, 0x30C0($s1)
    ctx->pc = 0x317e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317e40: 0xfa2030d0  sqc2        $vf0, 0x30D0($s1)
    ctx->pc = 0x317e40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12496), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x317e44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x317e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317e48: 0xa22004d0  sb          $zero, 0x4D0($s1)
    ctx->pc = 0x317e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1232), (uint8_t)GPR_U32(ctx, 0));
    // 0x317e4c: 0xa2201390  sb          $zero, 0x1390($s1)
    ctx->pc = 0x317e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5008), (uint8_t)GPR_U32(ctx, 0));
    // 0x317e50: 0xa2202fa0  sb          $zero, 0x2FA0($s1)
    ctx->pc = 0x317e50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12192), (uint8_t)GPR_U32(ctx, 0));
    // 0x317e54: 0xa22004e0  sb          $zero, 0x4E0($s1)
    ctx->pc = 0x317e54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1248), (uint8_t)GPR_U32(ctx, 0));
    // 0x317e58: 0xa2202ff0  sb          $zero, 0x2FF0($s1)
    ctx->pc = 0x317e58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12272), (uint8_t)GPR_U32(ctx, 0));
    // 0x317e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317E5Cu;
    {
        const bool branch_taken_0x317e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E5Cu;
        // 0x317e60: 0xae2030a4  sw          $zero, 0x30A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e5c) {
            ctx->pc = 0x317E68u;
            goto label_317e68;
        }
    }
    ctx->pc = 0x317E64u;
label_317e64:
    // 0x317e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317e68:
    // 0x317e68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x317e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317e6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x317e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317e74: 0x3e00008  jr          $ra
    ctx->pc = 0x317E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E74u;
        // 0x317e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317E7Cu;
    // 0x317e7c: 0x0  nop
    ctx->pc = 0x317e7cu;
    // NOP
    ctx->pc = 0x317e80u;
}
