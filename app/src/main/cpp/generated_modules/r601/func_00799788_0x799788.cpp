#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_00799788
// Address: 0x799788 - 0x799f00
void func_00799788_0x799788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799788_0x799788");
#endif

    switch (ctx->pc) {
        case 0x7997f8u: goto label_7997f8;
        case 0x799804u: goto label_799804;
        case 0x799838u: goto label_799838;
        case 0x799840u: goto label_799840;
        case 0x799850u: goto label_799850;
        case 0x799870u: goto label_799870;
        case 0x799888u: goto label_799888;
        case 0x799890u: goto label_799890;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998fcu: goto label_7998fc;
        case 0x799920u: goto label_799920;
        case 0x799944u: goto label_799944;
        case 0x79995cu: goto label_79995c;
        case 0x799968u: goto label_799968;
        case 0x799970u: goto label_799970;
        case 0x799984u: goto label_799984;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999ecu: goto label_7999ec;
        case 0x799a18u: goto label_799a18;
        case 0x799a20u: goto label_799a20;
        case 0x799a34u: goto label_799a34;
        case 0x799a64u: goto label_799a64;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a84u: goto label_799a84;
        case 0x799a94u: goto label_799a94;
        case 0x799ab4u: goto label_799ab4;
        case 0x799abcu: goto label_799abc;
        case 0x799accu: goto label_799acc;
        case 0x799aecu: goto label_799aec;
        case 0x799af8u: goto label_799af8;
        case 0x799b00u: goto label_799b00;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b28u: goto label_799b28;
        case 0x799b30u: goto label_799b30;
        case 0x799b38u: goto label_799b38;
        case 0x799b40u: goto label_799b40;
        case 0x799b50u: goto label_799b50;
        case 0x799b60u: goto label_799b60;
        case 0x799b74u: goto label_799b74;
        case 0x799b84u: goto label_799b84;
        case 0x799b98u: goto label_799b98;
        case 0x799bf4u: goto label_799bf4;
        case 0x799c04u: goto label_799c04;
        case 0x799c10u: goto label_799c10;
        case 0x799c18u: goto label_799c18;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c50u: goto label_799c50;
        case 0x799c68u: goto label_799c68;
        case 0x799c70u: goto label_799c70;
        case 0x799c78u: goto label_799c78;
        case 0x799c80u: goto label_799c80;
        case 0x799c88u: goto label_799c88;
        case 0x799c94u: goto label_799c94;
        case 0x799cc0u: goto label_799cc0;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d28u: goto label_799d28;
        case 0x799d34u: goto label_799d34;
        case 0x799d60u: goto label_799d60;
        case 0x799d70u: goto label_799d70;
        case 0x799d7cu: goto label_799d7c;
        case 0x799da0u: goto label_799da0;
        case 0x799db4u: goto label_799db4;
        case 0x799dbcu: goto label_799dbc;
        case 0x799dc4u: goto label_799dc4;
        case 0x799df8u: goto label_799df8;
        case 0x799e00u: goto label_799e00;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e38u: goto label_799e38;
        case 0x799e58u: goto label_799e58;
        case 0x799e60u: goto label_799e60;
        case 0x799e68u: goto label_799e68;
        case 0x799e8cu: goto label_799e8c;
        case 0x799ebcu: goto label_799ebc;
        default: break;
    }

    ctx->pc = 0x799788u;

    // 0x799788: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79978c: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x799790: 0x8c437a8c  lw          $v1, 0x7A8C($v0)
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799794: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x799794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x799798: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79979c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x79979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x7997a0: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x7997a4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x7997a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x7997a8: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7997ac: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x7997acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x7997b0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7997b4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x7997b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x7997b8: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7997bc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x7997bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x7997c0: 0x27b70038  addiu       $s7, $sp, 0x38
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x7997c4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x7997c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x7997c8: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x7997cc: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x7997ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x7997d0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x7997d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x7997d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x7997d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x7997d8: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x7997d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x7997dc: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x7997dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x7997e0: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x7997e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x7997e4: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x7997e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x7997e8: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x7997E8u;
    {
        const bool branch_taken_0x7997e8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e8) {
            ctx->pc = 0x799818u;
            goto label_799818;
        }
    }
    ctx->pc = 0x7997F0u;
    // 0x7997f0: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x7997f4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_7997f8:
    // 0x7997f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997fc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7997FCu;
    SET_GPR_U32(ctx, 31, 0x799804u);
    ctx->pc = 0x799800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997FCu;
    // 0x799800: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997FCu, 0x799804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799804u;
