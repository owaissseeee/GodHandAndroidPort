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

// Function: SdeSystemVolSet
// Address: 0x375630 - 0x3756f0
void SdeSystemVolSet_0x375630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdeSystemVolSet_0x375630");
#endif

    ctx->pc = 0x375630u;

    // 0x375630: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x375630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x375634: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x375634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x375638: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x375638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
    // 0x37563c: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x37563cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x375640: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x375640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x375644: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x375644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x375648: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x375648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x37564c: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x37564cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x375650: 0xb062002f  sdl         $v0, 0x2F($v1)
    ctx->pc = 0x375650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375654: 0xb4620028  sdr         $v0, 0x28($v1)
    ctx->pc = 0x375654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375658: 0xb0650037  sdl         $a1, 0x37($v1)
    ctx->pc = 0x375658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37565c: 0xb4650030  sdr         $a1, 0x30($v1)
    ctx->pc = 0x37565cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375660: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x375660u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x375664: 0xa4600038  sh          $zero, 0x38($v1)
    ctx->pc = 0x375664u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x76A7C8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x76A7C8u, _value); } while (0);
    // 0x375668: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x375668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37566c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37566Cu;
    {
        const bool branch_taken_0x37566c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x37566c) {
            ctx->pc = 0x375670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37566Cu;
            // 0x375670: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x375674u;
            goto label_375674;
        }
    }
    ctx->pc = 0x375674u;
label_375674:
    // 0x375674: 0x8466002a  lh          $a2, 0x2A($v1)
    ctx->pc = 0x375674u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x375678: 0x8464002e  lh          $a0, 0x2E($v1)
    ctx->pc = 0x375678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x37567c: 0x240b007f  addiu       $t3, $zero, 0x7F
    ctx->pc = 0x37567cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x375680: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x375680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x375684: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x375684u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x375688: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x375688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37568c: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x37568cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x375690: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x375690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x375694: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x375694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x375698: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x375698u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37569c: 0x2012  mflo        $a0
    ctx->pc = 0x37569cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3756a0: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x3756a0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3756a4: 0xa464003a  sh          $a0, 0x3A($v1)
    ctx->pc = 0x3756a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x3756a8: 0x84640032  lh          $a0, 0x32($v1)
    ctx->pc = 0x3756a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x3756ac: 0x1012  mflo        $v0
    ctx->pc = 0x3756acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3756b0: 0xa462003c  sh          $v0, 0x3C($v1)
    ctx->pc = 0x3756b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x3756b4: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x3756b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3756b8: 0x84620034  lh          $v0, 0x34($v1)
    ctx->pc = 0x3756b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3756bc: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3756bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3756c0: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x3756c0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3756c4: 0x2012  mflo        $a0
    ctx->pc = 0x3756c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3756c8: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x3756c8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3756cc: 0xa464003e  sh          $a0, 0x3E($v1)
    ctx->pc = 0x3756ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x3756d0: 0x84620036  lh          $v0, 0x36($v1)
    ctx->pc = 0x3756d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x3756d4: 0x2812  mflo        $a1
    ctx->pc = 0x3756d4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3756d8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x3756d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3756dc: 0xa4650040  sh          $a1, 0x40($v1)
    ctx->pc = 0x3756dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x3756e0: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x3756e0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3756e4: 0x3012  mflo        $a2
    ctx->pc = 0x3756e4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3756e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3756E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3756ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756E8u;
        // 0x3756ec: 0xa4660042  sh          $a2, 0x42($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3756E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3756F0u;
}
