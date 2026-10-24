#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: R301Init__Fv
// Address: 0x799220 - 0x7996c0
void R301Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R301Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x79925cu: goto label_79925c;
        case 0x79926cu: goto label_79926c;
        case 0x799280u: goto label_799280;
        case 0x799290u: goto label_799290;
        case 0x79929cu: goto label_79929c;
        case 0x7992b0u: goto label_7992b0;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992e4u: goto label_7992e4;
        case 0x7992f0u: goto label_7992f0;
        case 0x7992fcu: goto label_7992fc;
        case 0x799320u: goto label_799320;
        case 0x79932cu: goto label_79932c;
        case 0x799338u: goto label_799338;
        case 0x79934cu: goto label_79934c;
        case 0x799358u: goto label_799358;
        case 0x799388u: goto label_799388;
        case 0x799394u: goto label_799394;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993d4u: goto label_7993d4;
        case 0x799410u: goto label_799410;
        case 0x79941cu: goto label_79941c;
        case 0x799428u: goto label_799428;
        case 0x799440u: goto label_799440;
        case 0x799450u: goto label_799450;
        case 0x79945cu: goto label_79945c;
        case 0x799468u: goto label_799468;
        case 0x79947cu: goto label_79947c;
        case 0x799488u: goto label_799488;
        case 0x799490u: goto label_799490;
        case 0x7994acu: goto label_7994ac;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f8u: goto label_7994f8;
        case 0x799504u: goto label_799504;
        case 0x799518u: goto label_799518;
        case 0x799524u: goto label_799524;
        case 0x79952cu: goto label_79952c;
        case 0x799534u: goto label_799534;
        case 0x799558u: goto label_799558;
        case 0x799588u: goto label_799588;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995e0u: goto label_7995e0;
        case 0x799604u: goto label_799604;
        case 0x799610u: goto label_799610;
        case 0x799620u: goto label_799620;
        case 0x799628u: goto label_799628;
        case 0x799634u: goto label_799634;
        case 0x79965cu: goto label_79965c;
        case 0x799678u: goto label_799678;
        case 0x799688u: goto label_799688;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799224: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799228: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x799228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x79922c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799230: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799234: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799238: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79923c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x799240: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799244: 0x240503b2  addiu       $a1, $zero, 0x3B2
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 946));
    // 0x799248: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79924c: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x799250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799254: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0x2613ea60  addiu       $s3, $s0, -0x15A0
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799260: 0x24040470  addiu       $a0, $zero, 0x470
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1136));
    // 0x799264: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799264u;
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->pc = 0x799268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799264u, 0x79926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79926Cu;
label_79926c:
    // 0x79926c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799274: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799278: 0xc1e6d6e  jal         func_79B5B8
    ctx->pc = 0x799278u;
    SET_GPR_U32(ctx, 31, 0x799280u);
    ctx->pc = 0x79927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799278u;
    // 0x79927c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B5B8u, 0x799278u, 0x799280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799280u;
label_799280:
    // 0x799280: 0xae11e010  sw          $s1, -0x1FF0($s0)
    ctx->pc = 0x799280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959120), GPR_U32(ctx, 17));
    // 0x799284: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799288: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799288u;
    SET_GPR_U32(ctx, 31, 0x799290u);
    ctx->pc = 0x79928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799288u;
    // 0x79928c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
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
    // 0x799294: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x799294u;
    SET_GPR_U32(ctx, 31, 0x79929Cu);
    ctx->pc = 0x799298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799294u;
    // 0x799298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799294u, 0x79929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7992a0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992a4: 0x24a597a0  addiu       $a1, $a1, -0x6860
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940576));
    // 0x7992a8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992A8u;
    SET_GPR_U32(ctx, 31, 0x7992B0u);
    ctx->pc = 0x7992ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A8u;
    // 0x7992ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992A8u, 0x7992B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B0u;
