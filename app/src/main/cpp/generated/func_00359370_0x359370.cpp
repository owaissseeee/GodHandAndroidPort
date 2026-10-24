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

// Function: func_00359370
// Address: 0x359370 - 0x3593f0
void func_00359370_0x359370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359370_0x359370");
#endif

    switch (ctx->pc) {
        case 0x3593b0u: goto label_3593b0;
        default: break;
    }

    ctx->pc = 0x359370u;

    // 0x359370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359374: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x359374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35937c: 0x24710007  addiu       $s1, $v1, 0x7
    ctx->pc = 0x35937cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x359380: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x359380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x359384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359388: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x359388u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x35938c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359390: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x359390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x359394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x359394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359398: 0xc38023  subu        $s0, $a2, $v1
    ctx->pc = 0x359398u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x35939c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35939cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3593a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3593a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3593a8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3593A8u;
    SET_GPR_U32(ctx, 31, 0x3593B0u);
    ctx->pc = 0x3593ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593A8u;
    // 0x3593ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3593A8u, 0x3593B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593B0u;
label_3593b0:
    // 0x3593b0: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x3593b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x3593b4: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x3593b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3593b8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3593b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3593bc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3593bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3593c0: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x3593c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x3593c4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3593c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x3593c8: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x3593c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x3593cc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3593ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x3593d0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3593d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x3593d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3593d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3593d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3593d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3593dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3593dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3593e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3593e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3593e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3593E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3593E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593E4u;
        // 0x3593e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3593E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3593ECu;
    // 0x3593ec: 0x0  nop
    ctx->pc = 0x3593ecu;
    // NOP
    ctx->pc = 0x3593f0u;
}
