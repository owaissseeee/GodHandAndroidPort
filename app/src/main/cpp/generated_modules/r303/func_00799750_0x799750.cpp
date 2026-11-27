#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r303_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r303
{
// Function: func_00799750
// Address: 0x799750 - 0x799858
void func_00799750_0x799750(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799750_0x799750");
#endif

    if (__builtin_expect(ctx->pc != 0x799750u, 0)) {
        switch (ctx->pc) {
            case 0x799788u: goto label_799788;
            case 0x799794u: goto label_799794;
            case 0x79979cu: goto label_79979c;
            case 0x7997b4u: goto label_7997b4;
            case 0x7997c0u: goto label_7997c0;
            case 0x7997c8u: goto label_7997c8;
            case 0x7997e8u: goto label_7997e8;
            case 0x799804u: goto label_799804;
            case 0x799828u: goto label_799828;
            case 0x799834u: goto label_799834;
            default: break;
        }
    }



    // 0x799750: 0x27bdff80  addiu       $sp, $sp, -0x80
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799754: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799758: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79975c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799760: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799764: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79976c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79976cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799770: 0x3c11003c  lui         $s1, 0x3C
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799774: 0x3c130060  lui         $s3, 0x60
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x799778: 0x3c10007a  lui         $s0, 0x7A
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79977c: 0x27b20010  addiu       $s2, $sp, 0x10
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799780u;
    {
        const bool branch_taken_0x799780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799780u;
        // 0x799784: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799780) {
            ctx->pc = 0x799794u;
            goto label_799794;
        }
    }
label_799788:
    // 0x799788: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79978c: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x799794u);
    ctx->pc = 0x799790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79978Cu;
    // 0x799790: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79978Cu, 0x799794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799794:
    // 0x799794: 0xc0a572a  jal         func_295CA8
    SET_GPR_U32(ctx, 31, 0x79979Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799794u;
    // 0x799798: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_isDead_0x295ca8, 0x295CA8u, 0x79979Cu)) {
        return;
    }
label_79979c:
    // 0x79979c: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997a0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7997A0u;
    {
        const bool branch_taken_0x7997a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A0u;
        // 0x7997a4: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997a0) {
            ctx->pc = 0x799788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799788;
        }
    }
    // 0x7997a8: 0x2405001e  addiu       $a1, $zero, 0x1E
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7997ac: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x7997B4u);
    ctx->pc = 0x7997B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ACu;
    // 0x7997b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997ACu, 0x7997B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7997b4:
    // 0x7997b4: 0x2664ee00  addiu       $a0, $s3, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
    // 0x7997b8: 0xc0b42ae  jal         func_2D0AB8
    SET_GPR_U32(ctx, 31, 0x7997C0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B8u;
    // 0x7997bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SetBgmState_0x2d0ab8, 0x2D0AB8u, 0x7997C0u)) {
        return;
    }
label_7997c0:
    // 0x7997c0: 0xc0a56ae  jal         func_295AB8
    SET_GPR_U32(ctx, 31, 0x7997C8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C0u;
    // 0x7997c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_getPos_0x295ab8, 0x295AB8u, 0x7997C8u)) {
        return;
    }
label_7997c8:
    // 0x7997c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7997c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7997cc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7997ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997d0: 0x8e049b00  lw          $a0, -0x6500($s0)
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
    // 0x7997d4: 0x24070008  addiu       $a3, $zero, 0x8
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7997d8: 0x24080002  addiu       $t0, $zero, 0x2
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7997dc: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7997e0: 0xc0b0346  jal         func_2C0D18
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtUnit_AtInit_0x2c0d18, 0x2C0D18u, 0x7997E8u)) {
        return;
    }
label_7997e8:
    // 0x7997e8: 0x3c014000  lui         $at, 0x4000
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x7997ec: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7997f0: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f4: 0x8e049b00  lw          $a0, -0x6500($s0)
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
    // 0x7997f8: 0x24060001  addiu       $a2, $zero, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997fc: 0xc0b036a  jal         func_2C0DA8
    SET_GPR_U32(ctx, 31, 0x799804u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997FCu;
    // 0x799800: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtUnit_AreaSet_0x2c0da8, 0x2C0DA8u, 0x799804u)) {
        return;
    }
label_799804:
    // 0x799804: 0x8e039b00  lw          $v1, -0x6500($s0)
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
    // 0x799808: 0x24021003  addiu       $v0, $zero, 0x1003
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x79980c: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799810: 0x24060001  addiu       $a2, $zero, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799814: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x799814u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x799818: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79981c: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799820: 0xc0b0be4  jal         func_2C2F90
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x8e059b00  lw          $a1, -0x6500($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_addUnitData_0x2c2f90, 0x2C2F90u, 0x799828u)) {
        return;
    }
label_799828:
    // 0x799828: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79982c: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x799834u);
    ctx->pc = 0x799830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79982Cu;
    // 0x799830: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x799834u)) {
        return;
    }
label_799834:
    // 0x799834: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799838: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79983c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79983cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799840: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799844: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79984c: 0x3e00008  jr          $ra
    ctx->pc = 0x79984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x799854: 0x0  nop
    // NOP
    ctx->pc = 0x799858u;
}
} // namespace gh_r303
