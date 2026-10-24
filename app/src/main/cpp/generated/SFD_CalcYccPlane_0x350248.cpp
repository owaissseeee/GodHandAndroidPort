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

// Function: SFD_CalcYccPlane
// Address: 0x350248 - 0x3502d8
void SFD_CalcYccPlane_0x350248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_CalcYccPlane_0x350248");
#endif

    ctx->pc = 0x350248u;

    // 0x350248: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x350248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x35024c: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x35024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x350250: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x350250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x350254: 0x24ca000f  addiu       $t2, $a2, 0xF
    ctx->pc = 0x350254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x350258: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x350258u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x35025c: 0x294b0000  slti        $t3, $t2, 0x0
    ctx->pc = 0x35025cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x350260: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x350260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x350264: 0x24c6001e  addiu       $a2, $a2, 0x1E
    ctx->pc = 0x350264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x350268: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x350268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35026c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x350270: 0x24a8003f  addiu       $t0, $a1, 0x3F
    ctx->pc = 0x350270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x350274: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x350274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x350278: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x350278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x35027c: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x35027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x350280: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x350280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x350284: 0xcb500b  movn        $t2, $a2, $t3
    ctx->pc = 0x350284u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 6));
    // 0x350288: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x350288u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x35028c: 0x29230000  slti        $v1, $t1, 0x0
    ctx->pc = 0x35028cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x350290: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x350290u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x350294: 0x84183  sra         $t0, $t0, 6
    ctx->pc = 0x350294u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 6));
    // 0x350298: 0xa5103  sra         $t2, $t2, 4
    ctx->pc = 0x350298u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x35029c: 0x94983  sra         $t1, $t1, 6
    ctx->pc = 0x35029cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x3502a0: 0x10a1018  mult        $v0, $t0, $t2
    ctx->pc = 0x3502a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3502a4: 0x712a5018  mult1       $t2, $t1, $t2
    ctx->pc = 0x3502a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3502a8: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x3502a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x3502ac: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x3502acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x3502b0: 0xa4e8000e  sh          $t0, 0xE($a3)
    ctx->pc = 0x3502b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x3502b4: 0xa4e9000c  sh          $t1, 0xC($a3)
    ctx->pc = 0x3502b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x3502b8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3502b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3502bc: 0xa5240  sll         $t2, $t2, 9
    ctx->pc = 0x3502bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 9));
    // 0x3502c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3502c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3502c4: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x3502c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x3502c8: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x3502c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3502cc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3502ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3502d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3502D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3502D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502D0u;
        // 0x3502d4: 0xacea0004  sw          $t2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3502D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3502D8u;
}