label_799804:
    // 0x799804: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799808: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79980c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x79980cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x799810: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799810) {
            ctx->pc = 0x7997F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997f8;
        }
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79981c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799820: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799824: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799824u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799828: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x799828u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x79982c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799830: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x799830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x799834: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799838:
    // 0x799838: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799838u;
    SET_GPR_U32(ctx, 31, 0x799840u);
    ctx->pc = 0x79983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799838u;
    // 0x79983c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799838u, 0x799840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799840u;
label_799840:
    // 0x799840: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799840) {
            ctx->pc = 0x799844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799840u;
            // 0x799844: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799874u;
            goto label_799874;
        }
    }
    ctx->pc = 0x799848u;
    // 0x799848: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799854: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79985c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799868: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799874:
    // 0x799874: 0x621fff0  bgez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799874u;
    {
        const bool branch_taken_0x799874 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x799878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799874u;
        // 0x799878: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799874) {
            ctx->pc = 0x799838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799838;
        }
    }
    ctx->pc = 0x79987Cu;
    // 0x79987c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799880: 0xc1e6bf8  jal         func_79AFE0
    ctx->pc = 0x799880u;
    SET_GPR_U32(ctx, 31, 0x799888u);
    ctx->pc = 0x799884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799880u;
    // 0x799884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AFE0u, 0x799880u, 0x799888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799890u;
    {
        const bool branch_taken_0x799890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799890u;
        // 0x799894: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799890) {
            ctx->pc = 0x7998C4u;
            goto label_7998c4;
        }
    }
    ctx->pc = 0x799898u;
    // 0x799898: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799898u;
    SET_GPR_U32(ctx, 31, 0x7998A0u);
    ctx->pc = 0x79989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799898u;
    // 0x79989c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799898u, 0x7998A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x7998a4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7998a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x7998a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7998a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7998ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7998acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7998b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7998b8: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7998B8u;
    SET_GPR_U32(ctx, 31, 0x7998C0u);
    ctx->pc = 0x7998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B8u;
    // 0x7998bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7998B8u, 0x7998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C0u;
label_7998c0:
    // 0x7998c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7998c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7998c4:
    // 0x7998c4: 0xc1e6bf8  jal         func_79AFE0
    ctx->pc = 0x7998C4u;
    SET_GPR_U32(ctx, 31, 0x7998CCu);
    ctx->pc = 0x7998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C4u;
    // 0x7998c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AFE0u, 0x7998C4u, 0x7998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7998d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7998d4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7998d8: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7998dc: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x7998dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x7998e0: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
    // 0x7998e4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x7998e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x7998e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998ec: 0xa3a30028  sb          $v1, 0x28($sp)
    ctx->pc = 0x7998ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x7998f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998f4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7998F4u;
    SET_GPR_U32(ctx, 31, 0x7998FCu);
    ctx->pc = 0x7998F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F4u;
    // 0x7998f8: 0xa3a70038  sb          $a3, 0x38($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7998F4u, 0x7998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x7998FCu;
    {
        const bool branch_taken_0x7998fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998fc) {
            ctx->pc = 0x799900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998FCu;
            // 0x799900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999D8u;
            goto label_7999d8;
        }
    }
    ctx->pc = 0x799904u;
    // 0x799904: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799908: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79990c: 0x3c01c28d  lui         $at, 0xC28D
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49805 << 16));
    // 0x799910: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x799914: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x799918: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799918u;
    SET_GPR_U32(ctx, 31, 0x799920u);
    ctx->pc = 0x79991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799918u;
    // 0x79991c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799918u, 0x799920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799920u;
