#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_00799878
// Address: 0x799878 - 0x799cc0
void func_00799878_0x799878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799878_0x799878");
#endif

    switch (ctx->pc) {
        case 0x7998d0u: goto label_7998d0;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998f4u: goto label_7998f4;
        case 0x799904u: goto label_799904;
        case 0x799948u: goto label_799948;
        case 0x799950u: goto label_799950;
        case 0x799960u: goto label_799960;
        case 0x799968u: goto label_799968;
        case 0x799988u: goto label_799988;
        case 0x799998u: goto label_799998;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999acu: goto label_7999ac;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999e8u: goto label_7999e8;
        case 0x799a10u: goto label_799a10;
        case 0x799a20u: goto label_799a20;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a50u: goto label_799a50;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a80u: goto label_799a80;
        case 0x799a88u: goto label_799a88;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa8u: goto label_799aa8;
        case 0x799accu: goto label_799acc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799aecu: goto label_799aec;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b14u: goto label_799b14;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b28u: goto label_799b28;
        case 0x799b58u: goto label_799b58;
        case 0x799b60u: goto label_799b60;
        case 0x799b68u: goto label_799b68;
        case 0x799b78u: goto label_799b78;
        case 0x799b88u: goto label_799b88;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bdcu: goto label_799bdc;
        case 0x799becu: goto label_799bec;
        case 0x799bf8u: goto label_799bf8;
        case 0x799c00u: goto label_799c00;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c24u: goto label_799c24;
        case 0x799c34u: goto label_799c34;
        case 0x799c40u: goto label_799c40;
        case 0x799c48u: goto label_799c48;
        case 0x799c50u: goto label_799c50;
        case 0x799c80u: goto label_799c80;
        case 0x799c8cu: goto label_799c8c;
        default: break;
    }

    ctx->pc = 0x799878u;

    // 0x799878: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x79987c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x79987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x799880: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799884: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x799884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x799888: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79988c: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x79988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x799890: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799894: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x799894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x799898: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x799898u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x79989c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x79989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x7998a0: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x7998a4: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x7998a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x7998a8: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x7998ac: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x7998acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x7998b0: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7998b4: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x7998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x7998b8: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x7998bc: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x7998bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x7998c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x7998c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x7998c4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x7998c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x7998c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7998C8u;
    {
        const bool branch_taken_0x7998c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C8u;
        // 0x7998cc: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c8) {
            ctx->pc = 0x7998E0u;
            goto label_7998e0;
        }
    }
    ctx->pc = 0x7998D0u;
label_7998d0:
    // 0x7998d0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7998d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998d8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7998D8u;
    SET_GPR_U32(ctx, 31, 0x7998E0u);
    ctx->pc = 0x7998DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998D8u;
    // 0x7998dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7998D8u, 0x7998E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E0u;
label_7998e0:
    // 0x7998e0: 0x26b0ea60  addiu       $s0, $s5, -0x15A0
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
    // 0x7998e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998ec: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7998ECu;
    SET_GPR_U32(ctx, 31, 0x7998F4u);
    ctx->pc = 0x7998F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ECu;
    // 0x7998f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7998ECu, 0x7998F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F4u;
label_7998f4:
    // 0x7998f4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7998F4u;
    {
        const bool branch_taken_0x7998f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f4) {
            ctx->pc = 0x7998D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998d0;
        }
    }
    ctx->pc = 0x7998FCu;
    // 0x7998fc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7998FCu;
    SET_GPR_U32(ctx, 31, 0x799904u);
    ctx->pc = 0x799900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998FCu;
    // 0x799900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7998FCu, 0x799904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799904u;
label_799904:
    // 0x799904: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79990c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799910: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799914: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799918: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79991c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799920: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799924: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x799924u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x799928: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799928u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79992c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79992cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799930: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x799930u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x799934: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x799934u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x799938: 0xa3a60028  sb          $a2, 0x28($sp)
    ctx->pc = 0x799938u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x79993c: 0xa3a70030  sb          $a3, 0x30($sp)
    ctx->pc = 0x79993cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x799940: 0xa3a80038  sb          $t0, 0x38($sp)
    ctx->pc = 0x799940u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 8));
    // 0x799944: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799944u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_799948:
    // 0x799948: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799948u;
    SET_GPR_U32(ctx, 31, 0x799950u);
    ctx->pc = 0x79994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799948u;
    // 0x79994c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799948u, 0x799950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799950u;
