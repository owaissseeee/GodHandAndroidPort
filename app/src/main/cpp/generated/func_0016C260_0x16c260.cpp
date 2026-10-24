#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0016C260
// Address: 0x16c260 - 0x16c678
void func_0016C260_0x16c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016C260_0x16c260");
#endif

    switch (ctx->pc) {
        case 0x16c298u: goto label_16c298;
        case 0x16c2a8u: goto label_16c2a8;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2dcu: goto label_16c2dc;
        case 0x16c2e4u: goto label_16c2e4;
        case 0x16c2f4u: goto label_16c2f4;
        case 0x16c2fcu: goto label_16c2fc;
        case 0x16c30cu: goto label_16c30c;
        case 0x16c314u: goto label_16c314;
        case 0x16c368u: goto label_16c368;
        case 0x16c370u: goto label_16c370;
        case 0x16c398u: goto label_16c398;
        case 0x16c3a0u: goto label_16c3a0;
        case 0x16c3ccu: goto label_16c3cc;
        case 0x16c3d8u: goto label_16c3d8;
        case 0x16c3e4u: goto label_16c3e4;
        case 0x16c400u: goto label_16c400;
        case 0x16c408u: goto label_16c408;
        case 0x16c418u: goto label_16c418;
        case 0x16c598u: goto label_16c598;
        case 0x16c618u: goto label_16c618;
        default: break;
    }

    ctx->pc = 0x16c260u;

    // 0x16c260: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16c260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x16c264: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x16c264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x16c268: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16c268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c26c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x16c26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x16c270: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x16c270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x16c274: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x16c274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x16c278: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x16c278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x16c27c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x16c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x16c280: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x16c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x16c284: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16c284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16c288: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x16c288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x16c28c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16c290: 0xc058574  jal         func_1615D0
    ctx->pc = 0x16C290u;
    SET_GPR_U32(ctx, 31, 0x16C298u);
    ctx->pc = 0x16C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C290u;
    // 0x16c294: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x16C290u, 0x16C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C298u;
label_16c298:
    // 0x16c298: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16c298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16c29c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2a0: 0xc058540  jal         func_161500
    ctx->pc = 0x16C2A0u;
    SET_GPR_U32(ctx, 31, 0x16C2A8u);
    ctx->pc = 0x16C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2A0u;
    // 0x16c2a4: 0x24a5fea0  addiu       $a1, $a1, -0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x16C2A0u, 0x16C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2A8u;
label_16c2a8:
    // 0x16c2a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16C2A8u;
    {
        const bool branch_taken_0x16c2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2A8u;
        // 0x16c2ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2a8) {
            ctx->pc = 0x16C32Cu;
            goto label_16c32c;
        }
    }
    ctx->pc = 0x16C2B0u;
    // 0x16c2b0: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x16c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x16c2b4: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x16c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x16c2b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16c2bc: 0x26500170  addiu       $s0, $s2, 0x170
    ctx->pc = 0x16c2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x16c2c0: 0x26510290  addiu       $s1, $s2, 0x290
    ctx->pc = 0x16c2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
    // 0x16c2c4: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x16C2C4u;
    SET_GPR_U32(ctx, 31, 0x16C2CCu);
    ctx->pc = 0x16C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2C4u;
    // 0x16c2c8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x16C2C4u, 0x16C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2CCu;
label_16c2cc:
    // 0x16c2cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16c2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2d4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x16C2D4u;
    SET_GPR_U32(ctx, 31, 0x16C2DCu);
    ctx->pc = 0x16C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2D4u;
    // 0x16c2d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x16C2D4u, 0x16C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2DCu;
label_16c2dc:
    // 0x16c2dc: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x16C2DCu;
    SET_GPR_U32(ctx, 31, 0x16C2E4u);
    ctx->pc = 0x16C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2DCu;
    // 0x16c2e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x16C2DCu, 0x16C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2E4u;
label_16c2e4:
    // 0x16c2e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16c2e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16c2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c2ec: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x16C2ECu;
    SET_GPR_U32(ctx, 31, 0x16C2F4u);
    ctx->pc = 0x16C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2ECu;
    // 0x16c2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x16C2ECu, 0x16C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2F4u;
label_16c2f4:
    // 0x16c2f4: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x16C2F4u;
    SET_GPR_U32(ctx, 31, 0x16C2FCu);
    ctx->pc = 0x16C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2F4u;
    // 0x16c2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x16C2F4u, 0x16C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2FCu;
label_16c2fc:
    // 0x16c2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c300: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16c300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16c304: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x16C304u;
    SET_GPR_U32(ctx, 31, 0x16C30Cu);
    ctx->pc = 0x16C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C304u;
    // 0x16c308: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x16C304u, 0x16C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C30Cu;
