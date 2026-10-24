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

// Function: FileNameFromObjId
// Address: 0x307918 - 0x3079c8
void FileNameFromObjId_0x307918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileNameFromObjId_0x307918");
#endif

    ctx->pc = 0x307918u;

    // 0x307918: 0x53a03  sra         $a3, $a1, 8
    ctx->pc = 0x307918u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 8));
    // 0x30791c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x307920: 0x24423bf8  addiu       $v0, $v0, 0x3BF8
    ctx->pc = 0x307920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15352));
    // 0x307924: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x307924u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x307928: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x307928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x30792c: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x30792cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x307930: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x307930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x307934: 0x30a800f0  andi        $t0, $a1, 0xF0
    ctx->pc = 0x307934u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x307938: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x307938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30793c: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x30793cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
    // 0x307940: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x307940u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307944: 0x24423c18  addiu       $v0, $v0, 0x3C18
    ctx->pc = 0x307944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15384));
    // 0x307948: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x307948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x30794c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x30794cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x307950: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x307950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x307954: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x307954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x307958: 0x240a002e  addiu       $t2, $zero, 0x2E
    ctx->pc = 0x307958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x30795c: 0x240d0064  addiu       $t5, $zero, 0x64
    ctx->pc = 0x30795cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307960: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x307960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x307964: 0x240b0061  addiu       $t3, $zero, 0x61
    ctx->pc = 0x307964u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x307968: 0x240c0074  addiu       $t4, $zero, 0x74
    ctx->pc = 0x307968u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x30796c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30796cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307970: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x307970u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x307974: 0xa0890002  sb          $t1, 0x2($a0)
    ctx->pc = 0x307974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x307978: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x307978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x30797c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x30797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x307980: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x307980u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307984: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x307984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x307988: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x307988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30798c: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x30798cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x307990: 0xa0860004  sb          $a2, 0x4($a0)
    ctx->pc = 0x307990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x307994: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x307994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x307998: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x307998u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x30799c: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x30799cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3079a0: 0xa08a0007  sb          $t2, 0x7($a0)
    ctx->pc = 0x3079a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 10));
    // 0x3079a4: 0xa0860006  sb          $a2, 0x6($a0)
    ctx->pc = 0x3079a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x3079a8: 0xa08d0008  sb          $t5, 0x8($a0)
    ctx->pc = 0x3079a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 13));
    // 0x3079ac: 0xa08b0009  sb          $t3, 0x9($a0)
    ctx->pc = 0x3079acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 11));
    // 0x3079b0: 0xa08c000a  sb          $t4, 0xA($a0)
    ctx->pc = 0x3079b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 12));
    // 0x3079b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3079B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079B4u;
        // 0x3079b8: 0xa080000b  sb          $zero, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3079B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3079BCu;
    // 0x3079bc: 0x0  nop
    ctx->pc = 0x3079bcu;
    // NOP
    // 0x3079c0: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x3079c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3079c4: 0x0  nop
    ctx->pc = 0x3079c4u;
    // NOP
    ctx->pc = 0x3079c8u;
}
