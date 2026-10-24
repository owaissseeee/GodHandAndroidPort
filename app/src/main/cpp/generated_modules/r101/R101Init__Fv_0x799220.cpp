#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: R101Init__Fv
// Address: 0x799220 - 0x7995a0
void R101Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R101Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799250u: goto label_799250;
        case 0x799268u: goto label_799268;
        case 0x799284u: goto label_799284;
        case 0x799290u: goto label_799290;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992acu: goto label_7992ac;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992e0u: goto label_7992e0;
        case 0x7992e8u: goto label_7992e8;
        case 0x799320u: goto label_799320;
        case 0x799344u: goto label_799344;
        case 0x799364u: goto label_799364;
        case 0x799384u: goto label_799384;
        case 0x7993a4u: goto label_7993a4;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993f0u: goto label_7993f0;
        case 0x7993f8u: goto label_7993f8;
        case 0x79940cu: goto label_79940c;
        case 0x799438u: goto label_799438;
        case 0x79946cu: goto label_79946c;
        case 0x799480u: goto label_799480;
        case 0x799490u: goto label_799490;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994ecu: goto label_7994ec;
        case 0x799500u: goto label_799500;
        case 0x799510u: goto label_799510;
        case 0x799538u: goto label_799538;
        case 0x79956cu: goto label_79956c;
        case 0x799580u: goto label_799580;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799224: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799228: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799234: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799238: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79923c: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x799240: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799248: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x799254: 0xae02ad80  sw          $v0, -0x5280($s0)
    ctx->pc = 0x799254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946176), GPR_U32(ctx, 2));
    // 0x799258: 0x2471ea60  addiu       $s1, $v1, -0x15A0
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x79925c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799260: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x799264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799260u;
    // 0x799264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79926c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79926cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799270: 0x2610a510  addiu       $s0, $s0, -0x5AF0
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944016));
    // 0x799274: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799278: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79927c: 0xc0b09ca  jal         func_2C2728
    ctx->pc = 0x79927Cu;
    SET_GPR_U32(ctx, 31, 0x799284u);
    ctx->pc = 0x799280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79927Cu;
    // 0x799280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2728u, 0x79927Cu, 0x799284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799284u;
label_799284:
    // 0x799284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799288: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799288u;
    SET_GPR_U32(ctx, 31, 0x799290u);
    ctx->pc = 0x79928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799288u;
    // 0x79928c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799288u, 0x799290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799290u;
label_799290:
    // 0x799290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799294: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79929c: 0xc0b09ca  jal         func_2C2728
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x7992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79929Cu;
    // 0x7992a0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2728u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0xc1e6980  jal         func_79A600
    ctx->pc = 0x7992A4u;
    SET_GPR_U32(ctx, 31, 0x7992ACu);
    ctx->pc = 0x79A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A600u, 0x7992A4u, 0x7992ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ACu;
label_7992ac:
    // 0x7992ac: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7992b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7992b4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7992B4u;
    {
        const bool branch_taken_0x7992b4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992b4) {
            ctx->pc = 0x7992CCu;
            goto label_7992cc;
        }
    }
    ctx->pc = 0x7992BCu;
    // 0x7992bc: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7992c0: 0x24a5a718  addiu       $a1, $a1, -0x58E8
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944536));
    // 0x7992c4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992C4u;
    SET_GPR_U32(ctx, 31, 0x7992CCu);
    ctx->pc = 0x7992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C4u;
    // 0x7992c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992C4u, 0x7992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7992d0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992d4: 0x24a5a930  addiu       $a1, $a1, -0x56D0
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945072));
    // 0x7992d8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992D8u;
    SET_GPR_U32(ctx, 31, 0x7992E0u);
    ctx->pc = 0x7992DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D8u;
    // 0x7992dc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992D8u, 0x7992E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E0u;
label_7992e0:
    // 0x7992e0: 0xc1e65ca  jal         func_799728
    ctx->pc = 0x7992E0u;
    SET_GPR_U32(ctx, 31, 0x7992E8u);
    ctx->pc = 0x799728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799728u, 0x7992E0u, 0x7992E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E8u;
