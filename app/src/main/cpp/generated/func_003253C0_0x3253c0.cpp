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

// Function: func_003253C0
// Address: 0x3253c0 - 0x325468
void func_003253C0_0x3253c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003253C0_0x3253c0");
#endif

    switch (ctx->pc) {
        case 0x32540cu: goto label_32540c;
        case 0x325428u: goto label_325428;
        case 0x325440u: goto label_325440;
        case 0x325454u: goto label_325454;
        default: break;
    }

    ctx->pc = 0x3253c0u;

    // 0x3253c0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3253c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3253c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3253c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3253c8: 0x8c47f9d8  lw          $a3, -0x628($v0)
    ctx->pc = 0x3253c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3CF9D8u));
    // 0x3253cc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x3253ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x3253d0: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x3253d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x3253d4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3253d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3253d8: 0x24a54eb0  addiu       $a1, $a1, 0x4EB0
    ctx->pc = 0x3253d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20144));
    // 0x3253dc: 0x246381d0  addiu       $v1, $v1, -0x7E30
    ctx->pc = 0x3253dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934992));
    // 0x3253e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3253e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253e4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x3253e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3253e8: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x3253e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x3253ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3253ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3253f0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3253f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3253f4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3253f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3253f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3253f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3253fc: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x3253fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x325400: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x325400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x325404: 0xc0ebea8  jal         func_3AFAA0
    ctx->pc = 0x325404u;
    SET_GPR_U32(ctx, 31, 0x32540Cu);
    ctx->pc = 0x325408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325404u;
    // 0x325408: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAA0u, 0x325404u, 0x32540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32540Cu;
label_32540c:
    // 0x32540c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32540cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325414: 0x24708138  addiu       $s0, $v1, -0x7EC8
    ctx->pc = 0x325414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934840));
    // 0x325418: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x325418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C8138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C8138u, _value); } while (0);
    // 0x32541c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32541cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C8138u));
    // 0x325420: 0xc0ec2ea  jal         func_3B0BA8
    ctx->pc = 0x325420u;
    SET_GPR_U32(ctx, 31, 0x325428u);
    ctx->pc = 0x325424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325420u;
    // 0x325424: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0BA8u, 0x325420u, 0x325428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325428u;
label_325428:
    // 0x325428: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x325428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32542c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32542Cu;
    {
        const bool branch_taken_0x32542c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32542Cu;
        // 0x325430: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32542c) {
            ctx->pc = 0x325448u;
            goto label_325448;
        }
    }
    ctx->pc = 0x325434u;
    // 0x325434: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x325434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325438: 0xc0c94d8  jal         func_325360
    ctx->pc = 0x325438u;
    SET_GPR_U32(ctx, 31, 0x325440u);
    ctx->pc = 0x325360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325360u, 0x325438u, 0x325440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325440u;
label_325440:
    // 0x325440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x325440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325444: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_325448:
    // 0x325448: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x325448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32544c: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x32544Cu;
    SET_GPR_U32(ctx, 31, 0x325454u);
    ctx->pc = 0x325450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32544Cu;
    // 0x325450: 0x8c4580b4  lw          $a1, -0x7F4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x32544Cu, 0x325454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325454u;
label_325454:
    // 0x325454: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x325454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325458: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x325458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32545c: 0x3e00008  jr          $ra
    ctx->pc = 0x32545Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32545Cu;
        // 0x325460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32545Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325464u;
    // 0x325464: 0x0  nop
    ctx->pc = 0x325464u;
    // NOP
    ctx->pc = 0x325468u;
}
