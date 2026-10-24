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

// Function: func_003260C8
// Address: 0x3260c8 - 0x326148
void func_003260C8_0x3260c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003260C8_0x3260c8");
#endif

    switch (ctx->pc) {
        case 0x326134u: goto label_326134;
        case 0x32613cu: goto label_32613c;
        default: break;
    }

    ctx->pc = 0x3260c8u;

    // 0x3260c8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3260c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3260cc: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3260ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3260d0: 0x8c4cf9e0  lw          $t4, -0x620($v0)
    ctx->pc = 0x3260d0u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x3CF9E0u));
    // 0x3260d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3260d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260d8: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x3260d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3260dc: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x3260dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x3260e0: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x3260e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x3260e4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x3260e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x3260e8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3260e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3260ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3260ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3260f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260f4: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x3260f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x3260f8: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x3260f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x3260fc: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x3260fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x326100: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x326100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x326104: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x326104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x326108: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x326108u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x32610c: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x32610cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x326110: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x326110u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x326114: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x326114u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x326118: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x326118u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x32611c: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x32611cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x326120: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x326120u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x326124: 0x118d0005  beq         $t4, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x326124u;
    {
        const bool branch_taken_0x326124 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 13));
        ctx->pc = 0x326128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326124u;
        // 0x326128: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326124) {
            ctx->pc = 0x32613Cu;
            goto label_32613c;
        }
    }
    ctx->pc = 0x32612Cu;
    // 0x32612c: 0xc0e9eba  jal         func_3A7AE8
    ctx->pc = 0x32612Cu;
    SET_GPR_U32(ctx, 31, 0x326134u);
    ctx->pc = 0x3A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE8u, 0x32612Cu, 0x326134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326134u;
label_326134:
    // 0x326134: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x326134u;
    SET_GPR_U32(ctx, 31, 0x32613Cu);
    ctx->pc = 0x326138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326134u;
    // 0x326138: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x326134u, 0x32613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32613Cu;
label_32613c:
    // 0x32613c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x32613cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x326140: 0x3e00008  jr          $ra
    ctx->pc = 0x326140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326140u;
        // 0x326144: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326148u;
}