label_799920:
    // 0x799920: 0x3c01c312  lui         $at, 0xC312
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49938 << 16));
    // 0x799924: 0x34217852  ori         $at, $at, 0x7852
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30802);
    // 0x799928: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79992c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799930: 0x3c0141e9  lui         $at, 0x41E9
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16873 << 16));
    // 0x799934: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799938: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79993c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79993Cu;
    SET_GPR_U32(ctx, 31, 0x799944u);
    ctx->pc = 0x799940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79993Cu;
    // 0x799940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79993Cu, 0x799944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799944u;
label_799944:
    // 0x799944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799948: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79994c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799950: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799954: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799954u;
    SET_GPR_U32(ctx, 31, 0x79995Cu);
    ctx->pc = 0x799958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799954u;
    // 0x799958: 0x24a5ba38  addiu       $a1, $a1, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799954u, 0x79995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799960: 0xc1e6b14  jal         func_79AC50
    ctx->pc = 0x799960u;
    SET_GPR_U32(ctx, 31, 0x799968u);
    ctx->pc = 0x799964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799960u;
    // 0x799964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC50u, 0x799960u, 0x799968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799968u;
label_799968:
    // 0x799968: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799968u;
    SET_GPR_U32(ctx, 31, 0x799970u);
    ctx->pc = 0x79996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799968u;
    // 0x79996c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799968u, 0x799970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x799970u;
    {
        const bool branch_taken_0x799970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799970) {
            ctx->pc = 0x799974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799970u;
            // 0x799974: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999B8u;
            goto label_7999b8;
        }
    }
    ctx->pc = 0x799978u;
    // 0x799978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79997c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79997Cu;
    SET_GPR_U32(ctx, 31, 0x799984u);
    ctx->pc = 0x799980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79997Cu;
    // 0x799980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79997Cu, 0x799984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799988: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79998c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79998cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799994: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x799994u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79999c: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x79999cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7999a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7999a4: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x7999a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7999a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999ac: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7999ACu;
    SET_GPR_U32(ctx, 31, 0x7999B4u);
    ctx->pc = 0x7999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ACu;
    // 0x7999b0: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_7999b8:
    // 0x7999b8: 0x641ffeb  bgez        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x7999B8u;
    {
        const bool branch_taken_0x7999b8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999b8) {
            ctx->pc = 0x799968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799968;
        }
    }
    ctx->pc = 0x7999C0u;
    // 0x7999c0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x7999C0u;
    SET_GPR_U32(ctx, 31, 0x7999C8u);
    ctx->pc = 0x7999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C0u;
    // 0x7999c4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7999C0u, 0x7999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C8u;
label_7999c8:
    // 0x7999c8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x799A74u;
            goto label_799a74;
        }
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0x3c01c28d  lui         $at, 0xC28D
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49805 << 16));
    // 0x7999dc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x7999dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x7999e0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x7999e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x7999e4: 0xc1e6b14  jal         func_79AC50
    ctx->pc = 0x7999E4u;
    SET_GPR_U32(ctx, 31, 0x7999ECu);
    ctx->pc = 0x7999E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E4u;
    // 0x7999e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC50u, 0x7999E4u, 0x7999ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ECu;
label_7999ec:
    // 0x7999ec: 0x3c01c312  lui         $at, 0xC312
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49938 << 16));
    // 0x7999f0: 0x34217852  ori         $at, $at, 0x7852
    ctx->pc = 0x7999f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30802);
    // 0x7999f4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x7999f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x7999f8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x7999f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999fc: 0x3c0141e9  lui         $at, 0x41E9
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16873 << 16));
    // 0x799a00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799a04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799a08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799a10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799a14: 0x0  nop
    ctx->pc = 0x799a14u;
    // NOP