label_7992b0:
    // 0x7992b0: 0xc1e6dca  jal         func_79B728
    ctx->pc = 0x7992B0u;
    SET_GPR_U32(ctx, 31, 0x7992B8u);
    ctx->pc = 0x7992B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B0u;
    // 0x7992b4: 0x8e04e010  lw          $a0, -0x1FF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B728u, 0x7992B0u, 0x7992B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B8u;
label_7992b8:
    // 0x7992b8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x7992bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x7992c0: 0x8c828658  lw          $v0, -0x79A8($a0)
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7992c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7992cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x7992d0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7992D0u;
    {
        const bool branch_taken_0x7992d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D0u;
        // 0x7992d4: 0x28830000  slti        $v1, $a0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d0) {
            ctx->pc = 0x79930Cu;
            goto label_79930c;
        }
    }
    ctx->pc = 0x7992D8u;
    // 0x7992d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7992dc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7992DCu;
    SET_GPR_U32(ctx, 31, 0x7992E4u);
    ctx->pc = 0x7992E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992DCu;
    // 0x7992e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7992DCu, 0x7992E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E4u;
label_7992e4:
    // 0x7992e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992e8: 0xc1e6a28  jal         func_79A8A0
    ctx->pc = 0x7992E8u;
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->pc = 0x7992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E8u;
    // 0x7992ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8A0u, 0x7992E8u, 0x7992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F0u;
label_7992f0:
    // 0x7992f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f4: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x7992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F4u;
    // 0x7992f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799300: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799304: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x799304u;
    {
        const bool branch_taken_0x799304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x24a59850  addiu       $a1, $a1, -0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799304) {
            ctx->pc = 0x799344u;
            goto label_799344;
        }
    }
    ctx->pc = 0x79930Cu;
label_79930c:
    // 0x79930c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79930Cu;
    {
        const bool branch_taken_0x79930c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79930c) {
            ctx->pc = 0x799360u;
            goto label_799360;
        }
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799318: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799324: 0xc1e6a28  jal         func_79A8A0
    ctx->pc = 0x799324u;
    SET_GPR_U32(ctx, 31, 0x79932Cu);
    ctx->pc = 0x799328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799324u;
    // 0x799328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8A0u, 0x799324u, 0x79932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x799330u;
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->pc = 0x799334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x799330u, 0x799338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79933c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799340: 0x24a59988  addiu       $a1, $a1, -0x6678
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941064));
label_799344:
    // 0x799344: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799350: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x799358u;
    {
        const bool branch_taken_0x799358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799358) {
            ctx->pc = 0x79952Cu;
            goto label_79952c;
        }
    }
    ctx->pc = 0x799360u;
label_799360:
    // 0x799360: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x799360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x799364: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79936c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799374: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x799374u;
    {
        const bool branch_taken_0x799374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799374) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x79937Cu;
    // 0x79937c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799380: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79938c: 0xc1e6a28  jal         func_79A8A0
    ctx->pc = 0x79938Cu;
    SET_GPR_U32(ctx, 31, 0x799394u);
    ctx->pc = 0x799390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79938Cu;
    // 0x799390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8A0u, 0x79938Cu, 0x799394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799394u;
