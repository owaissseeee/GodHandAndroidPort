#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: R205Init__Fv
// Address: 0x799220 - 0x799378
void R205Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R205Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x799258u: goto label_799258;
        case 0x799280u: goto label_799280;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992fcu: goto label_7992fc;
        case 0x79930cu: goto label_79930c;
        case 0x79932cu: goto label_79932c;
        case 0x799344u: goto label_799344;
        case 0x79934cu: goto label_79934c;
        case 0x799364u: goto label_799364;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799230u;
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->pc = 0x799234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79923c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x799240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799244: 0xae02a680  sw          $v0, -0x5980($s0)
    ctx->pc = 0x799244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944384), GPR_U32(ctx, 2));
    // 0x799248: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x79924c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x799250: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x799250u;
    SET_GPR_U32(ctx, 31, 0x799258u);
    ctx->pc = 0x799254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799250u;
    // 0x799254: 0x240503b6  addiu       $a1, $zero, 0x3B6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799250u, 0x799258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799258u;
label_799258:
    // 0x799258: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x79925c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799260: 0x2470ea60  addiu       $s0, $v1, -0x15A0
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x799264: 0x24e79640  addiu       $a3, $a3, -0x69C0
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940224));
    // 0x799268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79926c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799270: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799278: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799278u;
    SET_GPR_U32(ctx, 31, 0x799280u);
    ctx->pc = 0x79927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799278u;
    // 0x79927c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799278u, 0x799280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799280u;
label_799280:
    // 0x799280: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799288: 0x24e79748  addiu       $a3, $a3, -0x68B8
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940488));
    // 0x79928c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79928cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799290: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799294: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799298: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799298u;
    SET_GPR_U32(ctx, 31, 0x7992A0u);
    ctx->pc = 0x79929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799298u;
    // 0x79929c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799298u, 0x7992A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A0u;
label_7992a0:
    // 0x7992a0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a8: 0x24e798f0  addiu       $a3, $a3, -0x6710
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940912));
    // 0x7992ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7992b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b8: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992B8u;
    SET_GPR_U32(ctx, 31, 0x7992C0u);
    ctx->pc = 0x7992BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B8u;
    // 0x7992bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992B8u, 0x7992C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C0u;
label_7992c0:
    // 0x7992c0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992c4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7992cc: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7992CCu;
    {
        const bool branch_taken_0x7992cc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x7992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992CCu;
        // 0x7992d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992cc) {
            ctx->pc = 0x799304u;
            goto label_799304;
        }
    }
    ctx->pc = 0x7992D4u;
    // 0x7992d4: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e8: 0x24e79380  addiu       $a3, $a3, -0x6C80
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x7992ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f4: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x7992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F4u;
    // 0x7992f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7992FCu;
    {
        const bool branch_taken_0x7992fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992FCu;
        // 0x799300: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992fc) {
            ctx->pc = 0x799330u;
            goto label_799330;
        }
    }
    ctx->pc = 0x799304u;
label_799304:
    // 0x799304: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799304u;
    SET_GPR_U32(ctx, 31, 0x79930Cu);
    ctx->pc = 0x799308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799304u;
    // 0x799308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799304u, 0x79930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79930Cu;
label_79930c:
    // 0x79930c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0x24e794c0  addiu       $a3, $a3, -0x6B40
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939840));
    // 0x79931c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799324: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x799324u;
    SET_GPR_U32(ctx, 31, 0x79932Cu);
    ctx->pc = 0x799328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799324u;
    // 0x799328: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x799324u, 0x79932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799330:
    // 0x799330: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799334: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799338: 0x24a59a98  addiu       $a1, $a1, -0x6568
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941336));
    // 0x79933c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79933Cu;
    SET_GPR_U32(ctx, 31, 0x799344u);
    ctx->pc = 0x799340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79933Cu;
    // 0x799340: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79933Cu, 0x799344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799344u;
label_799344:
    // 0x799344: 0xc1e67bc  jal         func_799EF0
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799EF0u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799354: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79936c: 0x3e00008  jr          $ra
    ctx->pc = 0x79936Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79936Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799374u;
    // 0x799374: 0x0  nop
    ctx->pc = 0x799374u;
    // NOP
    ctx->pc = 0x799378u;
}
} // namespace gh_r205