label_16c30c:
    // 0x16c30c: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x16C30Cu;
    SET_GPR_U32(ctx, 31, 0x16C314u);
    ctx->pc = 0x16C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C30Cu;
    // 0x16c310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x16C30Cu, 0x16C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C314u;
label_16c314:
    // 0x16c314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c318: 0xa240005a  sb          $zero, 0x5A($s2)
    ctx->pc = 0x16c318u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x16c31c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x16c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x16c320: 0xa240005b  sb          $zero, 0x5B($s2)
    ctx->pc = 0x16c320u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x16c324: 0xa240005c  sb          $zero, 0x5C($s2)
    ctx->pc = 0x16c324u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x16c328: 0xa240005d  sb          $zero, 0x5D($s2)
    ctx->pc = 0x16c328u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 0));
label_16c32c:
    // 0x16c32c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x16c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16c330: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x16c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x16c334: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x16c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x16c338: 0x26540170  addiu       $s4, $s2, 0x170
    ctx->pc = 0x16c338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x16c33c: 0x264202ec  addiu       $v0, $s2, 0x2EC
    ctx->pc = 0x16c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 748));
    // 0x16c340: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x16c340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x16c344: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x16c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x16c348: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x16c348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x16c34c: 0x265601c0  addiu       $s6, $s2, 0x1C0
    ctx->pc = 0x16c34cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x16c350: 0x26550270  addiu       $s5, $s2, 0x270
    ctx->pc = 0x16c350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x16c354: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x16c354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16c358: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x16c358u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16c35c: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x16c35cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
    // 0x16c360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16c360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c364: 0x0  nop
    ctx->pc = 0x16c364u;
    // NOP
label_16c368:
    // 0x16c368: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16C368u;
    SET_GPR_U32(ctx, 31, 0x16C370u);
    ctx->pc = 0x16C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C368u;
    // 0x16c36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16C368u, 0x16C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C370u;
label_16c370:
    // 0x16c370: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16c374: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x16c374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16c378: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x16c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x16c37c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x16c37cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c380: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16c380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16c384: 0x2e62003b  sltiu       $v0, $s3, 0x3B
    ctx->pc = 0x16c384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x16c388: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16C388u;
    {
        const bool branch_taken_0x16c388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C388u;
        // 0x16c38c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c388) {
            ctx->pc = 0x16C368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c368;
        }
    }
    ctx->pc = 0x16C390u;
    // 0x16c390: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c394: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16c394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c398:
    // 0x16c398: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16C398u;
    SET_GPR_U32(ctx, 31, 0x16C3A0u);
    ctx->pc = 0x16C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C398u;
    // 0x16c39c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16C398u, 0x16C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3A0u;
label_16c3a0:
    // 0x16c3a0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x16c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16c3a4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x16c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16c3a8: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x16c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x16c3ac: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x16c3acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c3b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16c3b4: 0x2e620027  sltiu       $v0, $s3, 0x27
    ctx->pc = 0x16c3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x16c3b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16C3B8u;
    {
        const bool branch_taken_0x16c3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3B8u;
        // 0x16c3bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3b8) {
            ctx->pc = 0x16C398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C3C0u;
    // 0x16c3c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3c4: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x16C3C4u;
    SET_GPR_U32(ctx, 31, 0x16C3CCu);
    ctx->pc = 0x16C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3C4u;
    // 0x16c3c8: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x16C3C4u, 0x16C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3CCu;
label_16c3cc:
    // 0x16c3cc: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x16c3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    // 0x16c3d0: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x16C3D0u;
    SET_GPR_U32(ctx, 31, 0x16C3D8u);
    ctx->pc = 0x16C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3D0u;
    // 0x16c3d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x16C3D0u, 0x16C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3D8u;
label_16c3d8:
    // 0x16c3d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16c3dc: 0xc0b23be  jal         func_2C8EF8
    ctx->pc = 0x16C3DCu;
    SET_GPR_U32(ctx, 31, 0x16C3E4u);
    ctx->pc = 0x16C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3DCu;
    // 0x16c3e0: 0x2484ec58  addiu       $a0, $a0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8EF8u, 0x16C3DCu, 0x16C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3E4u;
label_16c3e4:
    // 0x16c3e4: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x16c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x16c3e8: 0x240230f9  addiu       $v0, $zero, 0x30F9
    ctx->pc = 0x16c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12537));
    // 0x16c3ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16c3f0: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16c3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16c3f4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16c3f8: 0xc07ef58  jal         func_1FBD60
    ctx->pc = 0x16C3F8u;
    SET_GPR_U32(ctx, 31, 0x16C400u);
    ctx->pc = 0x16C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3F8u;
    // 0x16c3fc: 0xa240025c  sb          $zero, 0x25C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 604), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD60u, 0x16C3F8u, 0x16C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C400u;
