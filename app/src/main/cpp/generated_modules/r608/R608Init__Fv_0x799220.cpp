#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: R608Init__Fv
// Address: 0x799220 - 0x799300
void R608Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R608Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799240u: goto label_799240;
        case 0x799260u: goto label_799260;
        case 0x799274u: goto label_799274;
        case 0x79927cu: goto label_79927c;
        case 0x799284u: goto label_799284;
        case 0x799298u: goto label_799298;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992ecu: goto label_7992ec;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799224: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x799228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799244: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x799248: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79924c: 0x240503af  addiu       $a1, $zero, 0x3AF
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
    // 0x799250: 0xae02b1c4  sw          $v0, -0x4E3C($s0)
    ctx->pc = 0x799250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947268), GPR_U32(ctx, 2));
    // 0x799254: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x799258: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0x24c64220  addiu       $a2, $a2, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799264: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799268: 0x24a594c0  addiu       $a1, $a1, -0x6B40
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939840));
    // 0x79926c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79926Cu;
    SET_GPR_U32(ctx, 31, 0x799274u);
    ctx->pc = 0x799270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79926Cu;
    // 0x799270: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79926Cu, 0x799274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799274u;
label_799274:
    // 0x799274: 0xc1e657c  jal         func_7995F0
    ctx->pc = 0x799274u;
    SET_GPR_U32(ctx, 31, 0x79927Cu);
    ctx->pc = 0x799278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799274u;
    // 0x799278: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995F0u, 0x799274u, 0x79927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79927Cu;
label_79927c:
    // 0x79927c: 0xc1e66e2  jal         func_799B88
    ctx->pc = 0x79927Cu;
    SET_GPR_U32(ctx, 31, 0x799284u);
    ctx->pc = 0x799280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79927Cu;
    // 0x799280: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B88u, 0x79927Cu, 0x799284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799284u;
label_799284:
    // 0x799284: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799288: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79928c: 0x24a59310  addiu       $a1, $a1, -0x6CF0
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939408));
    // 0x799290: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799290u;
    SET_GPR_U32(ctx, 31, 0x799298u);
    ctx->pc = 0x799294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799290u;
    // 0x799294: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799290u, 0x799298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799298u;
label_799298:
    // 0x799298: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79929c: 0x24e7a488  addiu       $a3, $a3, -0x5B78
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943880));
    // 0x7992a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7992a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b0: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992B0u;
    SET_GPR_U32(ctx, 31, 0x7992B8u);
    ctx->pc = 0x7992B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B0u;
    // 0x7992b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992B0u, 0x7992B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B8u;
label_7992b8:
    // 0x7992b8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7992c4: 0x24e7a4d0  addiu       $a3, $a3, -0x5B30
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943952));
    // 0x7992c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d0: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992D0u;
    SET_GPR_U32(ctx, 31, 0x7992D8u);
    ctx->pc = 0x7992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D0u;
    // 0x7992d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992D0u, 0x7992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D8u;
label_7992d8:
    // 0x7992d8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7992dc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992e0: 0x24a59308  addiu       $a1, $a1, -0x6CF8
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939400));
    // 0x7992e4: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7992ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7992f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7992f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7992F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F8u;
        // 0x7992fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799300u;
}
} // namespace gh_r608