label_799a18:
    // 0x799a18: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x799A20u;
    {
        const bool branch_taken_0x799a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a20) {
            ctx->pc = 0x799A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A20u;
            // 0x799a24: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A68u;
            goto label_799a68;
        }
    }
    ctx->pc = 0x799A28u;
    // 0x799a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a2c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799A2Cu;
    SET_GPR_U32(ctx, 31, 0x799A34u);
    ctx->pc = 0x799A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A2Cu;
    // 0x799a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799A2Cu, 0x799A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799a38: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799a3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a44: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x799a44u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799a48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a4c: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x799a4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799a50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799a54: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x799a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a5c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799A5Cu;
    SET_GPR_U32(ctx, 31, 0x799A64u);
    ctx->pc = 0x799A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A5Cu;
    // 0x799a60: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A5Cu, 0x799A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A64u;
label_799a64:
    // 0x799a64: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_799a68:
    // 0x799a68: 0x641ffeb  bgez        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x799A68u;
    {
        const bool branch_taken_0x799a68 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x799A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A68u;
        // 0x799a6c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a68) {
            ctx->pc = 0x799A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a18;
        }
    }
    ctx->pc = 0x799A70u;
    // 0x799a70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799a74:
    // 0x799a74: 0xc1e6bf8  jal         func_79AFE0
    ctx->pc = 0x799A74u;
    SET_GPR_U32(ctx, 31, 0x799A7Cu);
    ctx->pc = 0x799A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A74u;
    // 0x799a78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AFE0u, 0x799A74u, 0x799A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A7Cu;
label_799a7c:
    // 0x799a7c: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799A7Cu;
    SET_GPR_U32(ctx, 31, 0x799A84u);
    ctx->pc = 0x799A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A7Cu;
    // 0x799a80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799A7Cu, 0x799A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A84u;
label_799a84:
    // 0x799a84: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799A84u;
    {
        const bool branch_taken_0x799a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a84) {
            ctx->pc = 0x799AB4u;
            goto label_799ab4;
        }
    }
    ctx->pc = 0x799A8Cu;
    // 0x799a8c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799A8Cu;
    SET_GPR_U32(ctx, 31, 0x799A94u);
    ctx->pc = 0x799A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A8Cu;
    // 0x799a90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799A8Cu, 0x799A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A94u;
label_799a94:
    // 0x799a94: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799a98: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799a9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799aa0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799aac: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799AACu;
    SET_GPR_U32(ctx, 31, 0x799AB4u);
    ctx->pc = 0x799AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AACu;
    // 0x799ab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799AACu, 0x799AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB4u;
label_799ab4:
    // 0x799ab4: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799AB4u;
    SET_GPR_U32(ctx, 31, 0x799ABCu);
    ctx->pc = 0x799AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB4u;
    // 0x799ab8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799AB4u, 0x799ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x799ABCu;
    {
        const bool branch_taken_0x799abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799abc) {
            ctx->pc = 0x799AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799ABCu;
            // 0x799ac0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AF0u;
            goto label_799af0;
        }
    }
    ctx->pc = 0x799AC4u;
    // 0x799ac4: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799AC4u;
    SET_GPR_U32(ctx, 31, 0x799ACCu);
    ctx->pc = 0x799AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC4u;
    // 0x799ac8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799AC4u, 0x799ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ACCu;
label_799acc:
    // 0x799acc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799ad0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799ad4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799ad8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x799ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799adc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ae4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799AE4u;
    SET_GPR_U32(ctx, 31, 0x799AECu);
    ctx->pc = 0x799AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE4u;
    // 0x799ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799AE4u, 0x799AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AECu;
label_799aec:
    // 0x799aec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799af0:
    // 0x799af0: 0xc1e6bf8  jal         func_79AFE0
    ctx->pc = 0x799AF0u;
    SET_GPR_U32(ctx, 31, 0x799AF8u);
    ctx->pc = 0x799AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF0u;
    // 0x799af4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AFE0u, 0x799AF0u, 0x799AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799AF8u;
    SET_GPR_U32(ctx, 31, 0x799B00u);
    ctx->pc = 0x799AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF8u;
    // 0x799afc: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799AF8u, 0x799B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B00u;
label_799b00:
    // 0x799b00: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799b04: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799B04u;
    SET_GPR_U32(ctx, 31, 0x799B0Cu);
    ctx->pc = 0x799B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B04u;
    // 0x799b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799B04u, 0x799B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B0Cu;
