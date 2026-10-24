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

// Function: func_0032F988
// Address: 0x32f988 - 0x32fa68
void func_0032F988_0x32f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F988_0x32f988");
#endif

    ctx->pc = 0x32f988u;

    // 0x32f988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f98c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32f98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f990: 0x2ca50010  sltiu       $a1, $a1, 0x10
    ctx->pc = 0x32f990u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x32f994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f998: 0x25070004  addiu       $a3, $t0, 0x4
    ctx->pc = 0x32f998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x32f99c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x32f99cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9a0: 0x14a0002e  bnez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x32F9A0u;
    {
        const bool branch_taken_0x32f9a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F9A0u;
        // 0x32f9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f9a0) {
            ctx->pc = 0x32FA5Cu;
            goto label_32fa5c;
        }
    }
    ctx->pc = 0x32F9A8u;
    // 0x32f9a8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x32f9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32f9ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x32f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32f9b0: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x32f9b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x32f9b4: 0x91050001  lbu         $a1, 0x1($t0)
    ctx->pc = 0x32f9b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x32f9b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f9bc: 0x91060003  lbu         $a2, 0x3($t0)
    ctx->pc = 0x32f9bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x32f9c0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x32f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x32f9c4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x32f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f9c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32f9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32f9cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32f9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32f9d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32f9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f9d4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x32f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x32f9d8: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x32f9d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x32f9dc: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x32f9dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32f9e0: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x32f9e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x32f9e4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x32f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f9e8: 0x90e60003  lbu         $a2, 0x3($a3)
    ctx->pc = 0x32f9e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x32f9ec: 0x2507000a  addiu       $a3, $t0, 0xA
    ctx->pc = 0x32f9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
    // 0x32f9f0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f9f4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x32f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x32f9f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32f9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32f9fc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32f9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32fa00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32fa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32fa04: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x32fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x32fa08: 0x91040008  lbu         $a0, 0x8($t0)
    ctx->pc = 0x32fa08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x32fa0c: 0xa1240008  sb          $a0, 0x8($t1)
    ctx->pc = 0x32fa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x32fa10: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x32fa10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x32fa14: 0xa1230009  sb          $v1, 0x9($t1)
    ctx->pc = 0x32fa14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x32fa18: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x32fa18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32fa1c: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x32fa1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x32fa20: 0x2507000c  addiu       $a3, $t0, 0xC
    ctx->pc = 0x32fa20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x32fa24: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x32fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x32fa28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32fa28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32fa2c: 0xa523000a  sh          $v1, 0xA($t1)
    ctx->pc = 0x32fa2cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x32fa30: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x32fa30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x32fa34: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x32fa34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32fa38: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x32fa38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x32fa3c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x32fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32fa40: 0x90e60003  lbu         $a2, 0x3($a3)
    ctx->pc = 0x32fa40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x32fa44: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32fa48: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x32fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x32fa4c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32fa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32fa50: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32fa50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32fa54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32fa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32fa58: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x32fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_32fa5c:
    // 0x32fa5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fa60: 0x3e00008  jr          $ra
    ctx->pc = 0x32FA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA60u;
        // 0x32fa64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FA68u;
}