label_799394:
    // 0x799394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799398: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7993a4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993ac: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7993ACu;
    SET_GPR_U32(ctx, 31, 0x7993B4u);
    ctx->pc = 0x7993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ACu;
    // 0x7993b0: 0x24a59e30  addiu       $a1, $a1, -0x61D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993ACu, 0x7993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7993b8: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993c4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7993c8: 0x24a5af10  addiu       $a1, $a1, -0x50F0
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946576));
    // 0x7993cc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7993CCu;
    SET_GPR_U32(ctx, 31, 0x7993D4u);
    ctx->pc = 0x7993D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993CCu;
    // 0x7993d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993CCu, 0x7993D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x7993D4u;
    {
        const bool branch_taken_0x7993d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993d4) {
            ctx->pc = 0x79952Cu;
            goto label_79952c;
        }
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7993e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7993ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f0: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x7993f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7993f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7993fc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x7993FCu;
    {
        const bool branch_taken_0x7993fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993FCu;
        // 0x799400: 0xc41024  and         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993fc) {
            ctx->pc = 0x799498u;
            goto label_799498;
        }
    }
    ctx->pc = 0x799404u;
    // 0x799404: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799408: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799414: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799414u;
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799420: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x79942c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799430: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x799434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799438: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799448: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799454: 0xc1e6a28  jal         func_79A8A0
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8A0u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799460: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79946c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799470: 0x24a59cf0  addiu       $a1, $a1, -0x6310
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941936));
    // 0x799474: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799480: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0xc1e6bf6  jal         func_79AFD8
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AFD8u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x799490u;
    {
        const bool branch_taken_0x799490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799490) {
            ctx->pc = 0x79952Cu;
            goto label_79952c;
        }
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79949c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x79949Cu;
    {
        const bool branch_taken_0x79949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79949Cu;
        // 0x7994a0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79949c) {
            ctx->pc = 0x79952Cu;
            goto label_79952c;
        }
    }
    ctx->pc = 0x7994A4u;
    // 0x7994a4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994A4u;
    SET_GPR_U32(ctx, 31, 0x7994ACu);
    ctx->pc = 0x7994A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A4u;
    // 0x7994a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994A4u, 0x7994ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ACu;
label_7994ac:
    // 0x7994ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994b0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994B0u;
    SET_GPR_U32(ctx, 31, 0x7994B8u);
    ctx->pc = 0x7994B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B0u;
    // 0x7994b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7994bc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994BCu;
    SET_GPR_U32(ctx, 31, 0x7994C4u);
    ctx->pc = 0x7994C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994BCu;
    // 0x7994c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994BCu, 0x7994C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x7994c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994cc: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x7994d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d4: 0xc04cccc  jal         func_133330
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e4: 0xc04cccc  jal         func_133330
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7994ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f0: 0xc1e6a28  jal         func_79A8A0
    ctx->pc = 0x7994F0u;
    SET_GPR_U32(ctx, 31, 0x7994F8u);
    ctx->pc = 0x7994F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F0u;
    // 0x7994f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A8A0u, 0x7994F0u, 0x7994F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F8u;
label_7994f8:
    // 0x7994f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994fc: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799508: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79950c: 0x24a5a248  addiu       $a1, $a1, -0x5DB8
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943304));
    // 0x799510: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799510u;
    SET_GPR_U32(ctx, 31, 0x799518u);
    ctx->pc = 0x799514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799510u;
    // 0x799514: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799510u, 0x799518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799518u;
label_799518:
    // 0x799518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79951c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0xc1e6bf6  jal         func_79AFD8
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x79AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AFD8u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0xc1e6926  jal         func_79A498
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x799530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79952Cu;
    // 0x799530: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A498u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799538: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79953c: 0x8044dd20  lb          $a0, -0x22E0($v0)
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79DD20u));
    // 0x799540: 0x2446dd20  addiu       $a2, $v0, -0x22E0
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x799544: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79954c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79954Cu;
    {
        const bool branch_taken_0x79954c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79954c) {
            ctx->pc = 0x799580u;
            goto label_799580;
        }
    }
    ctx->pc = 0x799554u;
    // 0x799554: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799558:
    // 0x799558: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79955c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799560: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799564: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799568: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79956c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79956Cu;
    {
        const bool branch_taken_0x79956c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79956c) {
            ctx->pc = 0x799580u;
            goto label_799580;
        }
    }
    ctx->pc = 0x799574u;
    // 0x799574: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799578: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799578u;
    {
        const bool branch_taken_0x799578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799578) {
            ctx->pc = 0x79957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799578u;
            // 0x79957c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799558;
        }
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799580u;
    SET_GPR_U32(ctx, 31, 0x799588u);
    ctx->pc = 0x799584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799580u;
    // 0x799584: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799580u, 0x799588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799588u;
