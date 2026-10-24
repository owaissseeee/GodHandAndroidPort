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

// Function: func_00384198
// Address: 0x384198 - 0x384350
void func_00384198_0x384198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384198_0x384198");
#endif

    switch (ctx->pc) {
        case 0x3841d8u: goto label_3841d8;
        case 0x384214u: goto label_384214;
        case 0x384220u: goto label_384220;
        case 0x384238u: goto label_384238;
        case 0x38427cu: goto label_38427c;
        case 0x384288u: goto label_384288;
        case 0x3842a0u: goto label_3842a0;
        case 0x3842d4u: goto label_3842d4;
        case 0x3842e0u: goto label_3842e0;
        case 0x3842f8u: goto label_3842f8;
        case 0x384318u: goto label_384318;
        case 0x384324u: goto label_384324;
        case 0x384330u: goto label_384330;
        default: break;
    }

    ctx->pc = 0x384198u;

    // 0x384198: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x384198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38419c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38419cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3841a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3841a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3841a4: 0x24e7caa0  addiu       $a3, $a3, -0x3560
    ctx->pc = 0x3841a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953632));
    // 0x3841a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3841a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3841ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3841acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3841b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3841b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3841b4: 0x26320370  addiu       $s2, $s1, 0x370
    ctx->pc = 0x3841b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x3841b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3841b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3841bc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3841bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3841c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3841c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3841c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3841c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3841c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3841c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3841cc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3841ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3841d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3841D0u;
    SET_GPR_U32(ctx, 31, 0x3841D8u);
    ctx->pc = 0x3841D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3841D0u;
    // 0x3841d4: 0x8e5400fc  lw          $s4, 0xFC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3841D0u, 0x3841D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3841D8u;
label_3841d8:
    // 0x3841d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3841d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3841dc: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x3841dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3841e0: 0x2447cac0  addiu       $a3, $v0, -0x3540
    ctx->pc = 0x3841e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953664));
    // 0x3841e4: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3841e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3841e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3841E8u;
    {
        const bool branch_taken_0x3841e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3841ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841E8u;
        // 0x3841ec: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3841e8) {
            ctx->pc = 0x3841FCu;
            goto label_3841fc;
        }
    }
    ctx->pc = 0x3841F0u;
    // 0x3841f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3841f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3841f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3841F4u;
    {
        const bool branch_taken_0x3841f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3841F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841F4u;
        // 0x3841f8: 0x2448cab8  addiu       $t0, $v0, -0x3548 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3841f4) {
            ctx->pc = 0x384204u;
            goto label_384204;
        }
    }
    ctx->pc = 0x3841FCu;
label_3841fc:
    // 0x3841fc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3841fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x384200: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x384200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_384204:
    // 0x384204: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x384204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x384208: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38420c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38420Cu;
    SET_GPR_U32(ctx, 31, 0x384214u);
    ctx->pc = 0x384210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38420Cu;
    // 0x384210: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38420Cu, 0x384214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384214u;
label_384214:
    // 0x384214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x384214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384218: 0xc0e10d4  jal         func_384350
    ctx->pc = 0x384218u;
    SET_GPR_U32(ctx, 31, 0x384220u);
    ctx->pc = 0x38421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384218u;
    // 0x38421c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384350u, 0x384218u, 0x384220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384220u;
label_384220:
    // 0x384220: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384220u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384224: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384228: 0x24e7cad0  addiu       $a3, $a3, -0x3530
    ctx->pc = 0x384228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953680));
    // 0x38422c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x38422cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x384230: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384230u;
    SET_GPR_U32(ctx, 31, 0x384238u);
    ctx->pc = 0x384234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384230u;
    // 0x384234: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384230u, 0x384238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384238u;
label_384238:
    // 0x384238: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x384238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x38423c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x384240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x384240u;
    {
        const bool branch_taken_0x384240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384240u;
        // 0x384244: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384240) {
            ctx->pc = 0x384258u;
            goto label_384258;
        }
    }
    ctx->pc = 0x384248u;
    // 0x384248: 0x244328c8  addiu       $v1, $v0, 0x28C8
    ctx->pc = 0x384248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10440));
    // 0x38424c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38424cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x384250u;
    {
        const bool branch_taken_0x384250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384250u;
        // 0x384254: 0x8c690004  lw          $t1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384250) {
            ctx->pc = 0x384260u;
            goto label_384260;
        }
    }
    ctx->pc = 0x384258u;
label_384258:
    // 0x384258: 0x8c4928c8  lw          $t1, 0x28C8($v0)
    ctx->pc = 0x384258u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10440)));
    // 0x38425c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38425cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384260:
    // 0x384260: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x384260u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x384264: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x384264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x384268: 0x2607cae8  addiu       $a3, $s0, -0x3518
    ctx->pc = 0x384268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953704));
    // 0x38426c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x38426cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x384270: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384274: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384274u;
    SET_GPR_U32(ctx, 31, 0x38427Cu);
    ctx->pc = 0x384278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384274u;
    // 0x384278: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384274u, 0x38427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38427Cu;
