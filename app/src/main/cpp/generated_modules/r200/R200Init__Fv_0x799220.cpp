#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: R200Init__Fv
// Address: 0x799220 - 0x7993b8
void R200Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R200Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799244u: goto label_799244;
        case 0x799250u: goto label_799250;
        case 0x799290u: goto label_799290;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992d4u: goto label_7992d4;
        case 0x7992f4u: goto label_7992f4;
        case 0x799310u: goto label_799310;
        case 0x799330u: goto label_799330;
        case 0x799350u: goto label_799350;
        case 0x799370u: goto label_799370;
        case 0x799390u: goto label_799390;
        case 0x79939cu: goto label_79939c;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799230: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799234: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79923c: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x2450aac0  addiu       $s0, $v0, -0x5540 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799248: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79924c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799250:
    // 0x799250: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x799254: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x799258: 0x0  nop
    ctx->pc = 0x799258u;
    // NOP
    // 0x79925c: 0x0  nop
    ctx->pc = 0x79925cu;
    // NOP
    // 0x799260: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799260u;
    {
        const bool branch_taken_0x799260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799260u;
        // 0x799264: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799260) {
            ctx->pc = 0x799250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799250;
        }
    }
    ctx->pc = 0x799268u;
    // 0x799268: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x799268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x79926c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799270: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x799274: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x799278: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x79927c: 0x240503bd  addiu       $a1, $zero, 0x3BD
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 957));
    // 0x799280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799284: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x799288: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x799288u;
    SET_GPR_U32(ctx, 31, 0x799290u);
    ctx->pc = 0x79928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799288u;
    // 0x79928c: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799288u, 0x799290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799290u;
label_799290:
    // 0x799290: 0x2652ea60  addiu       $s2, $s2, -0x15A0
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799294: 0x26109590  addiu       $s0, $s0, -0x6A70
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940048));
    // 0x799298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79929c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992ac: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992ACu;
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->pc = 0x7992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992ACu, 0x7992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B4u;
label_7992b4:
    // 0x7992b4: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x7992b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7992b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7992c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992cc: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992CCu;
    SET_GPR_U32(ctx, 31, 0x7992D4u);
    ctx->pc = 0x7992D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992CCu;
    // 0x7992d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992CCu, 0x7992D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D4u;
label_7992d4:
    // 0x7992d4: 0x263198b0  addiu       $s1, $s1, -0x6750
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940848));
    // 0x7992d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7992d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992ec: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992ECu;
    SET_GPR_U32(ctx, 31, 0x7992F4u);
    ctx->pc = 0x7992F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ECu;
    // 0x7992f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992ECu, 0x7992F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F4u;
label_7992f4:
    // 0x7992f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799300: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799304: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799308: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0x24e79c60  addiu       $a3, $a3, -0x63A0
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941792));
    // 0x79931c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799320: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799328: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799328u;
    SET_GPR_U32(ctx, 31, 0x799330u);
    ctx->pc = 0x79932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799328u;
    // 0x79932c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799328u, 0x799330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0x24e79d10  addiu       $a3, $a3, -0x62F0
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941968));
    // 0x79933c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799340: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799348: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799358: 0x24e79f80  addiu       $a3, $a3, -0x6080
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942592));
    // 0x79935c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799360: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799368: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799378: 0x24e79f08  addiu       $a3, $a3, -0x60F8
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942472));
    // 0x79937c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799380: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799388: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799394u;
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->pc = 0x799398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799394u, 0x79939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79939cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7993a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7993a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7993a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7993ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7993ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993B4u;
    // 0x7993b4: 0x0  nop
    ctx->pc = 0x7993b4u;
    // NOP
    ctx->pc = 0x7993b8u;
}
} // namespace gh_r200