label_799950:
    // 0x799950: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x799950u;
    {
        const bool branch_taken_0x799950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799950) {
            ctx->pc = 0x799954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799950u;
            // 0x799954: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79998Cu;
            goto label_79998c;
        }
    }
    ctx->pc = 0x799958u;
    // 0x799958: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799958u;
    SET_GPR_U32(ctx, 31, 0x799960u);
    ctx->pc = 0x79995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799958u;
    // 0x79995c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799958u, 0x799960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799960u;
label_799960:
    // 0x799960: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799960u;
    SET_GPR_U32(ctx, 31, 0x799968u);
    ctx->pc = 0x799964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799960u;
    // 0x799964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799960u, 0x799968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799968u;
label_799968:
    // 0x799968: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79996c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799970: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79997c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799980: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799980u;
    SET_GPR_U32(ctx, 31, 0x799988u);
    ctx->pc = 0x799984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799980u;
    // 0x799984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799980u, 0x799988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799988u;
label_799988:
    // 0x799988: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79998c:
    // 0x79998c: 0x621ffee  bgez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79998Cu;
    {
        const bool branch_taken_0x79998c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79998c) {
            ctx->pc = 0x799948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799948;
        }
    }
    ctx->pc = 0x799994u;
    // 0x799994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799998:
    // 0x799998: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79999c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7999a0:
    // 0x7999a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999a4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7999A4u;
    SET_GPR_U32(ctx, 31, 0x7999ACu);
    ctx->pc = 0x7999A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A4u;
    // 0x7999a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7999A4u, 0x7999ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ACu;
label_7999ac:
    // 0x7999ac: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x7999b0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x7999b4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7999B4u;
    {
        const bool branch_taken_0x7999b4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x7999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B4u;
        // 0x7999b8: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999b4) {
            ctx->pc = 0x7999A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999a0;
        }
    }
    ctx->pc = 0x7999BCu;
    // 0x7999bc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x7999bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7999c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7999C0u;
    {
        const bool branch_taken_0x7999c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C0u;
        // 0x7999c4: 0x26a4ea60  addiu       $a0, $s5, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c0) {
            ctx->pc = 0x7999F0u;
            goto label_7999f0;
        }
    }
    ctx->pc = 0x7999C8u;
    // 0x7999c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7999cc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7999CCu;
    SET_GPR_U32(ctx, 31, 0x7999D4u);
    ctx->pc = 0x7999D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999CCu;
    // 0x7999d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7999CCu, 0x7999D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D4u;
label_7999d4:
    // 0x7999d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7999D4u;
    {
        const bool branch_taken_0x7999d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D4u;
        // 0x7999d8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d4) {
            ctx->pc = 0x7999F0u;
            goto label_7999f0;
        }
    }
    ctx->pc = 0x7999DCu;
    // 0x7999dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999e0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x7999E8u;
    {
        const bool branch_taken_0x7999e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E8u;
        // 0x7999ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e8) {
            ctx->pc = 0x799998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799998;
        }
    }
    ctx->pc = 0x7999F0u;
label_7999f0:
    // 0x7999f0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x7999f4: 0x8c628658  lw          $v0, -0x79A8($v1)
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7999f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7999fc: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7999FCu;
    {
        const bool branch_taken_0x7999fc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x7999fc) {
            ctx->pc = 0x799A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999FCu;
            // 0x799a00: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A14u;
            goto label_799a14;
        }
    }
    ctx->pc = 0x799A04u;
    // 0x799a04: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799a08: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799A08u;
    SET_GPR_U32(ctx, 31, 0x799A10u);
    ctx->pc = 0x799A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A08u;
    // 0x799a0c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A08u, 0x799A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799a14:
    // 0x799a14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a18: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x8fb00094  lw          $s0, 0x94($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799a24: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799A24u;
    SET_GPR_U32(ctx, 31, 0x799A2Cu);
    ctx->pc = 0x799A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A24u;
    // 0x799a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799a30: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a3c: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x799a40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a44: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x799a48: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x799A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A48u;
    // 0x799a4c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x8e83b900  lw          $v1, -0x4700($s4)
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
    // 0x799a54: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x799A54u;
    SET_GPR_U32(ctx, 31, 0x799A5Cu);
    ctx->pc = 0x799A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A54u;
    // 0x799a58: 0x8c640148  lw          $a0, 0x148($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x799A54u, 0x799A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A5Cu;