label_7992e8:
    // 0x7992e8: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7992ec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x7992f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7992f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7992f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7992F8u;
    {
        const bool branch_taken_0x7992f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F8u;
        // 0x7992fc: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992f8) {
            ctx->pc = 0x799324u;
            goto label_799324;
        }
    }
    ctx->pc = 0x799300u;
    // 0x799300: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0x24e795a8  addiu       $a3, $a3, -0x6A58
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940072));
    // 0x79930c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799310: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799324:
    // 0x799324: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799328: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79932c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799330: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799330u;
    {
        const bool branch_taken_0x799330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799330u;
        // 0x799334: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799330) {
            ctx->pc = 0x799368u;
            goto label_799368;
        }
    }
    ctx->pc = 0x799338u;
    // 0x799338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79933c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79933Cu;
    SET_GPR_U32(ctx, 31, 0x799344u);
    ctx->pc = 0x799340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79933Cu;
    // 0x799340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79933Cu, 0x799344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799344u;
label_799344:
    // 0x799344: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79934c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799350: 0x24e79768  addiu       $a3, $a3, -0x6898
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940520));
    // 0x799354: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799368:
    // 0x799368: 0x3c130800  lui         $s3, 0x800
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2048 << 16));
    // 0x79936c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799370: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x799374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799374u;
    {
        const bool branch_taken_0x799374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799374) {
            ctx->pc = 0x799384u;
            goto label_799384;
        }
    }
    ctx->pc = 0x79937Cu;
    // 0x79937c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79937Cu;
    SET_GPR_U32(ctx, 31, 0x799384u);
    ctx->pc = 0x799380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79937Cu;
    // 0x799380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79937Cu, 0x799384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799384u;
label_799384:
    // 0x799384: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799388: 0x3c110400  lui         $s1, 0x400
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1024 << 16));
    // 0x79938c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799390: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x799394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799394u;
    {
        const bool branch_taken_0x799394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799394) {
            ctx->pc = 0x7993A8u;
            goto label_7993a8;
        }
    }
    ctx->pc = 0x79939Cu;
    // 0x79939c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79939Cu;
    SET_GPR_U32(ctx, 31, 0x7993A4u);
    ctx->pc = 0x7993A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79939Cu;
    // 0x7993a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79939Cu, 0x7993A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A4u;
label_7993a4:
    // 0x7993a4: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_7993a8:
    // 0x7993a8: 0x3c100200  lui         $s0, 0x200
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)512 << 16));
    // 0x7993ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993b0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x7993b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7993B4u;
    {
        const bool branch_taken_0x7993b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b4) {
            ctx->pc = 0x7993C4u;
            goto label_7993c4;
        }
    }
    ctx->pc = 0x7993BCu;
    // 0x7993bc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7993BCu;
    SET_GPR_U32(ctx, 31, 0x7993C4u);
    ctx->pc = 0x7993C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993BCu;
    // 0x7993c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7993BCu, 0x7993C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C4u;
label_7993c4:
    // 0x7993c4: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7993c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7993cc: 0x931824  and         $v1, $a0, $s3
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x7993d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7993D0u;
    {
        const bool branch_taken_0x7993d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D0u;
        // 0x7993d4: 0x911024  and         $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d0) {
            ctx->pc = 0x7993F0u;
            goto label_7993f0;
        }
    }
    ctx->pc = 0x7993D8u;
    // 0x7993d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7993D8u;
    {
        const bool branch_taken_0x7993d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D8u;
        // 0x7993dc: 0x901024  and         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d8) {
            ctx->pc = 0x7993F0u;
            goto label_7993f0;
        }
    }
    ctx->pc = 0x7993E0u;
    // 0x7993e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7993E0u;
    {
        const bool branch_taken_0x7993e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E0u;
        // 0x7993e4: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e0) {
            ctx->pc = 0x7993F0u;
            goto label_7993f0;
        }
    }
    ctx->pc = 0x7993E8u;
    // 0x7993e8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7993E8u;
    SET_GPR_U32(ctx, 31, 0x7993F0u);
    ctx->pc = 0x7993ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E8u;
    // 0x7993ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7993E8u, 0x7993F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F0u;
label_7993f0:
    // 0x7993f0: 0xc1e65a2  jal         func_799688
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799688u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x2611aca0  addiu       $s1, $s0, -0x5360
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945952));
    // 0x7993fc: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799400: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799404: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79940Cu;
    {
        const bool branch_taken_0x79940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79940c) {
            ctx->pc = 0x799480u;
            goto label_799480;
        }
    }
    ctx->pc = 0x799414u;
    // 0x799414: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799418: 0x8203aca0  lb          $v1, -0x5360($s0)
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945952)));
    // 0x79941c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799424: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x799424u;
    {
        const bool branch_taken_0x799424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799424) {
            ctx->pc = 0x799460u;
            goto label_799460;
        }
    }
    ctx->pc = 0x79942Cu;
    // 0x79942c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799430: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799434: 0x0  nop
    ctx->pc = 0x799434u;
    // NOP
