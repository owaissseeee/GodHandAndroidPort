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

// Function: ADXERR_ItoA2
// Address: 0x33f348 - 0x33f3d0
void ADXERR_ItoA2_0x33f348(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXERR_ItoA2_0x33f348");
#endif

    if (__builtin_expect(ctx->pc != 0x33f348u, 0)) {
        switch (ctx->pc) {
            case 0x33f374u: goto label_33f374;
            case 0x33f37cu: goto label_33f37c;
            case 0x33f394u: goto label_33f394;
            case 0x33f39cu: goto label_33f39c;
            case 0x33f3a8u: goto label_33f3a8;
            default: break;
        }
    }


    // 0x33f348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f350: 0xc0802d  daddu       $s0, $a2, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33f358: 0xe0882d  daddu       $s1, $a3, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f35c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33f360: 0xa0902d  daddu       $s2, $a1, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f364: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f368: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33f36c: 0xc0cfc90  jal         func_33F240
    SET_GPR_U32(ctx, 31, 0x33F374u);
    ctx->pc = 0x33F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F36Cu;
    // 0x33f370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ADXERR_ItoA_0x33f240, 0x33f240u, 0x33f374u)) {
        return;
    }
label_33f374:
    // 0x33f374: 0xc0e9637  jal         func_3A58DC
    SET_GPR_U32(ctx, 31, 0x33F37Cu);
    ctx->pc = 0x33F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F374u;
    // 0x33f378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &strlen_0x3a58dc, 0x3a58dcu, 0x33f37cu)) {
        return;
    }
label_33f37c:
    // 0x33f37c: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33f380: 0x2228823  subu        $s1, $s1, $v0
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33f384: 0x24a56938  addiu       $a1, $a1, 0x6938
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26936));
    // 0x33f388: 0x2626ffff  addiu       $a2, $s1, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x33f38c: 0xc0e9688  jal         func_3A5A20
    SET_GPR_U32(ctx, 31, 0x33F394u);
    ctx->pc = 0x33F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F38Cu;
    // 0x33f390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &strncat_0x3a5a20, 0x3a5a20u, 0x33f394u)) {
        return;
    }
label_33f394:
    // 0x33f394: 0xc0e9637  jal         func_3A58DC
    SET_GPR_U32(ctx, 31, 0x33F39Cu);
    ctx->pc = 0x33F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F394u;
    // 0x33f398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &strlen_0x3a58dc, 0x3a58dcu, 0x33f39cu)) {
        return;
    }
label_33f39c:
    // 0x33f39c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f3a0: 0xc0e9637  jal         func_3A58DC
    SET_GPR_U32(ctx, 31, 0x33F3A8u);
    ctx->pc = 0x33F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F3A0u;
    // 0x33f3a4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &strlen_0x3a58dc, 0x3a58dcu, 0x33f3a8u)) {
        return;
    }
label_33f3a8:
    // 0x33f3a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f3a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f3ac: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f3b0: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f3b8: 0x24060004  addiu       $a2, $zero, 0x4
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f3bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33f3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f3c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33f3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f3c4: 0xc23023  subu        $a2, $a2, $v0
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33f3c8: 0x80cfc90  j           func_33F240
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F3C8u;
    // 0x33f3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F240u, 0x33F3C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F3D0u;
}