label_799b0c:
    // 0x799b0c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799b10: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799b14: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799B14u;
    SET_GPR_U32(ctx, 31, 0x799B1Cu);
    ctx->pc = 0x799B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B14u;
    // 0x799b18: 0x24a5ba40  addiu       $a1, $a1, -0x45C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799B14u, 0x799B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B1Cu;
label_799b1c:
    // 0x799b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b20: 0xc1e6b14  jal         func_79AC50
    ctx->pc = 0x799B20u;
    SET_GPR_U32(ctx, 31, 0x799B28u);
    ctx->pc = 0x799B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B20u;
    // 0x799b24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC50u, 0x799B20u, 0x799B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B28u;
label_799b28:
    // 0x799b28: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799B28u;
    SET_GPR_U32(ctx, 31, 0x799B30u);
    ctx->pc = 0x799B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B28u;
    // 0x799b2c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799B28u, 0x799B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B30u;
label_799b30:
    // 0x799b30: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799B30u;
    SET_GPR_U32(ctx, 31, 0x799B38u);
    ctx->pc = 0x799B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B30u;
    // 0x799b34: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799B30u, 0x799B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B38u;
label_799b38:
    // 0x799b38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799B38u;
    {
        const bool branch_taken_0x799b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B38u;
        // 0x799b3c: 0x27c4ea60  addiu       $a0, $fp, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b38) {
            ctx->pc = 0x799B54u;
            goto label_799b54;
        }
    }
    ctx->pc = 0x799B40u;
label_799b40:
    // 0x799b40: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b48: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B48u;
    SET_GPR_U32(ctx, 31, 0x799B50u);
    ctx->pc = 0x799B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B48u;
    // 0x799b4c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B48u, 0x799B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B50u;
label_799b50:
    // 0x799b50: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_799b54:
    // 0x799b54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b58: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799B60u;
    {
        const bool branch_taken_0x799b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B60u;
        // 0x799b64: 0x27d0ea60  addiu       $s0, $fp, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b60) {
            ctx->pc = 0x799B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b40;
        }
    }
    ctx->pc = 0x799B68u;
    // 0x799b68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b6c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799B6Cu;
    SET_GPR_U32(ctx, 31, 0x799B74u);
    ctx->pc = 0x799B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B6Cu;
    // 0x799b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799B6Cu, 0x799B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B74u;
label_799b74:
    // 0x799b74: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799b78: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x799b7c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B7Cu;
    SET_GPR_U32(ctx, 31, 0x799B84u);
    ctx->pc = 0x799B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B7Cu;
    // 0x799b80: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B7Cu, 0x799B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B84u;
