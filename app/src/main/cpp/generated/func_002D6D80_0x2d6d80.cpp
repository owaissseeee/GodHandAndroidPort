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

// Function: func_002D6D80
// Address: 0x2d6d80 - 0x2d6f40
void func_002D6D80_0x2d6d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D6D80_0x2d6d80");
#endif

    switch (ctx->pc) {
        case 0x2d6da0u: goto label_2d6da0;
        case 0x2d6dd0u: goto label_2d6dd0;
        case 0x2d6e08u: goto label_2d6e08;
        case 0x2d6e38u: goto label_2d6e38;
        case 0x2d6e68u: goto label_2d6e68;
        case 0x2d6e98u: goto label_2d6e98;
        case 0x2d6f18u: goto label_2d6f18;
        default: break;
    }

    ctx->pc = 0x2d6d80u;

    // 0x2d6d80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d6d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d84: 0xf8a00030  sqc2        $vf0, 0x30($a1)
    ctx->pc = 0x2d6d84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6d88: 0xf8a00040  sqc2        $vf0, 0x40($a1)
    ctx->pc = 0x2d6d88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6d8c: 0xf8a00050  sqc2        $vf0, 0x50($a1)
    ctx->pc = 0x2d6d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6d90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6d94: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x2d6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2d6d98: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d6d9c: 0x0  nop
    ctx->pc = 0x2d6d9cu;
    // NOP
label_2d6da0:
    // 0x2d6da0: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x2d6da0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6da4: 0xf8400020  sqc2        $vf0, 0x20($v0)
    ctx->pc = 0x2d6da4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6da8: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x2d6da8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6dac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6db0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6DB0u;
    {
        const bool branch_taken_0x2d6db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DB0u;
        // 0x2d6db4: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6db0) {
            ctx->pc = 0x2D6DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6da0;
        }
    }
    ctx->pc = 0x2D6DB8u;
    // 0x2d6db8: 0xf8a07480  sqc2        $vf0, 0x7480($a1)
    ctx->pc = 0x2d6db8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 29824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6dbc: 0xf8a07490  sqc2        $vf0, 0x7490($a1)
    ctx->pc = 0x2d6dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 29840), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6dc0: 0xf8a074a0  sqc2        $vf0, 0x74A0($a1)
    ctx->pc = 0x2d6dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 29856), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6dc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6dc8: 0x24a274d0  addiu       $v0, $a1, 0x74D0
    ctx->pc = 0x2d6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29904));
    // 0x2d6dcc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2d6dd0:
    // 0x2d6dd0: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x2d6dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6dd4: 0xf8400020  sqc2        $vf0, 0x20($v0)
    ctx->pc = 0x2d6dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6dd8: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x2d6dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6ddc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6de0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6DE0u;
    {
        const bool branch_taken_0x2d6de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DE0u;
        // 0x2d6de4: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6de0) {
            ctx->pc = 0x2D6DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6dd0;
        }
    }
    ctx->pc = 0x2D6DE8u;
    // 0x2d6de8: 0x3402e8a0  ori         $v0, $zero, 0xE8A0
    ctx->pc = 0x2d6de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59552);
    // 0x2d6dec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6df0: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x2d6df0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6df4: 0xf8400040  sqc2        $vf0, 0x40($v0)
    ctx->pc = 0x2d6df4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6df8: 0xf8400050  sqc2        $vf0, 0x50($v0)
    ctx->pc = 0x2d6df8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6dfc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6e00: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2d6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d6e04: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2d6e08:
    // 0x2d6e08: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x2d6e08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e0c: 0xf8400020  sqc2        $vf0, 0x20($v0)
    ctx->pc = 0x2d6e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e10: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x2d6e10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6e18: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6E18u;
    {
        const bool branch_taken_0x2d6e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E18u;
        // 0x2d6e1c: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e18) {
            ctx->pc = 0x2D6E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6e08;
        }
    }
    ctx->pc = 0x2D6E20u;
    // 0x2d6e20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d6e24: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2d6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6e28: 0x34425d00  ori         $v0, $v0, 0x5D00
    ctx->pc = 0x2d6e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23808);
    // 0x2d6e2c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6e30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6e34: 0x0  nop
    ctx->pc = 0x2d6e34u;
    // NOP