label_799438:
    // 0x799438: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79943c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799440: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799444: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799448: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79944c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x799460u;
            goto label_799460;
        }
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799458: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799458u;
    {
        const bool branch_taken_0x799458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799458) {
            ctx->pc = 0x79945Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799458u;
            // 0x79945c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799438;
        }
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799464: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79946Cu;
    {
        const bool branch_taken_0x79946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79946c) {
            ctx->pc = 0x799480u;
            goto label_799480;
        }
    }
    ctx->pc = 0x799474u;
    // 0x799474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799478: 0xc070956  jal         func_1C2558
    ctx->pc = 0x799478u;
    SET_GPR_U32(ctx, 31, 0x799480u);
    ctx->pc = 0x79947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799478u;
    // 0x79947c: 0x24a5aca8  addiu       $a1, $a1, -0x5358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2558u, 0x799478u, 0x799480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799480u;
label_799480:
    // 0x799480: 0x2650acb0  addiu       $s0, $s2, -0x5350
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945968));
    // 0x799484: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799488: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799488u;
    // 0x79948c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x799490u;
    {
        const bool branch_taken_0x799490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799490) {
            ctx->pc = 0x799494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799490u;
            // 0x799494: 0x2670acc0  addiu       $s0, $s3, -0x5340 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945984));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799504u;
            goto label_799504;
        }
    }
    ctx->pc = 0x799498u;
    // 0x799498: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79949c: 0x8243acb0  lb          $v1, -0x5350($s2)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294945968)));
    // 0x7994a0: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x7994a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994B0u;
    // 0x7994b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_7994b8:
    // 0x7994b8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x7994bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7994c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7994c4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7994c8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7994cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7994CCu;
    {
        const bool branch_taken_0x7994cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994cc) {
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994D4u;
    // 0x7994d4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7994d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7994D8u;
    {
        const bool branch_taken_0x7994d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994d8) {
            ctx->pc = 0x7994DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994D8u;
            // 0x7994dc: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994b8;
        }
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e4: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7994ECu;
    {
        const bool branch_taken_0x7994ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994ec) {
            ctx->pc = 0x799500u;
            goto label_799500;
        }
    }
    ctx->pc = 0x7994F4u;
    // 0x7994f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f8: 0xc070956  jal         func_1C2558
    ctx->pc = 0x7994F8u;
    SET_GPR_U32(ctx, 31, 0x799500u);
    ctx->pc = 0x7994FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F8u;
    // 0x7994fc: 0x24a5acb8  addiu       $a1, $a1, -0x5348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2558u, 0x7994F8u, 0x799500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799500u;
label_799500:
    // 0x799500: 0x2670acc0  addiu       $s0, $s3, -0x5340
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945984));
label_799504:
    // 0x799504: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799508: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x799510u;
    {
        const bool branch_taken_0x799510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799510) {
            ctx->pc = 0x799514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799510u;
            // 0x799514: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799584u;
            goto label_799584;
        }
    }
    ctx->pc = 0x799518u;
    // 0x799518: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79951c: 0x8263acc0  lb          $v1, -0x5340($s3)
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294945984)));
    // 0x799520: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799528: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799528) {
            ctx->pc = 0x799560u;
            goto label_799560;
        }
    }
    ctx->pc = 0x799530u;
    // 0x799530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799534: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_799538:
    // 0x799538: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79953c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799540: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799544: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799548: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79954c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79954Cu;
    {
        const bool branch_taken_0x79954c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79954c) {
            ctx->pc = 0x799560u;
            goto label_799560;
        }
    }
    ctx->pc = 0x799554u;
    // 0x799554: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799558: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799558) {
            ctx->pc = 0x79955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799558u;
            // 0x79955c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799538;
        }
    }
    ctx->pc = 0x799560u;
label_799560:
    // 0x799560: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799564: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79956Cu;
    {
        const bool branch_taken_0x79956c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79956c) {
            ctx->pc = 0x799580u;
            goto label_799580;
        }
    }
    ctx->pc = 0x799574u;
    // 0x799574: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799578: 0xc070956  jal         func_1C2558
    ctx->pc = 0x799578u;
    SET_GPR_U32(ctx, 31, 0x799580u);
    ctx->pc = 0x79957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799578u;
    // 0x79957c: 0x24a5acc8  addiu       $a1, $a1, -0x5338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2558u, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799584:
    // 0x799584: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799588: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79958c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79958cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799590: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799598: 0x3e00008  jr          $ra
    ctx->pc = 0x799598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995A0u;
}
} // namespace gh_r101