label_799b84:
    // 0x799b84: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799b90: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x799B90u;
    SET_GPR_U32(ctx, 31, 0x799B98u);
    ctx->pc = 0x799B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B90u;
    // 0x799b94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799B90u, 0x799B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799b9c: 0x8c437a8c  lw          $v1, 0x7A8C($v0)
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799ba0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x799ba4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799ba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA8u;
        // 0x799bac: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799BB0u;
    // 0x799bb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799bb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BB4u;
    {
        const bool branch_taken_0x799bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB4u;
        // 0x799bb8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb4) {
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799BBCu;
    // 0x799bbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799bc0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x799BC0u;
    {
        const bool branch_taken_0x799bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc0) {
            ctx->pc = 0x799CCCu;
            goto label_799ccc;
        }
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799bcc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799bd0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799bd4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799bd8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x799bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x799bdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799be0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799be0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799be4: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x799be8: 0xa3a30018  sb          $v1, 0x18($sp)
    ctx->pc = 0x799be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x799bec: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799BECu;
    SET_GPR_U32(ctx, 31, 0x799BF4u);
    ctx->pc = 0x799BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BECu;
    // 0x799bf0: 0x3c16007a  lui         $s6, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799BECu, 0x799BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF4u;
label_799bf4:
    // 0x799bf4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bf8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799bfc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799BFCu;
    SET_GPR_U32(ctx, 31, 0x799C04u);
    ctx->pc = 0x799C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BFCu;
    // 0x799c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799BFCu, 0x799C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C04u;
label_799c04:
    // 0x799c04: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c0c: 0x0  nop
    ctx->pc = 0x799c0cu;
    // NOP
label_799c10:
    // 0x799c10: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799C10u;
    SET_GPR_U32(ctx, 31, 0x799C18u);
    ctx->pc = 0x799C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C10u;
    // 0x799c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799C10u, 0x799C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C18u;
label_799c18:
    // 0x799c18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799c1c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x799c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799c20: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x799c24: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799C24u;
    SET_GPR_U32(ctx, 31, 0x799C2Cu);
    ctx->pc = 0x799C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C24u;
    // 0x799c28: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C24u, 0x799C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C2Cu;
label_799c2c:
    // 0x799c2c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799c30: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799c34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c48: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799C48u;
    SET_GPR_U32(ctx, 31, 0x799C50u);
    ctx->pc = 0x799C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C48u;
    // 0x799c4c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799C48u, 0x799C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C50u;
label_799c50:
    // 0x799c50: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x799c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799c54: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799C54u;
    {
        const bool branch_taken_0x799c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c54) {
            ctx->pc = 0x799C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C54u;
            // 0x799c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c10;
        }
    }
    ctx->pc = 0x799C5Cu;
    // 0x799c5c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799c60: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799C60u;
    SET_GPR_U32(ctx, 31, 0x799C68u);
    ctx->pc = 0x799C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C60u;
    // 0x799c64: 0x26c5ba48  addiu       $a1, $s6, -0x45B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799C60u, 0x799C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C68u;
label_799c68:
    // 0x799c68: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799C68u;
    SET_GPR_U32(ctx, 31, 0x799C70u);
    ctx->pc = 0x799C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C68u;
    // 0x799c6c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799C68u, 0x799C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C70u;
label_799c70:
    // 0x799c70: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799C70u;
    SET_GPR_U32(ctx, 31, 0x799C78u);
    ctx->pc = 0x799C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C70u;
    // 0x799c74: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799C70u, 0x799C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C78u;
label_799c78:
    // 0x799c78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c7c: 0x0  nop
    ctx->pc = 0x799c7cu;
    // NOP
label_799c80:
    // 0x799c80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c84: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x799c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_799c88:
    // 0x799c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c8c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799C8Cu;
    SET_GPR_U32(ctx, 31, 0x799C94u);
    ctx->pc = 0x799C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C8Cu;
    // 0x799c90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799C8Cu, 0x799C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C94u;
label_799c94:
    // 0x799c94: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x799c98: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799c9c: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x799c9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799ca0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799CA0u;
    {
        const bool branch_taken_0x799ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca0) {
            ctx->pc = 0x799C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c88;
        }
    }
    ctx->pc = 0x799CA8u;
    // 0x799ca8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x799ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x799cac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799CACu;
    {
        const bool branch_taken_0x799cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CACu;
        // 0x799cb0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cac) {
            ctx->pc = 0x799CC8u;
            goto label_799cc8;
        }
    }
    ctx->pc = 0x799CB4u;
    // 0x799cb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cb8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799CB8u;
    SET_GPR_U32(ctx, 31, 0x799CC0u);
    ctx->pc = 0x799CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CB8u;
    // 0x799cbc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799CB8u, 0x799CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CC0u;
label_799cc0:
    // 0x799cc0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x799CC0u;
    {
        const bool branch_taken_0x799cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC0u;
        // 0x799cc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cc0) {
            ctx->pc = 0x799C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c80;
        }
    }
    ctx->pc = 0x799CC8u;