label_16c400:
    // 0x16c400: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x16C400u;
    SET_GPR_U32(ctx, 31, 0x16C408u);
    ctx->pc = 0x16C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C400u;
    // 0x16c404: 0xa242025d  sb          $v0, 0x25D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 605), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x16C400u, 0x16C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C408u;
label_16c408:
    // 0x16c408: 0xae420264  sw          $v0, 0x264($s2)
    ctx->pc = 0x16c408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 2));
    // 0x16c40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c410: 0xc04e3ae  jal         func_138EB8
    ctx->pc = 0x16C410u;
    SET_GPR_U32(ctx, 31, 0x16C418u);
    ctx->pc = 0x16C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C410u;
    // 0x16c414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x16C410u, 0x16C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C418u;
label_16c418:
    // 0x16c418: 0x8e430264  lw          $v1, 0x264($s2)
    ctx->pc = 0x16c418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x16c41c: 0x26100c90  addiu       $s0, $s0, 0xC90
    ctx->pc = 0x16c41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3216));
    // 0x16c420: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x16c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x16c424: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C424u;
    {
        const bool branch_taken_0x16c424 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C424u;
        // 0x16c428: 0xae500280  sw          $s0, 0x280($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c424) {
            ctx->pc = 0x16C444u;
            goto label_16c444;
        }
    }
    ctx->pc = 0x16C42Cu;
    // 0x16c42c: 0xc4600100  lwc1        $f0, 0x100($v1)
    ctx->pc = 0x16c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c430: 0xe6400270  swc1        $f0, 0x270($s2)
    ctx->pc = 0x16c430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 624), bits); }
    // 0x16c434: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x16c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c438: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x16c438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x16c43c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c440: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x16c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_16c444:
    // 0x16c444: 0x8e430264  lw          $v1, 0x264($s2)
    ctx->pc = 0x16c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x16c448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16c448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16c44c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16c44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16c450: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16c450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x16c454: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x16c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x16c458: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x16c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x16c45c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x16c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x16c460: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C460u;
    {
        const bool branch_taken_0x16c460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x16C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C460u;
        // 0x16c464: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c460) {
            ctx->pc = 0x16C480u;
            goto label_16c480;
        }
    }
    ctx->pc = 0x16C468u;
    // 0x16c468: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x16c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c46c: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x16c46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x16c470: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x16c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c474: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16c474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x16c478: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x16c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c47c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x16c47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_16c480:
    // 0x16c480: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x16c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x16c484: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x16c484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x16c488: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16c488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c48c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x16c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c490: 0x3c01bfdf  lui         $at, 0xBFDF
    ctx->pc = 0x16c490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49119 << 16));
    // 0x16c494: 0x3421dd44  ori         $at, $at, 0xDD44
    ctx->pc = 0x16c494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56644);
    // 0x16c498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c49c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x16c49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x16c4a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16c4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c4a4: 0x3c013dcd  lui         $at, 0x3DCD
    ctx->pc = 0x16c4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15821 << 16));
    // 0x16c4a8: 0x3421013b  ori         $at, $at, 0x13B
    ctx->pc = 0x16c4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)315);
    // 0x16c4ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16c4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c4b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x16c4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16c4b4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x16c4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x16c4b8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x16c4b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x16c4bc: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x16c4bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x16c4c0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x16c4c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c4c4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x16c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c4c8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x16c4c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c4cc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16c4ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16c4d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16c4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16c4d4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x16c4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c4d8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x16c4d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x16c4dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x16c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c4e0: 0x8e430280  lw          $v1, 0x280($s2)
    ctx->pc = 0x16c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
    // 0x16c4e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x16c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16c4e8: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x16c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x16c4ec: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C4ECu;
    {
        const bool branch_taken_0x16c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x16C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4ECu;
        // 0x16c4f0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4ec) {
            ctx->pc = 0x16C508u;
            goto label_16c508;
        }
    }
    ctx->pc = 0x16C4F4u;
    // 0x16c4f4: 0xe4600200  swc1        $f0, 0x200($v1)
    ctx->pc = 0x16c4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 512), bits); }
    // 0x16c4f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x16c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c4fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16c4fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x16c500: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x16c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c504: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x16c504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_16c508:
    // 0x16c508: 0x3c01401f  lui         $at, 0x401F
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16415 << 16));
    // 0x16c50c: 0x3421866e  ori         $at, $at, 0x866E
    ctx->pc = 0x16c50cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34414);
    // 0x16c510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c514: 0x8e430280  lw          $v1, 0x280($s2)
    ctx->pc = 0x16c514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
    // 0x16c518: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x16c518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x16c51c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x16c51cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x16c520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16c520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c524: 0x3c0140c6  lui         $at, 0x40C6
    ctx->pc = 0x16c524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16582 << 16));
    // 0x16c528: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x16c528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x16c52c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16c52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c530: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x16c534: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x16c534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16c538: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x16c538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x16c53c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x16c53cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x16c540: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x16c540u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x16c544: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16c544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c548: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x16c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c54c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x16c54cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c550: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16c550u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16c554: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16c554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16c558: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x16c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c55c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x16c55cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x16c560: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x16c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c564: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x16c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16c568: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x16c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x16c56c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C56Cu;
    {
        const bool branch_taken_0x16c56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x16C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C56Cu;
        // 0x16c570: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c56c) {
            ctx->pc = 0x16C588u;
            goto label_16c588;
        }
    }
    ctx->pc = 0x16C574u;
    // 0x16c574: 0xe4600210  swc1        $f0, 0x210($v1)
    ctx->pc = 0x16c574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 528), bits); }
    // 0x16c578: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x16c578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c57c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16c57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x16c580: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x16c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c584: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x16c584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_16c588:
    // 0x16c588: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16c58c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c58cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c590: 0xc0b65de  jal         func_2D9778
    ctx->pc = 0x16C590u;
    SET_GPR_U32(ctx, 31, 0x16C598u);
    ctx->pc = 0x16C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C590u;
    // 0x16c594: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9778u, 0x16C590u, 0x16C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C598u;
