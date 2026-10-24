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

// Function: cSnd_BgmEvDataEnd
// Address: 0x2d1958 - 0x2d19d8
void cSnd_BgmEvDataEnd_0x2d1958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvDataEnd_0x2d1958");
#endif

    switch (ctx->pc) {
        case 0x2d1980u: goto label_2d1980;
        case 0x2d199cu: goto label_2d199c;
        case 0x2d19b4u: goto label_2d19b4;
        case 0x2d19bcu: goto label_2d19bc;
        default: break;
    }

    ctx->pc = 0x2d1958u;

    // 0x2d1958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d195c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d1960: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d1960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d1964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d196c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d1970: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2d1970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d1974: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D1974u;
    {
        const bool branch_taken_0x2d1974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1974u;
        // 0x2d1978: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1974) {
            ctx->pc = 0x2D19A8u;
            goto label_2d19a8;
        }
    }
    ctx->pc = 0x2D197Cu;
    // 0x2d197c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2d1980:
    // 0x2d1980: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2d1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2d1984: 0x54520006  bnel        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1984u;
    {
        const bool branch_taken_0x2d1984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d1984) {
            ctx->pc = 0x2D1988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1984u;
            // 0x2d1988: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D19A0u;
            goto label_2d19a0;
        }
    }
    ctx->pc = 0x2D198Cu;
    // 0x2d198c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d198cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d1990: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1994: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D1994u;
    SET_GPR_U32(ctx, 31, 0x2D199Cu);
    ctx->pc = 0x2D1998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1994u;
    // 0x2d1998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D1994u, 0x2D199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D199Cu;
label_2d199c:
    // 0x2d199c: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d199cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d19a0:
    // 0x2d19a0: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D19A0u;
    {
        const bool branch_taken_0x2d19a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d19a0) {
            ctx->pc = 0x2D19A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D19A0u;
            // 0x2d19a4: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1980;
        }
    }
    ctx->pc = 0x2D19A8u;
label_2d19a8:
    // 0x2d19a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d19a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19ac: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D19ACu;
    SET_GPR_U32(ctx, 31, 0x2D19B4u);
    ctx->pc = 0x2D19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19ACu;
    // 0x2d19b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D19ACu, 0x2D19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19B4u;
label_2d19b4:
    // 0x2d19b4: 0xc0b3fe4  jal         func_2CFF90
    ctx->pc = 0x2D19B4u;
    SET_GPR_U32(ctx, 31, 0x2D19BCu);
    ctx->pc = 0x2D19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19B4u;
    // 0x2d19b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF90u, 0x2D19B4u, 0x2D19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19BCu;
label_2d19bc:
    // 0x2d19bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d19bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d19c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d19c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d19c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d19c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d19c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d19c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d19cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D19CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19CCu;
        // 0x2d19d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D19CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D19D4u;
    // 0x2d19d4: 0x0  nop
    ctx->pc = 0x2d19d4u;
    // NOP
    ctx->pc = 0x2d19d8u;
}
