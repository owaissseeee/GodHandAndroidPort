#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04f_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04f
{
// Function: R04fInit__Fv
// Address: 0x799220 - 0x799380
void R04fInit__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R04fInit__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799244u: goto label_799244;
        case 0x799250u: goto label_799250;
        case 0x799260u: goto label_799260;
        case 0x79926cu: goto label_79926c;
        case 0x79929cu: goto label_79929c;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992d0u: goto label_7992d0;
        case 0x7992f0u: goto label_7992f0;
        case 0x799300u: goto label_799300;
        case 0x799310u: goto label_799310;
        case 0x799320u: goto label_799320;
        case 0x799330u: goto label_799330;
        case 0x799340u: goto label_799340;
        case 0x79934cu: goto label_79934c;
        case 0x799364u: goto label_799364;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x24040ce0  addiu       $a0, $zero, 0xCE0
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3296));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799234: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79923c: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799248: 0xc07ba72  jal         func_1EE9C8
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE9C8u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0x8e24d6e8  lw          $a0, -0x2918($s1)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x799254: 0xae509800  sw          $s0, -0x6800($s2)
    ctx->pc = 0x799254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294940672), GPR_U32(ctx, 16));
    // 0x799258: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x8e24d6e8  lw          $a0, -0x2918($s1)
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x799264: 0xc04f206  jal         func_13C818
    ctx->pc = 0x799264u;
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->pc = 0x799268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C818u, 0x799264u, 0x79926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79926Cu;
label_79926c:
    // 0x79926c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799270: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x799274: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x799278: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79927c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799280: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x799280u;
    {
        const bool branch_taken_0x799280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799280u;
        // 0x799284: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799280) {
            ctx->pc = 0x7992D8u;
            goto label_7992d8;
        }
    }
    ctx->pc = 0x799288u;
    // 0x799288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79928c: 0x8e449800  lw          $a0, -0x6800($s2)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294940672)));
    // 0x799290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799294: 0xc07bf9c  jal         func_1EFE70
    ctx->pc = 0x799294u;
    SET_GPR_U32(ctx, 31, 0x79929Cu);
    ctx->pc = 0x799298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799294u;
    // 0x799298: 0xa0626aa5  sb          $v0, 0x6AA5($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 27301), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE70u, 0x799294u, 0x79929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7992a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x7992a4: 0x240503b3  addiu       $a1, $zero, 0x3B3
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    // 0x7992a8: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x7992ac: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x7992b0: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x7992B0u;
    SET_GPR_U32(ctx, 31, 0x7992B8u);
    ctx->pc = 0x7992B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B0u;
    // 0x7992b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x7992B0u, 0x7992B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B8u;
label_7992b8:
    // 0x7992b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7992bc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992c0: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992c4: 0x24a594c0  addiu       $a1, $a1, -0x6B40
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939840));
    // 0x7992c8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992C8u;
    SET_GPR_U32(ctx, 31, 0x7992D0u);
    ctx->pc = 0x7992CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C8u;
    // 0x7992cc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992C8u, 0x7992D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D0u;
label_7992d0:
    // 0x7992d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x7992D0u;
    {
        const bool branch_taken_0x7992d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D0u;
        // 0x7992d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d0) {
            ctx->pc = 0x799368u;
            goto label_799368;
        }
    }
    ctx->pc = 0x7992D8u;
label_7992d8:
    // 0x7992d8: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x7992dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992e0: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x7992e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e8: 0xc04cccc  jal         func_133330
    ctx->pc = 0x7992E8u;
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->pc = 0x7992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E8u;
    // 0x7992ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x7992E8u, 0x7992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F0u;
label_7992f0:
    // 0x7992f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7992f8: 0xc04cccc  jal         func_133330
    ctx->pc = 0x7992F8u;
    SET_GPR_U32(ctx, 31, 0x799300u);
    ctx->pc = 0x7992FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F8u;
    // 0x7992fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x7992F8u, 0x799300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799300u;
label_799300:
    // 0x799300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799308: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799314: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799318: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799324: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799328: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799328u;
    SET_GPR_U32(ctx, 31, 0x799330u);
    ctx->pc = 0x79932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799328u;
    // 0x79932c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799328u, 0x799330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799350: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799354: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799358: 0x24a59388  addiu       $a1, $a1, -0x6C78
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939528));
    // 0x79935c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799368:
    // 0x799368: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79936c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79936cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799374: 0x3e00008  jr          $ra
    ctx->pc = 0x799374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79937Cu;
    // 0x79937c: 0x0  nop
    ctx->pc = 0x79937cu;
    // NOP
    ctx->pc = 0x799380u;
}
} // namespace gh_r04f
