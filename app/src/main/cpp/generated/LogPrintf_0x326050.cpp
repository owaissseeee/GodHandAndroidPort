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

// Function: LogPrintf
// Address: 0x326050 - 0x3260c8
void LogPrintf_0x326050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LogPrintf_0x326050");
#endif

    switch (ctx->pc) {
        case 0x3260b4u: goto label_3260b4;
        case 0x3260bcu: goto label_3260bc;
        default: break;
    }

    ctx->pc = 0x326050u;

    // 0x326050: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x326050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x326054: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x326054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x326058: 0x8c43f9e0  lw          $v1, -0x620($v0)
    ctx->pc = 0x326058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3CF9E0u));
    // 0x32605c: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x32605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x326060: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x326060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326064: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x326064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x326068: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x326068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x32606c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x326070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x326070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326074: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x326074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x326078: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x326078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x32607c: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x32607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x326080: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x326080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x326084: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x326084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x326088: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x326088u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x32608c: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x32608cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x326090: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x326090u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x326094: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x326094u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x326098: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x326098u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x32609c: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x32609cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3260a0: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x3260a0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3260a4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3260A4u;
    {
        const bool branch_taken_0x3260a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3260A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260A4u;
        // 0x3260a8: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3260a4) {
            ctx->pc = 0x3260BCu;
            goto label_3260bc;
        }
    }
    ctx->pc = 0x3260ACu;
    // 0x3260ac: 0xc0e9eba  jal         func_3A7AE8
    ctx->pc = 0x3260ACu;
    SET_GPR_U32(ctx, 31, 0x3260B4u);
    ctx->pc = 0x3A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE8u, 0x3260ACu, 0x3260B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260B4u;
label_3260b4:
    // 0x3260b4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3260B4u;
    SET_GPR_U32(ctx, 31, 0x3260BCu);
    ctx->pc = 0x3260B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260B4u;
    // 0x3260b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3260B4u, 0x3260BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260BCu;
label_3260bc:
    // 0x3260bc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3260bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3260c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3260C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3260C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260C0u;
        // 0x3260c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3260C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3260C8u;
}