label_799a5c:
    // 0x799a5c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x799a60: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799a64: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799a68: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x799a6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799a70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799a74: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a7c: 0x0  nop
    ctx->pc = 0x799a7cu;
    // NOP
label_799a80:
    // 0x799a80: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799A80u;
    SET_GPR_U32(ctx, 31, 0x799A88u);
    ctx->pc = 0x799A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A80u;
    // 0x799a84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799A80u, 0x799A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799a8c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x799a8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799a90: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799a94: 0x24446ab0  addiu       $a0, $v0, 0x6AB0
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    // 0x799a98: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799A98u;
    SET_GPR_U32(ctx, 31, 0x799AA0u);
    ctx->pc = 0x799A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A98u;
    // 0x799a9c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A98u, 0x799AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799AA0u;
    SET_GPR_U32(ctx, 31, 0x799AA8u);
    ctx->pc = 0x799AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA0u;
    // 0x799aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799AA0u, 0x799AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799aac: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799ab0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799abc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799AC4u;
    SET_GPR_U32(ctx, 31, 0x799ACCu);
    ctx->pc = 0x799AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC4u;
    // 0x799ac8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799AC4u, 0x799ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ACCu;
label_799acc:
    // 0x799acc: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x799accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799ad0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x799AD0u;
    {
        const bool branch_taken_0x799ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD0u;
        // 0x799ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ad0) {
            ctx->pc = 0x799A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a80;
        }
    }
    ctx->pc = 0x799AD8u;
    // 0x799ad8: 0x8fb00090  lw          $s0, 0x90($sp)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ae0:
    // 0x799ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799AE4u;
    SET_GPR_U32(ctx, 31, 0x799AECu);
    ctx->pc = 0x799AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE4u;
    // 0x799ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799AE4u, 0x799AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AECu;
label_799aec:
    // 0x799aec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799af0: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x799af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x799af4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799AF4u;
    {
        const bool branch_taken_0x799af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF4u;
        // 0x799af8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af4) {
            ctx->pc = 0x799AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ae0;
        }
    }
    ctx->pc = 0x799AFCu;
    // 0x799afc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799b00: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799b04: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799B04u;
    SET_GPR_U32(ctx, 31, 0x799B0Cu);
    ctx->pc = 0x799B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B04u;
    // 0x799b08: 0x2465b7b0  addiu       $a1, $v1, -0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799B04u, 0x799B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B0Cu;
label_799b0c:
    // 0x799b0c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799B0Cu;
    SET_GPR_U32(ctx, 31, 0x799B14u);
    ctx->pc = 0x799B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B0Cu;
    // 0x799b10: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799B0Cu, 0x799B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B14u;
label_799b14:
    // 0x799b14: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799B14u;
    SET_GPR_U32(ctx, 31, 0x799B1Cu);
    ctx->pc = 0x799B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B14u;
    // 0x799b18: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799B14u, 0x799B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B1Cu;
label_799b1c:
    // 0x799b1c: 0x8e82b900  lw          $v0, -0x4700($s4)
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
    // 0x799b20: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x799B20u;
    SET_GPR_U32(ctx, 31, 0x799B28u);
    ctx->pc = 0x799B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B20u;
    // 0x799b24: 0x8c440148  lw          $a0, 0x148($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x799B20u, 0x799B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B28u;
label_799b28:
    // 0x799b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799b34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799b38: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799b3c: 0xa3a20048  sb          $v0, 0x48($sp)
    ctx->pc = 0x799b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x799b40: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x799b40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x799b44: 0xa3a40058  sb          $a0, 0x58($sp)
    ctx->pc = 0x799b44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 4));
    // 0x799b48: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x799b48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x799b4c: 0xa3a60068  sb          $a2, 0x68($sp)
    ctx->pc = 0x799b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 6));
    // 0x799b50: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x799b50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x799b54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799b58:
    // 0x799b58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b5c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x799b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_799b60:
    // 0x799b60: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799B60u;
    SET_GPR_U32(ctx, 31, 0x799B68u);
    ctx->pc = 0x799B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B60u;
    // 0x799b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B60u, 0x799B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B68u;