label_38427c:
    // 0x38427c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384280: 0xc0e1164  jal         func_384590
    ctx->pc = 0x384280u;
    SET_GPR_U32(ctx, 31, 0x384288u);
    ctx->pc = 0x384284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384280u;
    // 0x384284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384590u, 0x384280u, 0x384288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384288u;
label_384288:
    // 0x384288: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x38428c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384290: 0x24e7cb00  addiu       $a3, $a3, -0x3500
    ctx->pc = 0x384290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953728));
    // 0x384294: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x384294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x384298: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384298u;
    SET_GPR_U32(ctx, 31, 0x3842A0u);
    ctx->pc = 0x38429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384298u;
    // 0x38429c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384298u, 0x3842A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3842A0u;
label_3842a0:
    // 0x3842a0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3842a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3842a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3842a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3842a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3842A8u;
    {
        const bool branch_taken_0x3842a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3842ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3842A8u;
        // 0x3842ac: 0x266228c8  addiu       $v0, $s3, 0x28C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3842a8) {
            ctx->pc = 0x3842B8u;
            goto label_3842b8;
        }
    }
    ctx->pc = 0x3842B0u;
    // 0x3842b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3842B0u;
    {
        const bool branch_taken_0x3842b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3842B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3842B0u;
        // 0x3842b4: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3842b0) {
            ctx->pc = 0x3842BCu;
            goto label_3842bc;
        }
    }
    ctx->pc = 0x3842B8u;
label_3842b8:
    // 0x3842b8: 0x8e6928c8  lw          $t1, 0x28C8($s3)
    ctx->pc = 0x3842b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10440)));
label_3842bc:
    // 0x3842bc: 0x92280006  lbu         $t0, 0x6($s1)
    ctx->pc = 0x3842bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3842c0: 0x2607cae8  addiu       $a3, $s0, -0x3518
    ctx->pc = 0x3842c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953704));
    // 0x3842c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3842c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3842c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3842c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3842cc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3842CCu;
    SET_GPR_U32(ctx, 31, 0x3842D4u);
    ctx->pc = 0x3842D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3842CCu;
    // 0x3842d0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3842CCu, 0x3842D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3842D4u;
label_3842d4:
    // 0x3842d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3842d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3842d8: 0xc0e120a  jal         func_384828
    ctx->pc = 0x3842D8u;
    SET_GPR_U32(ctx, 31, 0x3842E0u);
    ctx->pc = 0x3842DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3842D8u;
    // 0x3842dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384828u, 0x3842D8u, 0x3842E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3842E0u;
label_3842e0:
    // 0x3842e0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3842e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3842e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3842e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3842e8: 0x24e7cb10  addiu       $a3, $a3, -0x34F0
    ctx->pc = 0x3842e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953744));
    // 0x3842ec: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3842ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3842f0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3842F0u;
    SET_GPR_U32(ctx, 31, 0x3842F8u);
    ctx->pc = 0x3842F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3842F0u;
    // 0x3842f4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3842F0u, 0x3842F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3842F8u;
label_3842f8:
    // 0x3842f8: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x3842f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3842fc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3842fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384300: 0x92280006  lbu         $t0, 0x6($s1)
    ctx->pc = 0x384300u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x384304: 0x24e7cb30  addiu       $a3, $a3, -0x34D0
    ctx->pc = 0x384304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953776));
    // 0x384308: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x384308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38430c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384310: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384310u;
    SET_GPR_U32(ctx, 31, 0x384318u);
    ctx->pc = 0x384314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384310u;
    // 0x384314: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384310u, 0x384318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384318u;
label_384318:
    // 0x384318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x384318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38431c: 0xc0e1260  jal         func_384980
    ctx->pc = 0x38431Cu;
    SET_GPR_U32(ctx, 31, 0x384324u);
    ctx->pc = 0x384320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38431Cu;
    // 0x384320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384980u, 0x38431Cu, 0x384324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384324u;
label_384324:
    // 0x384324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x384324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384328: 0xc0e12c4  jal         func_384B10
    ctx->pc = 0x384328u;
    SET_GPR_U32(ctx, 31, 0x384330u);
    ctx->pc = 0x38432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384328u;
    // 0x38432c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384B10u, 0x384328u, 0x384330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384330u;
label_384330:
    // 0x384330: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x384330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x384334: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x384334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384338: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x384338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38433c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38433cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384340: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x384340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384348: 0x3e00008  jr          $ra
    ctx->pc = 0x384348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384348u;
        // 0x38434c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384350u;
}