label_799cc8:
    // 0x799cc8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_799ccc:
    // 0x799ccc: 0x8c437a8c  lw          $v1, 0x7A8C($v0)
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31372)));
    // 0x799cd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x799cd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799cd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799CD8u;
    {
        const bool branch_taken_0x799cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD8u;
        // 0x799cdc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cd8) {
            ctx->pc = 0x799CF8u;
            goto label_799cf8;
        }
    }
    ctx->pc = 0x799CE0u;
    // 0x799ce0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799ce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799CE4u;
    {
        const bool branch_taken_0x799ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE4u;
        // 0x799ce8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ce4) {
            ctx->pc = 0x799CF8u;
            goto label_799cf8;
        }
    }
    ctx->pc = 0x799CECu;
    // 0x799cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799cf0: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x799CF0u;
    {
        const bool branch_taken_0x799cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF0u;
        // 0x799cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cf0) {
            ctx->pc = 0x799E44u;
            goto label_799e44;
        }
    }
    ctx->pc = 0x799CF8u;
label_799cf8:
    // 0x799cf8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x799cfc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x799d00: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799d04: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799d08: 0xa3a30018  sb          $v1, 0x18($sp)
    ctx->pc = 0x799d08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x799d0c: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x799d10: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x799d10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x799d14: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799D14u;
    SET_GPR_U32(ctx, 31, 0x799D1Cu);
    ctx->pc = 0x799D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D14u;
    // 0x799d18: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799D14u, 0x799D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D1Cu;
label_799d1c:
    // 0x799d1c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799d20: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799D20u;
    SET_GPR_U32(ctx, 31, 0x799D28u);
    ctx->pc = 0x799D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D20u;
    // 0x799d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799D20u, 0x799D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D28u;
label_799d28:
    // 0x799d28: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799d2c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x799D2Cu;
    SET_GPR_U32(ctx, 31, 0x799D34u);
    ctx->pc = 0x799D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D2Cu;
    // 0x799d30: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799D2Cu, 0x799D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D34u;
label_799d34:
    // 0x799d34: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x799d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x799d38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799d40: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x799d40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x799d44: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x799D44u;
    {
        const bool branch_taken_0x799d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D44u;
        // 0x799d48: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d44) {
            ctx->pc = 0x799DA8u;
            goto label_799da8;
        }
    }
    ctx->pc = 0x799D4Cu;
    // 0x799d4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d50: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x799d54: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799d58: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x799d58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799d5c: 0x0  nop
    ctx->pc = 0x799d5cu;
    // NOP
label_799d60:
    // 0x799d60: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x799d64: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x799d68: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799D68u;
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799D68u, 0x799D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D70u;
label_799d70:
    // 0x799d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d74: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799D74u;
    SET_GPR_U32(ctx, 31, 0x799D7Cu);
    ctx->pc = 0x799D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D74u;
    // 0x799d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799D74u, 0x799D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D7Cu;
label_799d7c:
    // 0x799d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d80: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799d84: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799d88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799d8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d90: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d98: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799D98u;
    SET_GPR_U32(ctx, 31, 0x799DA0u);
    ctx->pc = 0x799D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D98u;
    // 0x799d9c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799D98u, 0x799DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DA0u;
label_799da0:
    // 0x799da0: 0x5640ffef  bnel        $s2, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x799DA0u;
    {
        const bool branch_taken_0x799da0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x799da0) {
            ctx->pc = 0x799DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DA0u;
            // 0x799da4: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d60;
        }
    }
    ctx->pc = 0x799DA8u;
label_799da8:
    // 0x799da8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799dac: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799DACu;
    SET_GPR_U32(ctx, 31, 0x799DB4u);
    ctx->pc = 0x799DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DACu;
    // 0x799db0: 0x26c5ba48  addiu       $a1, $s6, -0x45B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799DACu, 0x799DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB4u;
label_799db4:
    // 0x799db4: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799DB4u;
    SET_GPR_U32(ctx, 31, 0x799DBCu);
    ctx->pc = 0x799DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB4u;
    // 0x799db8: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799DB4u, 0x799DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DBCu;
label_799dbc:
    // 0x799dbc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799DBCu;
    SET_GPR_U32(ctx, 31, 0x799DC4u);
    ctx->pc = 0x799DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DBCu;
    // 0x799dc0: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799DBCu, 0x799DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC4u;