label_799b68:
    // 0x799b68: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x799B68u;
    {
        const bool branch_taken_0x799b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b68) {
            ctx->pc = 0x799B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B68u;
            // 0x799b6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B94u;
            goto label_799b94;
        }
    }
    ctx->pc = 0x799B70u;
    // 0x799b70: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799B70u;
    SET_GPR_U32(ctx, 31, 0x799B78u);
    ctx->pc = 0x799B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B70u;
    // 0x799b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799B70u, 0x799B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b7c: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
    // 0x799b80: 0xc0b0bc2  jal         func_2C2F08
    ctx->pc = 0x799B80u;
    SET_GPR_U32(ctx, 31, 0x799B88u);
    ctx->pc = 0x799B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B80u;
    // 0x799b84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F08u, 0x799B80u, 0x799B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B88u;
    {
        const bool branch_taken_0x799b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b88) {
            ctx->pc = 0x799B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B88u;
            // 0x799b8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B98u;
            goto label_799b98;
        }
    }
    ctx->pc = 0x799B90u;
    // 0x799b90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_799b94:
    // 0x799b94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799b98:
    // 0x799b98: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x799b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x799b9c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799B9Cu;
    {
        const bool branch_taken_0x799b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B9Cu;
        // 0x799ba0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b9c) {
            ctx->pc = 0x799B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b60;
        }
    }
    ctx->pc = 0x799BA4u;
    // 0x799ba4: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x799ba8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA8u;
        // 0x799bac: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799BC4u;
            goto label_799bc4;
        }
    }
    ctx->pc = 0x799BB0u;
    // 0x799bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bb4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799BB4u;
    SET_GPR_U32(ctx, 31, 0x799BBCu);
    ctx->pc = 0x799BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BB4u;
    // 0x799bb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799BB4u, 0x799BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BBCu;
label_799bbc:
    // 0x799bbc: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x799BBCu;
    {
        const bool branch_taken_0x799bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bbc) {
            ctx->pc = 0x799B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b58;
        }
    }
    ctx->pc = 0x799BC4u;
label_799bc4:
    // 0x799bc4: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799bc8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799bcc: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x799bccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x799bd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bd4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799BD4u;
    SET_GPR_U32(ctx, 31, 0x799BDCu);
    ctx->pc = 0x799BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD4u;
    // 0x799bd8: 0xa3b00070  sb          $s0, 0x70($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799BD4u, 0x799BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BDCu;
label_799bdc:
    // 0x799bdc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799BDCu;
    {
        const bool branch_taken_0x799bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bdc) {
            ctx->pc = 0x799C1Cu;
            goto label_799c1c;
        }
    }
    ctx->pc = 0x799BE4u;
    // 0x799be4: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799BE4u;
    SET_GPR_U32(ctx, 31, 0x799BECu);
    ctx->pc = 0x799BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE4u;
    // 0x799be8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799BE4u, 0x799BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BECu;
label_799bec:
    // 0x799bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bf0: 0xc0a5874  jal         func_2961D0
    ctx->pc = 0x799BF0u;
    SET_GPR_U32(ctx, 31, 0x799BF8u);
    ctx->pc = 0x799BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF0u;
    // 0x799bf4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x799BF0u, 0x799BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF8u;
