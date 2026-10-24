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

// Function: func_0035B3F8
// Address: 0x35b3f8 - 0x35b4a0
void func_0035B3F8_0x35b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B3F8_0x35b3f8");
#endif

    ctx->pc = 0x35b3f8u;

    // 0x35b3f8: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x35b3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x35b3fc: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x35b3fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35b400: 0x8cab0010  lw          $t3, 0x10($a1)
    ctx->pc = 0x35b400u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35b404: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x35b404u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x35b408: 0x10c001a  div         $zero, $t0, $t4
    ctx->pc = 0x35b408u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35b40c: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x35b40cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35b410: 0x35294b54  ori         $t1, $t1, 0x4B54
    ctx->pc = 0x35b410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)19284);
    // 0x35b414: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x35b414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x35b418: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x35b418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x35b41c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x35b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x35b420: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x35b420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x35b424: 0x8cab0018  lw          $t3, 0x18($a1)
    ctx->pc = 0x35b424u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x35b428: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x35b428u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x35b42c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x35b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35b430: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x35b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x35b434: 0x84a8001e  lh          $t0, 0x1E($a1)
    ctx->pc = 0x35b434u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x35b438: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35b438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35b43c: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35B43Cu;
    {
        const bool branch_taken_0x35b43c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b43c) {
            ctx->pc = 0x35B440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B43Cu;
            // 0x35b440: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B444u;
            goto label_35b444;
        }
    }
    ctx->pc = 0x35B444u;
label_35b444:
    // 0x35b444: 0x6812  mflo        $t5
    ctx->pc = 0x35b444u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x35b448: 0x1495018  mult        $t2, $t2, $t1
    ctx->pc = 0x35b448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x35b44c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x35b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x35b450: 0x8ca90014  lw          $t1, 0x14($a1)
    ctx->pc = 0x35b450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35b454: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x35b454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35b458: 0x82940  sll         $a1, $t0, 5
    ctx->pc = 0x35b458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x35b45c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x35b45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x35b460: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x35b460u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x35b464: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x35b464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x35b468: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x35b468u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x35b46c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x35b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x35b470: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x35b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x35b474: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x35b474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x35b478: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x35b478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x35b47c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x35b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x35b480: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35b480u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35b484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35b488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35b48c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35b490: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35b494: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x35b494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x35b498: 0x3e00008  jr          $ra
    ctx->pc = 0x35B498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B498u;
        // 0x35b49c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B4A0u;
}
