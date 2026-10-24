#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: R304Init__Fv
// Address: 0x799220 - 0x7993e8
void R304Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R304Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x79924cu: goto label_79924c;
        case 0x79925cu: goto label_79925c;
        case 0x799278u: goto label_799278;
        case 0x799284u: goto label_799284;
        case 0x799290u: goto label_799290;
        case 0x79929cu: goto label_79929c;
        case 0x7992a8u: goto label_7992a8;
        case 0x7992c8u: goto label_7992c8;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992f0u: goto label_7992f0;
        case 0x799318u: goto label_799318;
        case 0x799348u: goto label_799348;
        case 0x799380u: goto label_799380;
        case 0x7993b0u: goto label_7993b0;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799224: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799228: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799234: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799238: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79923c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799244: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799244u;
    SET_GPR_U32(ctx, 31, 0x79924Cu);
    ctx->pc = 0x799248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799244u;
    // 0x799248: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799244u, 0x79924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79924Cu;
label_79924c:
    // 0x79924c: 0x24040353  addiu       $a0, $zero, 0x353
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 851));
    // 0x799250: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x799254: 0xc0c3ea6  jal         func_30FA98
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0xae22ad00  sw          $v0, -0x5300($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
    // 0x799260: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799264: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79926c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79926cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799270: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799270u;
    SET_GPR_U32(ctx, 31, 0x799278u);
    ctx->pc = 0x799274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799270u;
    // 0x799274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799270u, 0x799278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799278u;
label_799278:
    // 0x799278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79927c: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x79927Cu;
    SET_GPR_U32(ctx, 31, 0x799284u);
    ctx->pc = 0x799280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79927Cu;
    // 0x799280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x79927Cu, 0x799284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799284u;
label_799284:
    // 0x799284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799288: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799288u;
    SET_GPR_U32(ctx, 31, 0x799290u);
    ctx->pc = 0x79928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799288u;
    // 0x79928c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799288u, 0x799290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799290u;
label_799290:
    // 0x799290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799294: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x799294u;
    SET_GPR_U32(ctx, 31, 0x79929Cu);
    ctx->pc = 0x799298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799294u;
    // 0x799298: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x799294u, 0x79929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a0: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7992A0u;
    SET_GPR_U32(ctx, 31, 0x7992A8u);
    ctx->pc = 0x7992A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A0u;
    // 0x7992a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7992A0u, 0x7992A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A8u;
label_7992a8:
    // 0x7992a8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b4: 0x24e7a808  addiu       $a3, $a3, -0x57F8
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944776));
    // 0x7992b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7992b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c0: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7992C0u;
    SET_GPR_U32(ctx, 31, 0x7992C8u);
    ctx->pc = 0x7992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C0u;
    // 0x7992c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7992C0u, 0x7992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7992cc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992d0: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x7992d4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7992e0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992e4: 0x24a59560  addiu       $a1, $a1, -0x6AA0
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940000));
    // 0x7992e8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992E8u;
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->pc = 0x7992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E8u;
    // 0x7992ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992E8u, 0x7992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F0u;
label_7992f0:
    // 0x7992f0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7992f4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7992f8: 0x8064aba0  lb          $a0, -0x5460($v1)
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79ABA0u));
    // 0x7992fc: 0x2466aba0  addiu       $a2, $v1, -0x5460
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945696));
    // 0x799300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79930c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79930Cu;
    {
        const bool branch_taken_0x79930c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79930c) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799318:
    // 0x799318: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79931c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799320: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799324: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799328: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79932c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79932Cu;
    {
        const bool branch_taken_0x79932c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79932c) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799334u;
    // 0x799334: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799338: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799338u;
    {
        const bool branch_taken_0x799338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799338) {
            ctx->pc = 0x79933Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799338u;
            // 0x79933c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799318;
        }
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799340u;
    SET_GPR_U32(ctx, 31, 0x799348u);
    ctx->pc = 0x799344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799340u;
    // 0x799344: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799340u, 0x799348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79934c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79934Cu;
    {
        const bool branch_taken_0x79934c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79934c) {
            ctx->pc = 0x79935Cu;
            goto label_79935c;
        }
    }
    ctx->pc = 0x799354u;
    // 0x799354: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x799354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x799358: 0xac8205f0  sw          $v0, 0x5F0($a0)
    ctx->pc = 0x799358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 2));
label_79935c:
    // 0x79935c: 0x8262aba8  lb          $v0, -0x5458($s3)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294945704)));
    // 0x799360: 0x26084c58  addiu       $t0, $s0, 0x4C58
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 19544));
    // 0x799364: 0x2663aba8  addiu       $v1, $s3, -0x5458
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945704));
    // 0x799368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79936c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79936Cu;
    {
        const bool branch_taken_0x79936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79936c) {
            ctx->pc = 0x7993A8u;
            goto label_7993a8;
        }
    }
    ctx->pc = 0x799374u;
    // 0x799374: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799378: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79937c: 0x0  nop
    ctx->pc = 0x79937cu;
    // NOP
label_799380:
    // 0x799380: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799384: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799388: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79938c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799390: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799394u;
    {
        const bool branch_taken_0x799394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799394) {
            ctx->pc = 0x7993A8u;
            goto label_7993a8;
        }
    }
    ctx->pc = 0x79939Cu;
    // 0x79939c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7993a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7993A0u;
    {
        const bool branch_taken_0x7993a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993a0) {
            ctx->pc = 0x7993A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993A0u;
            // 0x7993a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799380;
        }
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7993B4u;
    {
        const bool branch_taken_0x7993b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b4) {
            ctx->pc = 0x7993C8u;
            goto label_7993c8;
        }
    }
    ctx->pc = 0x7993BCu;
    // 0x7993bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993c0: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x7993c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x7993c4: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x7993c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_7993c8:
    // 0x7993c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7993c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7993cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7993ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7993d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7993d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7993d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7993dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7993DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993E4u;
    // 0x7993e4: 0x0  nop
    ctx->pc = 0x7993e4u;
    // NOP
    ctx->pc = 0x7993e8u;
}
} // namespace gh_r304