label_799588:
    // 0x799588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79958c: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x79958Cu;
    {
        const bool branch_taken_0x79958c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79958c) {
            ctx->pc = 0x799590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79958Cu;
            // 0x799590: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x799594u;
    // 0x799594: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x799598: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x79959c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79959cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7995a0: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x7995a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7995a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7995a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7995ac: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x7995ACu;
    SET_GPR_U32(ctx, 31, 0x7995B4u);
    ctx->pc = 0x7995B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ACu;
    // 0x7995b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x7995ACu, 0x7995B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x7995b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x7995bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7995c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7995c4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x7995C4u;
    {
        const bool branch_taken_0x7995c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c4) {
            ctx->pc = 0x799618u;
            goto label_799618;
        }
    }
    ctx->pc = 0x7995CCu;
    // 0x7995cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d0: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x7995D0u;
    SET_GPR_U32(ctx, 31, 0x7995D8u);
    ctx->pc = 0x7995D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D0u;
    // 0x7995d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x7995D0u, 0x7995D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x7995D8u;
    SET_GPR_U32(ctx, 31, 0x7995E0u);
    ctx->pc = 0x7995DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D8u;
    // 0x7995dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x7995D8u, 0x7995E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x7995e4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x7995e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7995ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7995f0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x7995F0u;
    {
        const bool branch_taken_0x7995f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F0u;
        // 0x7995f4: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f0) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x7995F8u;
    // 0x7995f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7995f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995fc: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x799600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995FCu;
    // 0x799600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799608: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799608u;
    SET_GPR_U32(ctx, 31, 0x799610u);
    ctx->pc = 0x79960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799608u;
    // 0x79960c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799608u, 0x799610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799610u;
    {
        const bool branch_taken_0x799610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799610) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799618u;
    SET_GPR_U32(ctx, 31, 0x799620u);
    ctx->pc = 0x79961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799618u;
    // 0x79961c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799618u, 0x799620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x799620u;
    SET_GPR_U32(ctx, 31, 0x799628u);
    ctx->pc = 0x799624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799620u;
    // 0x799624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x799620u, 0x799628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79962c: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79962Cu;
    SET_GPR_U32(ctx, 31, 0x799634u);
    ctx->pc = 0x799630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79962Cu;
    // 0x799630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79962Cu, 0x799634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799634u;
label_799634:
    // 0x799634: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_799638:
    // 0x799638: 0x2691ea60  addiu       $s1, $s4, -0x15A0
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x79963c: 0x2610b028  addiu       $s0, $s0, -0x4FD8
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946856));
    // 0x799640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799644: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799648: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79964c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799654: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799654u;
    SET_GPR_U32(ctx, 31, 0x79965Cu);
    ctx->pc = 0x799658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799654u;
    // 0x799658: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799654u, 0x79965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799660: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799664: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799668: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79966c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799670: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799670u;
    SET_GPR_U32(ctx, 31, 0x799678u);
    ctx->pc = 0x799674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799670u;
    // 0x799674: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799670u, 0x799678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799678u;
label_799678:
    // 0x799678: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79967c: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x799680: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x8e437a8c  lw          $v1, 0x7A8C($s2)
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x79968c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x799690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799694: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799698: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79969c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79969cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7996a0: 0xae437a8c  sw          $v1, 0x7A8C($s2)
    ctx->pc = 0x7996a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 3));
    // 0x7996a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7996a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7996a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7996a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7996ac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7996acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7996b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7996B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996BCu;
    // 0x7996bc: 0x0  nop
    ctx->pc = 0x7996bcu;
    // NOP
    ctx->pc = 0x7996c0u;
}
} // namespace gh_r301