label_2d6e38:
    // 0x2d6e38: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2d6e38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e3c: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x2d6e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e40: 0xf8400020  sqc2        $vf0, 0x20($v0)
    ctx->pc = 0x2d6e40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6e48: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6E48u;
    {
        const bool branch_taken_0x2d6e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E48u;
        // 0x2d6e4c: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e48) {
            ctx->pc = 0x2D6E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6e38;
        }
    }
    ctx->pc = 0x2D6E50u;
    // 0x2d6e50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d6e54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d6e58: 0x344261a0  ori         $v0, $v0, 0x61A0
    ctx->pc = 0x2d6e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24992);
    // 0x2d6e5c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6e60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6e64: 0x0  nop
    ctx->pc = 0x2d6e64u;
    // NOP
label_2d6e68:
    // 0x2d6e68: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2d6e68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6e70: 0x0  nop
    ctx->pc = 0x2d6e70u;
    // NOP
    // 0x2d6e74: 0x0  nop
    ctx->pc = 0x2d6e74u;
    // NOP
    // 0x2d6e78: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6E78u;
    {
        const bool branch_taken_0x2d6e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E78u;
        // 0x2d6e7c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e78) {
            ctx->pc = 0x2D6E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6e68;
        }
    }
    ctx->pc = 0x2D6E80u;
    // 0x2d6e80: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d6e84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d6e88: 0x344261d0  ori         $v0, $v0, 0x61D0
    ctx->pc = 0x2d6e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25040);
    // 0x2d6e8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6e90: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6e94: 0x0  nop
    ctx->pc = 0x2d6e94u;
    // NOP
label_2d6e98:
    // 0x2d6e98: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2d6e98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6e9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6ea0: 0x0  nop
    ctx->pc = 0x2d6ea0u;
    // NOP
    // 0x2d6ea4: 0x0  nop
    ctx->pc = 0x2d6ea4u;
    // NOP
    // 0x2d6ea8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6EA8u;
    {
        const bool branch_taken_0x2d6ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EA8u;
        // 0x2d6eac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ea8) {
            ctx->pc = 0x2D6E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6e98;
        }
    }
    ctx->pc = 0x2D6EB0u;
    // 0x2d6eb0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d6eb4: 0x34426200  ori         $v0, $v0, 0x6200
    ctx->pc = 0x2d6eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25088);
    // 0x2d6eb8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6ebc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2d6ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6ec0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d6ec4: 0x34636210  ori         $v1, $v1, 0x6210
    ctx->pc = 0x2d6ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25104);
    // 0x2d6ec8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d6ecc: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x2d6eccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6ed0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d6ed4: 0x34426220  ori         $v0, $v0, 0x6220
    ctx->pc = 0x2d6ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25120);
    // 0x2d6ed8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6edc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2d6edcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6ee0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d6ee4: 0x34636230  ori         $v1, $v1, 0x6230
    ctx->pc = 0x2d6ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25136);
    // 0x2d6ee8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d6eec: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x2d6eecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d6ef0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d6ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d6ef4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d6ef8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d6efc: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x2d6efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x2d6f00: 0xac806130  sw          $zero, 0x6130($a0)
    ctx->pc = 0x2d6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24880), GPR_U32(ctx, 0));
    // 0x2d6f04: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6f08: 0xac806284  sw          $zero, 0x6284($a0)
    ctx->pc = 0x2d6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25220), GPR_U32(ctx, 0));
    // 0x2d6f0c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2d6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6f10: 0xac806120  sw          $zero, 0x6120($a0)
    ctx->pc = 0x2d6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24864), GPR_U32(ctx, 0));
    // 0x2d6f14: 0x0  nop
    ctx->pc = 0x2d6f14u;
    // NOP
label_2d6f18:
    // 0x2d6f18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d6f1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6f20: 0x0  nop
    ctx->pc = 0x2d6f20u;
    // NOP
    // 0x2d6f24: 0x0  nop
    ctx->pc = 0x2d6f24u;
    // NOP
    // 0x2d6f28: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6F28u;
    {
        const bool branch_taken_0x2d6f28 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2D6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F28u;
        // 0x2d6f2c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f28) {
            ctx->pc = 0x2D6F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6f18;
        }
    }
    ctx->pc = 0x2D6F30u;
    // 0x2d6f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F30u;
        // 0x2d6f34: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6F38u;
    // 0x2d6f38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d6f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d6f3c: 0x0  nop
    ctx->pc = 0x2d6f3cu;
    // NOP
    ctx->pc = 0x2d6f40u;
}