label_16c598:
    // 0x16c598: 0x8ee27a80  lw          $v0, 0x7A80($s7)
    ctx->pc = 0x16c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31360)));
    // 0x16c59c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x16c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x16c5a0: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x16c5a4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x16c5a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16c5ac: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x16c5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x16c5b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x16c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16c5b4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x16c5b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16c5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16c5bc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x16c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16c5c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x16c5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16c5c4: 0x26e87a80  addiu       $t0, $s7, 0x7A80
    ctx->pc = 0x16c5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 31360));
    // 0x16c5c8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x16c5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x16c5cc: 0x8d05fff8  lw          $a1, -0x8($t0)
    ctx->pc = 0x16c5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967288)));
    // 0x16c5d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16c5d4: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x16c5d8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x16c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x16c5dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x16c5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x16c5e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16c5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16c5e4: 0x8faa0040  lw          $t2, 0x40($sp)
    ctx->pc = 0x16c5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c5e8: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x16c5ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16c5f0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x16c5f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16c5f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16c5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16c5f8: 0xad05fff8  sw          $a1, -0x8($t0)
    ctx->pc = 0x16c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967288), GPR_U32(ctx, 5));
    // 0x16c5fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16c600: 0xaee27a80  sw          $v0, 0x7A80($s7)
    ctx->pc = 0x16c600u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 31360), GPR_U32(ctx, 2));
    // 0x16c604: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c608: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x16c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x16c60c: 0xac4402c0  sw          $a0, 0x2C0($v0)
    ctx->pc = 0x16c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 704), GPR_U32(ctx, 4));
    // 0x16c610: 0xa6430300  sh          $v1, 0x300($s2)
    ctx->pc = 0x16c610u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 768), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c614: 0xa2400262  sb          $zero, 0x262($s2)
    ctx->pc = 0x16c614u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 610), (uint8_t)GPR_U32(ctx, 0));
label_16c618:
    // 0x16c618: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x16c618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x16c61c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x16c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16c620: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x16c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x16c624: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x16c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16c628: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x16c628u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x16c62c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x16c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x16c630: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x16c630u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16c634: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x16c634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16c638: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16C638u;
    {
        const bool branch_taken_0x16c638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C638u;
        // 0x16c63c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c638) {
            ctx->pc = 0x16C618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c618;
        }
    }
    ctx->pc = 0x16C640u;
    // 0x16c640: 0xa6400304  sh          $zero, 0x304($s2)
    ctx->pc = 0x16c640u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 772), (uint16_t)GPR_U32(ctx, 0));
    // 0x16c644: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x16c644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16c648: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x16c648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16c64c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x16c64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16c650: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x16c650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16c654: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x16c654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c658: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x16c658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16c65c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x16c65cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16c660: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16c660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16c664: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x16c664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c668: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16c668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c66c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C66Cu;
        // 0x16c670: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C674u;
    // 0x16c674: 0x0  nop
    ctx->pc = 0x16c674u;
    // NOP
    ctx->pc = 0x16c678u;
}