label_799bf8:
    // 0x799bf8: 0xc0a5860  jal         func_296180
    ctx->pc = 0x799BF8u;
    SET_GPR_U32(ctx, 31, 0x799C00u);
    ctx->pc = 0x799BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF8u;
    // 0x799bfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x799BF8u, 0x799C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0x8e82b900  lw          $v0, -0x4700($s4)
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
    // 0x799c04: 0x24031004  addiu       $v1, $zero, 0x1004
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    // 0x799c08: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x799c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x799c0c: 0x8e84b900  lw          $a0, -0x4700($s4)
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
    // 0x799c10: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x799c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x799c14: 0xc1e6cf0  jal         func_79B3C0
    ctx->pc = 0x799C14u;
    SET_GPR_U32(ctx, 31, 0x799C1Cu);
    ctx->pc = 0x799C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C14u;
    // 0x799c18: 0x8e84b900  lw          $a0, -0x4700($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B3C0u, 0x799C14u, 0x799C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799C1Cu;
    SET_GPR_U32(ctx, 31, 0x799C24u);
    ctx->pc = 0x799C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C1Cu;
    // 0x799c20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799C1Cu, 0x799C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C24u;
label_799c24:
    // 0x799c24: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x799C24u;
    {
        const bool branch_taken_0x799c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C24u;
        // 0x799c28: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c24) {
            ctx->pc = 0x799C84u;
            goto label_799c84;
        }
    }
    ctx->pc = 0x799C2Cu;
    // 0x799c2c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799C2Cu;
    SET_GPR_U32(ctx, 31, 0x799C34u);
    ctx->pc = 0x799C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C2Cu;
    // 0x799c30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799C2Cu, 0x799C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C34u;
label_799c34:
    // 0x799c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c38: 0xc0a5874  jal         func_2961D0
    ctx->pc = 0x799C38u;
    SET_GPR_U32(ctx, 31, 0x799C40u);
    ctx->pc = 0x799C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C38u;
    // 0x799c3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x799C38u, 0x799C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0xc0a5860  jal         func_296180
    ctx->pc = 0x799C40u;
    SET_GPR_U32(ctx, 31, 0x799C48u);
    ctx->pc = 0x799C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C40u;
    // 0x799c44: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x799C40u, 0x799C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C48u;
label_799c48:
    // 0x799c48: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799C48u;
    SET_GPR_U32(ctx, 31, 0x799C50u);
    ctx->pc = 0x799C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C48u;
    // 0x799c4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799C48u, 0x799C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C50u;
label_799c50:
    // 0x799c50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C50u;
    {
        const bool branch_taken_0x799c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C50u;
        // 0x799c54: 0x8e83b900  lw          $v1, -0x4700($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c50) {
            ctx->pc = 0x799C60u;
            goto label_799c60;
        }
    }
    ctx->pc = 0x799C58u;
    // 0x799c58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799C58u;
    {
        const bool branch_taken_0x799c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C58u;
        // 0x799c5c: 0x24021005  addiu       $v0, $zero, 0x1005 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c58) {
            ctx->pc = 0x799C64u;
            goto label_799c64;
        }
    }
    ctx->pc = 0x799C60u;
label_799c60:
    // 0x799c60: 0x24021004  addiu       $v0, $zero, 0x1004
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
label_799c64:
    // 0x799c64: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x799c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x799c68: 0x8e82b900  lw          $v0, -0x4700($s4)
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
    // 0x799c6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799c70: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x799c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
    // 0x799c74: 0x8e84b900  lw          $a0, -0x4700($s4)
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949120)));
    // 0x799c78: 0xc1e6cf0  jal         func_79B3C0
    ctx->pc = 0x799C78u;
    SET_GPR_U32(ctx, 31, 0x799C80u);
    ctx->pc = 0x799C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C78u;
    // 0x799c7c: 0x248400a4  addiu       $a0, $a0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B3C0u, 0x799C78u, 0x799C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C80u;
label_799c80:
    // 0x799c80: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799c84:
    // 0x799c84: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C84u;
    SET_GPR_U32(ctx, 31, 0x799C8Cu);
    ctx->pc = 0x799C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C84u;
    // 0x799c88: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C84u, 0x799C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C8Cu;
label_799c8c:
    // 0x799c8c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x799c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x799c90: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x799c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799c94: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x799c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799c98: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x799c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799c9c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x799c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799ca0: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x799ca0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799ca4: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x799ca4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799ca8: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x799ca8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799cac: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x799cacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799cb0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x799cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x799CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB4u;
        // 0x799cb8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CBCu;
    // 0x799cbc: 0x0  nop
    ctx->pc = 0x799cbcu;
    // NOP
    ctx->pc = 0x799cc0u;
}
} // namespace gh_r600
