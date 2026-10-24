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

// Function: cSnd_BgmNodeStart
// Address: 0x2cc900 - 0x2cc9c0
void cSnd_BgmNodeStart_0x2cc900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmNodeStart_0x2cc900");
#endif

    switch (ctx->pc) {
        case 0x2cc94cu: goto label_2cc94c;
        case 0x2cc954u: goto label_2cc954;
        case 0x2cc988u: goto label_2cc988;
        default: break;
    }

    ctx->pc = 0x2cc900u;

    // 0x2cc900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cc900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cc904: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2cc904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2cc908: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2cc908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2cc90c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2cc90cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc910: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2cc910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2cc914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cc914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc918: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2cc918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2cc91c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cc91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cc920: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2cc920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2cc924: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2cc924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2cc928: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cc92c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cc92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc930: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2cc930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2cc934: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2cc934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc93c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2cc93cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc940: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2cc940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc944: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CC944u;
    SET_GPR_U32(ctx, 31, 0x2CC94Cu);
    ctx->pc = 0x2CC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC944u;
    // 0x2cc948: 0x140a82d  daddu       $s5, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CC944u, 0x2CC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC94Cu;
label_2cc94c:
    // 0x2cc94c: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2CC94Cu;
    SET_GPR_U32(ctx, 31, 0x2CC954u);
    ctx->pc = 0x2CC950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC94Cu;
    // 0x2cc950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2CC94Cu, 0x2CC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC954u;
label_2cc954:
    // 0x2cc954: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CC954u;
    {
        const bool branch_taken_0x2cc954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC954u;
        // 0x2cc958: 0x2a020038  slti        $v0, $s0, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc954) {
            ctx->pc = 0x2CC990u;
            goto label_2cc990;
        }
    }
    ctx->pc = 0x2CC95Cu;
    // 0x2cc95c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC95Cu;
    {
        const bool branch_taken_0x2cc95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC95Cu;
        // 0x2cc960: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc95c) {
            ctx->pc = 0x2CC990u;
            goto label_2cc990;
        }
    }
    ctx->pc = 0x2CC964u;
    // 0x2cc964: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2cc964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2cc968: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x2cc968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x2cc96c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc970: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x2cc970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x2cc974: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cc974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc978: 0xa7b4000c  sh          $s4, 0xC($sp)
    ctx->pc = 0x2cc978u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 20));
    // 0x2cc97c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cc97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc980: 0xc0b31ca  jal         func_2CC728
    ctx->pc = 0x2CC980u;
    SET_GPR_U32(ctx, 31, 0x2CC988u);
    ctx->pc = 0x2CC984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC980u;
    // 0x2cc984: 0xa7b5000e  sh          $s5, 0xE($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC728u, 0x2CC980u, 0x2CC988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC988u;
label_2cc988:
    // 0x2cc988: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC988u;
    {
        const bool branch_taken_0x2cc988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC988u;
        // 0x2cc98c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc988) {
            ctx->pc = 0x2CC998u;
            goto label_2cc998;
        }
    }
    ctx->pc = 0x2CC990u;
label_2cc990:
    // 0x2cc990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc994: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2cc994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cc998:
    // 0x2cc998: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2cc998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cc99c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2cc99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc9a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2cc9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc9a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cc9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc9a8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2cc9a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc9ac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2cc9acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc9b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9B4u;
        // 0x2cc9b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC9BCu;
    // 0x2cc9bc: 0x0  nop
    ctx->pc = 0x2cc9bcu;
    // NOP
    ctx->pc = 0x2cc9c0u;
}
