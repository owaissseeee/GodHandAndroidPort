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

// Function: func_003669B0
// Address: 0x3669b0 - 0x366b80
void func_003669B0_0x3669b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003669B0_0x3669b0");
#endif

    switch (ctx->pc) {
        case 0x3669c0u: goto label_3669c0;
        case 0x3669e8u: goto label_3669e8;
        default: break;
    }

    ctx->pc = 0x3669b0u;

    // 0x3669b0: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x3669b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x3669b4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3669B4u;
    {
        const bool branch_taken_0x3669b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3669b4) {
            ctx->pc = 0x3669B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3669B4u;
            // 0x3669b8: 0x63142  srl         $a2, $a2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3669E0u;
            goto label_3669e0;
        }
    }
    ctx->pc = 0x3669BCu;
    // 0x3669bc: 0x0  nop
    ctx->pc = 0x3669bcu;
    // NOP
label_3669c0:
    // 0x3669c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3669c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3669c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3669c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3669c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3669c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3669cc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3669ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3669d0: 0x0  nop
    ctx->pc = 0x3669d0u;
    // NOP
    // 0x3669d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3669D4u;
    {
        const bool branch_taken_0x3669d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3669D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3669D4u;
        // 0x3669d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3669d4) {
            ctx->pc = 0x3669C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3669c0;
        }
    }
    ctx->pc = 0x3669DCu;
    // 0x3669dc: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x3669dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_3669e0:
    // 0x3669e0: 0x10c00065  beqz        $a2, . + 4 + (0x65 << 2)
    ctx->pc = 0x3669E0u;
    {
        const bool branch_taken_0x3669e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3669e0) {
            ctx->pc = 0x366B78u;
            goto label_366b78;
        }
    }
    ctx->pc = 0x3669E8u;
label_3669e8:
    // 0x3669e8: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x3669e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3669ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3669ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3669f0: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x3669f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3669f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3669f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3669f8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3669f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3669fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3669fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a00: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a08: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x366a08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x366a0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x366a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x366a10: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x366a10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x366a14: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x366a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x366a18: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x366a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x366a1c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x366a1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a24: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x366a24u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a2c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x366a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a34: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a3c: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x366a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x366a40: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x366a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x366a44: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x366a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x366a48: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x366a48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x366a4c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x366a4cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a54: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x366a54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a5c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x366a5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a64: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366a64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a6c: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x366a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x366a70: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x366a70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x366a74: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x366a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x366a78: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x366a78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x366a7c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x366a7cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a84: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x366a84u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a8c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x366a8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a94: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366a98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a9c: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x366a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x366aa0: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x366aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x366aa4: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x366aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x366aa8: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x366aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x366aac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x366aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x366ab0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x366ab0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366ab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366ab8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x366ab8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366abc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366ac0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x366ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366ac4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366ac8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366ac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366acc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366ad0: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x366ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x366ad4: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x366ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x366ad8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x366ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x366adc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x366adcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x366ae0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x366ae0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366ae4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366ae8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x366ae8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366aec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366af0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x366af0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366af4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366af8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366afc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b00: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x366b00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x366b04: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x366b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x366b08: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x366b08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x366b0c: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x366b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x366b10: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x366b10u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b18: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x366b18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b20: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x366b20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b28: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b30: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x366b30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x366b34: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x366b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x366b38: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x366b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x366b3c: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x366b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x366b40: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x366b40u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b48: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x366b48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b50: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x366b50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b58: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x366b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366b5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b60: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x366b60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x366b64: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x366b64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x366b68: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x366b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x366b6c: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x366b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x366b70: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x366B70u;
    {
        const bool branch_taken_0x366b70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x366B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B70u;
        // 0x366b74: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b70) {
            ctx->pc = 0x3669E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3669e8;
        }
    }
    ctx->pc = 0x366B78u;
label_366b78:
    // 0x366b78: 0x3e00008  jr          $ra
    ctx->pc = 0x366B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366B80u;
}