label_799dc4:
    // 0x799dc4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799dc8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799dcc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799dd0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x799dd4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x799dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x799dd8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799ddc: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x799ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x799de0: 0xa3a30048  sb          $v1, 0x48($sp)
    ctx->pc = 0x799de0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x799de4: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x799de4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x799de8: 0xa3a50058  sb          $a1, 0x58($sp)
    ctx->pc = 0x799de8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x799dec: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x799decu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x799df0: 0xa3a70068  sb          $a3, 0x68($sp)
    ctx->pc = 0x799df0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 7));
    // 0x799df4: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_799df8:
    // 0x799df8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e00:
    // 0x799e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e04: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799E04u;
    SET_GPR_U32(ctx, 31, 0x799E0Cu);
    ctx->pc = 0x799E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E04u;
    // 0x799e08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799E04u, 0x799E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E0Cu;
label_799e0c:
    // 0x799e0c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x799e10: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799e14: 0x2e240006  sltiu       $a0, $s1, 0x6
    ctx->pc = 0x799e14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x799e18: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799E18u;
    {
        const bool branch_taken_0x799e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E18u;
        // 0x799e1c: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e18) {
            ctx->pc = 0x799E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e00;
        }
    }
    ctx->pc = 0x799E20u;
    // 0x799e20: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x799e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x799e24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799E24u;
    {
        const bool branch_taken_0x799e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E24u;
        // 0x799e28: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e24) {
            ctx->pc = 0x799E40u;
            goto label_799e40;
        }
    }
    ctx->pc = 0x799E2Cu;
    // 0x799e2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e30: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E30u;
    SET_GPR_U32(ctx, 31, 0x799E38u);
    ctx->pc = 0x799E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E30u;
    // 0x799e34: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E30u, 0x799E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E38u;
label_799e38:
    // 0x799e38: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x799E38u;
    {
        const bool branch_taken_0x799e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E38u;
        // 0x799e3c: 0x8fb00070  lw          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e38) {
            ctx->pc = 0x799DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799df8;
        }
    }
    ctx->pc = 0x799E40u;
label_799e40:
    // 0x799e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e44:
    // 0x799e44: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x799e44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x799e48: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x799e48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x799e4c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x799e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e58:
    // 0x799e58: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799E58u;
    SET_GPR_U32(ctx, 31, 0x799E60u);
    ctx->pc = 0x799E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E58u;
    // 0x799e5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799E58u, 0x799E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E60u;
label_799e60:
    // 0x799e60: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799E60u;
    SET_GPR_U32(ctx, 31, 0x799E68u);
    ctx->pc = 0x799E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E60u;
    // 0x799e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799E60u, 0x799E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E68u;
label_799e68:
    // 0x799e68: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799e6c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799e70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799e74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e84: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799E84u;
    SET_GPR_U32(ctx, 31, 0x799E8Cu);
    ctx->pc = 0x799E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E84u;
    // 0x799e88: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799E84u, 0x799E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x799e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799e90: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x799E90u;
    {
        const bool branch_taken_0x799e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E90u;
        // 0x799e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e90) {
            ctx->pc = 0x799E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E98u;
    // 0x799e98: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799e9c: 0x8e652f84  lw          $a1, 0x2F84($s3)
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799ea0: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799ea4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799ea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799eac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799eb0: 0xac627a8c  sw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799eb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A8Cu, _value); } while (0);
    // 0x799eb4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799EB4u;
    SET_GPR_U32(ctx, 31, 0x799EBCu);
    ctx->pc = 0x799EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB4u;
    // 0x799eb8: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799EB4u, 0x799EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x799ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799ec0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x799ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799ec4: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x799ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799ec8: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x799ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799ecc: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x799eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799ed0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x799ed0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799ed4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x799ed4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799ed8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x799ed8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799edc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x799edcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799ee0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x799ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799ee4: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x799ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x799ee8: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x799ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799eec: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x799eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799ef0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x799ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x799EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EFCu;
    // 0x799efc: 0x0  nop
    ctx->pc = 0x799efcu;
    // NOP
    ctx->pc = 0x799f00u;
}
} // namespace gh_r601
