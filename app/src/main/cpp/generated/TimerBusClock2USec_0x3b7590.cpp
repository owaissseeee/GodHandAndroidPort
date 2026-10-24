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

// Function: TimerBusClock2USec
// Address: 0x3b7590 - 0x3b7638
void TimerBusClock2USec_0x3b7590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TimerBusClock2USec_0x3b7590");
#endif

    switch (ctx->pc) {
        case 0x3b75b8u: goto label_3b75b8;
        case 0x3b7614u: goto label_3b7614;
        default: break;
    }

    ctx->pc = 0x3b7590u;

    // 0x3b7590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b7590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b7594: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b7598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b759c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b759cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b75a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b75a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b75a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b75a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b75a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b75a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b75ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b75acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b75b0: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3B75B0u;
    SET_GPR_U32(ctx, 31, 0x3B75B8u);
    ctx->pc = 0x3B75B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B75B0u;
    // 0x3b75b4: 0x3c0508ca  lui         $a1, 0x8CA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3B75B0u, 0x3B75B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B75B8u;
label_3b75b8:
    // 0x3b75b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b75b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b75bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b75bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b75c0: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B75C0u;
    {
        const bool branch_taken_0x3b75c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b75c0) {
            ctx->pc = 0x3B75C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B75C0u;
            // 0x3b75c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B75C8u;
            goto label_3b75c8;
        }
    }
    ctx->pc = 0x3B75C8u;
label_3b75c8:
    // 0x3b75c8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B75C8u;
    {
        const bool branch_taken_0x3b75c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75C8u;
        // 0x3b75cc: 0x3c0308ca  lui         $v1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b75c8) {
            ctx->pc = 0x3B7620u;
            goto label_3b7620;
        }
    }
    ctx->pc = 0x3B75D0u;
    // 0x3b75d0: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x3b75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x3b75d4: 0x430019  multu       $v0, $v1
    ctx->pc = 0x3b75d4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b75d8: 0x3012  mflo        $a2
    ctx->pc = 0x3b75d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3b75dc: 0x1810  mfhi        $v1
    ctx->pc = 0x3b75dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b75e0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3b75e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3b75e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b75e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b75e8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3b75e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3b75ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3b75ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3b75f0: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x3b75f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x3b75f4: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x3b75f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x3b75f8: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3b75f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3b75fc: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x3b75fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x3b7600: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x3b7600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x3b7604: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x3b7604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x3b7608: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x3b7608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3b760c: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3B760Cu;
    SET_GPR_U32(ctx, 31, 0x3B7614u);
    ctx->pc = 0x3B7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B760Cu;
    // 0x3b7610: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3B760Cu, 0x3B7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7614u;
label_3b7614:
    // 0x3b7614: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b7614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b7618: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b7618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b761c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3b761cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3b7620:
    // 0x3b7620: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b7620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7624: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7628: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b7628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b762c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b762cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7630: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7630u;
        // 0x3b7634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7638u;
}
