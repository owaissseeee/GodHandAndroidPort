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

// Function: func_00242B68
// Address: 0x242b68 - 0x243408
void func_00242B68_0x242b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00242B68_0x242b68");
#endif

    switch (ctx->pc) {
        case 0x242ba0u: goto label_242ba0;
        case 0x242becu: goto label_242bec;
        case 0x242c1cu: goto label_242c1c;
        case 0x242c28u: goto label_242c28;
        case 0x242c34u: goto label_242c34;
        case 0x242c80u: goto label_242c80;
        case 0x242ca8u: goto label_242ca8;
        case 0x242cb0u: goto label_242cb0;
        case 0x242cbcu: goto label_242cbc;
        case 0x242cc8u: goto label_242cc8;
        case 0x242d00u: goto label_242d00;
        case 0x242d30u: goto label_242d30;
        case 0x242d58u: goto label_242d58;
        case 0x242d78u: goto label_242d78;
        case 0x242d98u: goto label_242d98;
        case 0x242dc8u: goto label_242dc8;
        case 0x242e08u: goto label_242e08;
        case 0x242e48u: goto label_242e48;
        case 0x242e88u: goto label_242e88;
        case 0x242eccu: goto label_242ecc;
        case 0x242f80u: goto label_242f80;
        case 0x243058u: goto label_243058;
        case 0x24307cu: goto label_24307c;
        case 0x243110u: goto label_243110;
        case 0x243118u: goto label_243118;
        case 0x243124u: goto label_243124;
        case 0x2431a8u: goto label_2431a8;
        case 0x2431bcu: goto label_2431bc;
        case 0x2431dcu: goto label_2431dc;
        case 0x24327cu: goto label_24327c;
        case 0x2432a4u: goto label_2432a4;
        case 0x2432c4u: goto label_2432c4;
        case 0x2432dcu: goto label_2432dc;
        case 0x2432e8u: goto label_2432e8;
        case 0x2432fcu: goto label_2432fc;
        case 0x24330cu: goto label_24330c;
        case 0x243320u: goto label_243320;
        case 0x243358u: goto label_243358;
        case 0x243390u: goto label_243390;
        case 0x2433ccu: goto label_2433cc;
        default: break;
    }

    ctx->pc = 0x242b68u;

    // 0x242b68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x242b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x242b6c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x242b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x242b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x242b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b74: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x242b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x242b78: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x242b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x242b7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x242b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x242b80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x242b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x242b84: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x242b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x242b88: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x242b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x242b8c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x242b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x242b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x242b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b94: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x242b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x242b98: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x242B98u;
    SET_GPR_U32(ctx, 31, 0x242BA0u);
    ctx->pc = 0x242B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B98u;
    // 0x242b9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x242B98u, 0x242BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BA0u;
label_242ba0:
    // 0x242ba0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x242ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x242ba4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x242ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x242ba8: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x242ba8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x242bac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242bb0: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x242bb0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x242bb4: 0x108001e8  beqz        $a0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x242BB4u;
    {
        const bool branch_taken_0x242bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB4u;
        // 0x242bb8: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bb4) {
            ctx->pc = 0x243358u;
            goto label_243358;
        }
    }
    ctx->pc = 0x242BBCu;
    // 0x242bbc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x242bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x242bc0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x242bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242bc4: 0x2442c870  addiu       $v0, $v0, -0x3790
    ctx->pc = 0x242bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953072));
    // 0x242bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242bcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242bd0: 0x800008  jr          $a0
    ctx->pc = 0x242BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242BD8u: goto label_242bd8;
            case 0x242C78u: goto label_242c78;
            case 0x242CF8u: goto label_242cf8;
            case 0x243088u: goto label_243088;
            case 0x2431A0u: goto label_2431a0;
            case 0x2431B4u: goto label_2431b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x242BD8u;
label_242bd8:
    // 0x242bd8: 0x3c015368  lui         $at, 0x5368
    ctx->pc = 0x242bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21352 << 16));
    // 0x242bdc: 0x3421d4a1  ori         $at, $at, 0xD4A1
    ctx->pc = 0x242bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54433);
    // 0x242be0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242be4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x242BE4u;
    SET_GPR_U32(ctx, 31, 0x242BECu);
    ctx->pc = 0x242BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242BE4u;
    // 0x242be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x242BE4u, 0x242BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BECu;
label_242bec:
    // 0x242bec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x242becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bf0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x242bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x242bf4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x242bf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x242bf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c00: 0x8c652464  lw          $a1, 0x2464($v1)
    ctx->pc = 0x242c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9316)));
    // 0x242c04: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x242c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242c08: 0x8c662468  lw          $a2, 0x2468($v1)
    ctx->pc = 0x242c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9320)));
    // 0x242c0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c10: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x242c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x242c14: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x242C14u;
    SET_GPR_U32(ctx, 31, 0x242C1Cu);
    ctx->pc = 0x242C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C14u;
    // 0x242c18: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x242C14u, 0x242C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C1Cu;
label_242c1c:
    // 0x242c1c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x242c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x242c20: 0xa620056e  sh          $zero, 0x56E($s1)
    ctx->pc = 0x242c20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 0));
    // 0x242c24: 0x24505040  addiu       $s0, $v0, 0x5040
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20544));
label_242c28:
    // 0x242c28: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x242c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x242c2c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x242C2Cu;
    SET_GPR_U32(ctx, 31, 0x242C34u);
    ctx->pc = 0x242C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C2Cu;
    // 0x242c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x242C2Cu, 0x242C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C34u;
label_242c34:
    // 0x242c34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x242c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242c38: 0x0  nop
    ctx->pc = 0x242c38u;
    // NOP
    // 0x242c3c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x242C3Cu;
    {
        const bool branch_taken_0x242c3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x242c3c) {
            ctx->pc = 0x242C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C3Cu;
            // 0x242c40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C50u;
            goto label_242c50;
        }
    }
    ctx->pc = 0x242C44u;
    // 0x242c44: 0xa632056e  sh          $s2, 0x56E($s1)
    ctx->pc = 0x242c44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 18));
    // 0x242c48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x242c48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x242c4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x242c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_242c50:
    // 0x242c50: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x242c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x242c54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x242C54u;
    {
        const bool branch_taken_0x242c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C54u;
        // 0x242c58: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c54) {
            ctx->pc = 0x242C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242c28;
        }
    }
    ctx->pc = 0x242C5Cu;
    // 0x242c5c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x242c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x242c60: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x242c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x242c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242c68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242c6c: 0xae20060c  sw          $zero, 0x60C($s1)
    ctx->pc = 0x242c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1548), GPR_U32(ctx, 0));
    // 0x242c70: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x242c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x242c74: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x242c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_242c78:
    // 0x242c78: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x242C78u;
    SET_GPR_U32(ctx, 31, 0x242C80u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x242C78u, 0x242C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C80u;
label_242c80:
    // 0x242c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242c84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242c88: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x242c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c90: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x242c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x242c94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x242c98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x242c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242c9c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x242c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x242ca0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x242CA0u;
    SET_GPR_U32(ctx, 31, 0x242CA8u);
    ctx->pc = 0x242CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CA0u;
    // 0x242ca4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x242CA0u, 0x242CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CA8u;
label_242ca8:
    // 0x242ca8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x242CA8u;
    SET_GPR_U32(ctx, 31, 0x242CB0u);
    ctx->pc = 0x242CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CA8u;
    // 0x242cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x242CA8u, 0x242CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CB0u;
label_242cb0:
    // 0x242cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cb4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x242CB4u;
    SET_GPR_U32(ctx, 31, 0x242CBCu);
    ctx->pc = 0x242CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CB4u;
    // 0x242cb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x242CB4u, 0x242CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CBCu;
label_242cbc:
    // 0x242cbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x242cbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242cc0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x242CC0u;
    SET_GPR_U32(ctx, 31, 0x242CC8u);
    ctx->pc = 0x242CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CC0u;
    // 0x242cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x242CC0u, 0x242CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CC8u;
label_242cc8:
    // 0x242cc8: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x242cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242ccc: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x242cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242cd0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x242cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x242cd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x242cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x242cd8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x242cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242cdc: 0x0  nop
    ctx->pc = 0x242cdcu;
    // NOP
    // 0x242ce0: 0x4500019d  bc1f        . + 4 + (0x19D << 2)
    ctx->pc = 0x242CE0u;
    {
        const bool branch_taken_0x242ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CE0u;
        // 0x242ce4: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ce0) {
            ctx->pc = 0x243358u;
            goto label_243358;
        }
    }
    ctx->pc = 0x242CE8u;
    // 0x242ce8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x242ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x242cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242cf0: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x242CF0u;
    {
        const bool branch_taken_0x242cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CF0u;
        // 0x242cf4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cf0) {
            ctx->pc = 0x243358u;
            goto label_243358;
        }
    }
    ctx->pc = 0x242CF8u;
label_242cf8:
    // 0x242cf8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x242CF8u;
    SET_GPR_U32(ctx, 31, 0x242D00u);
    ctx->pc = 0x242CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CF8u;
    // 0x242cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x242CF8u, 0x242D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D00u;
label_242d00:
    // 0x242d00: 0x8623056e  lh          $v1, 0x56E($s1)
    ctx->pc = 0x242d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x242d04: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x242d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x242d08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x242D08u;
    {
        const bool branch_taken_0x242d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D08u;
        // 0x242d0c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d08) {
            ctx->pc = 0x242D28u;
            goto label_242d28;
        }
    }
    ctx->pc = 0x242D10u;
    // 0x242d10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242d14: 0x2442c890  addiu       $v0, $v0, -0x3770
    ctx->pc = 0x242d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953104));
    // 0x242d18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242d1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242d20: 0x800008  jr          $a0
    ctx->pc = 0x242D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242D28u: goto label_242d28;
            case 0x242D50u: goto label_242d50;
            case 0x242D90u: goto label_242d90;
            case 0x242DC0u: goto label_242dc0;
            case 0x242E00u: goto label_242e00;
            case 0x242E40u: goto label_242e40;
            case 0x242E80u: goto label_242e80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242D20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x242D28u;
label_242d28:
    // 0x242d28: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242D28u;
    SET_GPR_U32(ctx, 31, 0x242D30u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242D28u, 0x242D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D30u;
label_242d30:
    // 0x242d30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x242d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x242d34: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x242d34u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x242d38: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242D38u;
    {
        const bool branch_taken_0x242d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d38) {
            ctx->pc = 0x242D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D38u;
            // 0x242d3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D40u;
            goto label_242d40;
        }
    }
    ctx->pc = 0x242D40u;
label_242d40:
    // 0x242d40: 0x2010  mfhi        $a0
    ctx->pc = 0x242d40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x242d44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x242d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x242d48: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x242D48u;
    {
        const bool branch_taken_0x242d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D48u;
        // 0x242d4c: 0xa624056c  sh          $a0, 0x56C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d48) {
            ctx->pc = 0x242ED8u;
            goto label_242ed8;
        }
    }
    ctx->pc = 0x242D50u;
label_242d50:
    // 0x242d50: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242D50u;
    SET_GPR_U32(ctx, 31, 0x242D58u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242D50u, 0x242D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D58u;
label_242d58:
    // 0x242d58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x242d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x242d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242d60: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x242d60u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x242d64: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242D64u;
    {
        const bool branch_taken_0x242d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d64) {
            ctx->pc = 0x242D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D64u;
            // 0x242d68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D6Cu;
            goto label_242d6c;
        }
    }
    ctx->pc = 0x242D6Cu;
label_242d6c:
    // 0x242d6c: 0x2010  mfhi        $a0
    ctx->pc = 0x242d6cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x242d70: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x242D70u;
    {
        const bool branch_taken_0x242d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x242D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D70u;
        // 0x242d74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d70) {
            ctx->pc = 0x242EC0u;
            goto label_242ec0;
        }
    }
    ctx->pc = 0x242D78u;
label_242d78:
    // 0x242d78: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x242D78u;
    {
        const bool branch_taken_0x242d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D78u;
        // 0x242d7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d78) {
            ctx->pc = 0x242EB8u;
            goto label_242eb8;
        }
    }
    ctx->pc = 0x242D80u;
    // 0x242d80: 0x50820050  beql        $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x242D80u;
    {
        const bool branch_taken_0x242d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x242d80) {
            ctx->pc = 0x242D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D80u;
            // 0x242d84: 0xa625056c  sh          $a1, 0x56C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242D88u;
    // 0x242d88: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x242D88u;
    {
        const bool branch_taken_0x242d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D88u;
        // 0x242d8c: 0xa620056c  sh          $zero, 0x56C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d88) {
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242D90u;
label_242d90:
    // 0x242d90: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242D90u;
    SET_GPR_U32(ctx, 31, 0x242D98u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242D90u, 0x242D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D98u;
label_242d98:
    // 0x242d98: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x242d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x242d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242da0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x242da0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x242da4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242DA4u;
    {
        const bool branch_taken_0x242da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x242da4) {
            ctx->pc = 0x242DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DA4u;
            // 0x242da8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242DACu;
            goto label_242dac;
        }
    }
    ctx->pc = 0x242DACu;
label_242dac:
    // 0x242dac: 0x2010  mfhi        $a0
    ctx->pc = 0x242dacu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x242db0: 0x1483fff1  bne         $a0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x242DB0u;
    {
        const bool branch_taken_0x242db0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x242db0) {
            ctx->pc = 0x242D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242d78;
        }
    }
    ctx->pc = 0x242DB8u;
    // 0x242db8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x242DB8u;
    {
        const bool branch_taken_0x242db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DB8u;
        // 0x242dbc: 0xa624056c  sh          $a0, 0x56C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242db8) {
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242DC0u;
label_242dc0:
    // 0x242dc0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242DC0u;
    SET_GPR_U32(ctx, 31, 0x242DC8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242DC0u, 0x242DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DC8u;
label_242dc8:
    // 0x242dc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x242dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242dd0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x242dd0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x242dd4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242DD4u;
    {
        const bool branch_taken_0x242dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242dd4) {
            ctx->pc = 0x242DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DD4u;
            // 0x242dd8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242DDCu;
            goto label_242ddc;
        }
    }
    ctx->pc = 0x242DDCu;
label_242ddc:
    // 0x242ddc: 0x2810  mfhi        $a1
    ctx->pc = 0x242ddcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x242de0: 0x50a40038  beql        $a1, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x242DE0u;
    {
        const bool branch_taken_0x242de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x242de0) {
            ctx->pc = 0x242DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DE0u;
            // 0x242de4: 0xa625056c  sh          $a1, 0x56C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242DE8u;
    // 0x242de8: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x242DE8u;
    {
        const bool branch_taken_0x242de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DE8u;
        // 0x242dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242de8) {
            ctx->pc = 0x242EB8u;
            goto label_242eb8;
        }
    }
    ctx->pc = 0x242DF0u;
    // 0x242df0: 0x54a20034  bnel        $a1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x242DF0u;
    {
        const bool branch_taken_0x242df0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x242df0) {
            ctx->pc = 0x242DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DF0u;
            // 0x242df4: 0xa620056c  sh          $zero, 0x56C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242DF8u;
    // 0x242df8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x242DF8u;
    {
        const bool branch_taken_0x242df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF8u;
        // 0x242dfc: 0xa625056c  sh          $a1, 0x56C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242df8) {
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242E00u;
label_242e00:
    // 0x242e00: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242E00u;
    SET_GPR_U32(ctx, 31, 0x242E08u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242E00u, 0x242E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E08u;
label_242e08:
    // 0x242e08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x242e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e10: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x242e10u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x242e14: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242E14u;
    {
        const bool branch_taken_0x242e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e14) {
            ctx->pc = 0x242E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E14u;
            // 0x242e18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E1Cu;
            goto label_242e1c;
        }
    }
    ctx->pc = 0x242E1Cu;
label_242e1c:
    // 0x242e1c: 0x2810  mfhi        $a1
    ctx->pc = 0x242e1cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x242e20: 0x10a40027  beq         $a1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x242E20u;
    {
        const bool branch_taken_0x242e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x242E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E20u;
        // 0x242e24: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e20) {
            ctx->pc = 0x242EC0u;
            goto label_242ec0;
        }
    }
    ctx->pc = 0x242E28u;
    // 0x242e28: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x242E28u;
    {
        const bool branch_taken_0x242e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E28u;
        // 0x242e2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e28) {
            ctx->pc = 0x242EB8u;
            goto label_242eb8;
        }
    }
    ctx->pc = 0x242E30u;
    // 0x242e30: 0x54a20024  bnel        $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x242E30u;
    {
        const bool branch_taken_0x242e30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x242e30) {
            ctx->pc = 0x242E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E30u;
            // 0x242e34: 0xa620056c  sh          $zero, 0x56C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242E38u;
    // 0x242e38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x242E38u;
    {
        const bool branch_taken_0x242e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E38u;
        // 0x242e3c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e38) {
            ctx->pc = 0x242EC0u;
            goto label_242ec0;
        }
    }
    ctx->pc = 0x242E40u;
label_242e40:
    // 0x242e40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242E40u;
    SET_GPR_U32(ctx, 31, 0x242E48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242E40u, 0x242E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E48u;
label_242e48:
    // 0x242e48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x242e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242e4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e50: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x242e50u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x242e54: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242E54u;
    {
        const bool branch_taken_0x242e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e54) {
            ctx->pc = 0x242E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E54u;
            // 0x242e58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E5Cu;
            goto label_242e5c;
        }
    }
    ctx->pc = 0x242E5Cu;
label_242e5c:
    // 0x242e5c: 0x2810  mfhi        $a1
    ctx->pc = 0x242e5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x242e60: 0x10a40017  beq         $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x242E60u;
    {
        const bool branch_taken_0x242e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x242E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E60u;
        // 0x242e64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e60) {
            ctx->pc = 0x242EC0u;
            goto label_242ec0;
        }
    }
    ctx->pc = 0x242E68u;
    // 0x242e68: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x242E68u;
    {
        const bool branch_taken_0x242e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E68u;
        // 0x242e6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e68) {
            ctx->pc = 0x242EB8u;
            goto label_242eb8;
        }
    }
    ctx->pc = 0x242E70u;
    // 0x242e70: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x242E70u;
    {
        const bool branch_taken_0x242e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x242E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E70u;
        // 0x242e74: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e70) {
            ctx->pc = 0x242EC0u;
            goto label_242ec0;
        }
    }
    ctx->pc = 0x242E78u;
    // 0x242e78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x242E78u;
    {
        const bool branch_taken_0x242e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E78u;
        // 0x242e7c: 0xa620056c  sh          $zero, 0x56C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e78) {
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242E80u;
label_242e80:
    // 0x242e80: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242E80u;
    SET_GPR_U32(ctx, 31, 0x242E88u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242E80u, 0x242E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E88u;
label_242e88:
    // 0x242e88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242e8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e90: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x242e90u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x242e94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242E94u;
    {
        const bool branch_taken_0x242e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e94) {
            ctx->pc = 0x242E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E94u;
            // 0x242e98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E9Cu;
            goto label_242e9c;
        }
    }
    ctx->pc = 0x242E9Cu;
label_242e9c:
    // 0x242e9c: 0x2810  mfhi        $a1
    ctx->pc = 0x242e9cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x242ea0: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x242EA0u;
    {
        const bool branch_taken_0x242ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x242EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EA0u;
        // 0x242ea4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ea0) {
            ctx->pc = 0x242EC0u;
            goto label_242ec0;
        }
    }
    ctx->pc = 0x242EA8u;
    // 0x242ea8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x242EA8u;
    {
        const bool branch_taken_0x242ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EA8u;
        // 0x242eac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ea8) {
            ctx->pc = 0x242EB8u;
            goto label_242eb8;
        }
    }
    ctx->pc = 0x242EB0u;
    // 0x242eb0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242EB0u;
    {
        const bool branch_taken_0x242eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x242EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EB0u;
        // 0x242eb4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242eb0) {
            ctx->pc = 0x242EC0u;
            goto label_242ec0;
        }
    }
    ctx->pc = 0x242EB8u;
label_242eb8:
    // 0x242eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x242EB8u;
    {
        const bool branch_taken_0x242eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EB8u;
        // 0x242ebc: 0xa620056c  sh          $zero, 0x56C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242eb8) {
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242EC0u;
label_242ec0:
    // 0x242ec0: 0xa622056c  sh          $v0, 0x56C($s1)
    ctx->pc = 0x242ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 2));
label_242ec4:
    // 0x242ec4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x242EC4u;
    SET_GPR_U32(ctx, 31, 0x242ECCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x242EC4u, 0x242ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242ECCu;
label_242ecc:
    // 0x242ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x242ed0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242ED0u;
    {
        const bool branch_taken_0x242ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242ed0) {
            ctx->pc = 0x242ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242ED0u;
            // 0x242ed4: 0xa620056c  sh          $zero, 0x56C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242ED8u;
            goto label_242ed8;
        }
    }
    ctx->pc = 0x242ED8u;
label_242ed8:
    // 0x242ed8: 0x8622056c  lh          $v0, 0x56C($s1)
    ctx->pc = 0x242ed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1388)));
    // 0x242edc: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x242edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x242ee0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x242EE0u;
    {
        const bool branch_taken_0x242ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242ee0) {
            ctx->pc = 0x242EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242EE0u;
            // 0x242ee4: 0x8623056c  lh          $v1, 0x56C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242EF4u;
            goto label_242ef4;
        }
    }
    ctx->pc = 0x242EE8u;
    // 0x242ee8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x242ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x242eec: 0xa622056c  sh          $v0, 0x56C($s1)
    ctx->pc = 0x242eecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 2));
    // 0x242ef0: 0x8623056c  lh          $v1, 0x56C($s1)
    ctx->pc = 0x242ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1388)));
label_242ef4:
    // 0x242ef4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x242ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x242ef8: 0x24425040  addiu       $v0, $v0, 0x5040
    ctx->pc = 0x242ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20544));
    // 0x242efc: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x242efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x242f00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x242f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x242f04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242f08: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x242F08u;
    {
        const bool branch_taken_0x242f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x242f08) {
            ctx->pc = 0x242F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F08u;
            // 0x242f0c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242F2Cu;
            goto label_242f2c;
        }
    }
    ctx->pc = 0x242F10u;
    // 0x242f10: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x242f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f14: 0xe6200580  swc1        $f0, 0x580($s1)
    ctx->pc = 0x242f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
    // 0x242f18: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x242f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f1c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x242f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x242f20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x242f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f24: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x242f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x242f28: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x242f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_242f2c:
    // 0x242f2c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x242f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242f30: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x242f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x242f34: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x242f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242f38: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x242f38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242f3c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x242f3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x242f40: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x242f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x242f44: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x242f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242f48: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x242f48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242f4c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x242f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x242f50: 0x26300590  addiu       $s0, $s1, 0x590
    ctx->pc = 0x242f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x242f54: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x242F54u;
    {
        const bool branch_taken_0x242f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x242F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F54u;
        // 0x242f58: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f54) {
            ctx->pc = 0x242F70u;
            goto label_242f70;
        }
    }
    ctx->pc = 0x242F5Cu;
    // 0x242f5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x242f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f60: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x242f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x242f64: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x242f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x242f68: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x242f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f6c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x242f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_242f70:
    // 0x242f70: 0xae200594  sw          $zero, 0x594($s1)
    ctx->pc = 0x242f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1428), GPR_U32(ctx, 0));
    // 0x242f74: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x242f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x242f78: 0xc04078a  jal         func_101E28
    ctx->pc = 0x242F78u;
    SET_GPR_U32(ctx, 31, 0x242F80u);
    ctx->pc = 0x242F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F78u;
    // 0x242f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x242F78u, 0x242F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F80u;
label_242f80:
    // 0x242f80: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x242f80u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x242f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242f88: 0x0  nop
    ctx->pc = 0x242f88u;
    // NOP
    // 0x242f8c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x242f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242f90: 0x0  nop
    ctx->pc = 0x242f90u;
    // NOP
    // 0x242f94: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x242F94u;
    {
        const bool branch_taken_0x242f94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242f94) {
            ctx->pc = 0x242FDCu;
            goto label_242fdc;
        }
    }
    ctx->pc = 0x242F9Cu;
    // 0x242f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242fa0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x242fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x242fa4: 0xc6210590  lwc1        $f1, 0x590($s1)
    ctx->pc = 0x242fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242fa8: 0x0  nop
    ctx->pc = 0x242fa8u;
    // NOP
    // 0x242fac: 0x0  nop
    ctx->pc = 0x242facu;
    // NOP
    // 0x242fb0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x242fb0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x242fb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x242fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x242fb8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x242fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x242fbc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x242fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242fc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x242fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x242fc4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x242fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x242fc8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x242fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242fcc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x242fccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x242fd0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x242fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x242fd4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x242fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242fd8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x242fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_242fdc:
    // 0x242fdc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x242fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242fe0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x242fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x242fe4: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x242FE4u;
    {
        const bool branch_taken_0x242fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x242FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FE4u;
        // 0x242fe8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fe4) {
            ctx->pc = 0x243000u;
            goto label_243000;
        }
    }
    ctx->pc = 0x242FECu;
    // 0x242fec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x242fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242ff0: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x242ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x242ff4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x242ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x242ff8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x242ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242ffc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x242ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_243000:
    // 0x243000: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x243000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x243004: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x243004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x243008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24300c: 0xda240590  lqc2        $vf4, 0x590($s1)
    ctx->pc = 0x24300cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1424)));
    // 0x243010: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x243010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x243014: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x243014u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x243018: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x243018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24301c: 0xfa240590  sqc2        $vf4, 0x590($s1)
    ctx->pc = 0x24301cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x243020: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x243024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243028: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x24302c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x24302cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x243030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243034: 0xe6210600  swc1        $f1, 0x600($s1)
    ctx->pc = 0x243034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x243038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24303c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x24303cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x243040: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x243040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x243044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243048: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24304c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24304cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243050: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x243050u;
    SET_GPR_U32(ctx, 31, 0x243058u);
    ctx->pc = 0x243054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243050u;
    // 0x243054: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x243050u, 0x243058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243058u;
label_243058:
    // 0x243058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24305c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243060: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x243060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x243064: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x243064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243068: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x243068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24306c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24306cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243070: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x243070u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243074: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x243074u;
    SET_GPR_U32(ctx, 31, 0x24307Cu);
    ctx->pc = 0x243078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243074u;
    // 0x243078: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x243074u, 0x24307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24307Cu;
label_24307c:
    // 0x24307c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x24307cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x243080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x243080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x243084: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x243084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_243088:
    // 0x243088: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x243088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24308c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x24308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243090: 0x26220590  addiu       $v0, $s1, 0x590
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x243094: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x243094u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243098: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x243098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24309c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x24309cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2430a0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2430a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2430a4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2430a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2430a8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2430a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2430ac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2430acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2430b0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2430b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2430b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2430b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2430b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2430bc: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2430BCu;
    {
        const bool branch_taken_0x2430bc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2430C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430BCu;
        // 0x2430c0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430bc) {
            ctx->pc = 0x2430D8u;
            goto label_2430d8;
        }
    }
    ctx->pc = 0x2430C4u;
    // 0x2430c4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2430c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2430c8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2430c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2430cc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2430ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2430d0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2430d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2430d4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2430d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2430d8:
    // 0x2430d8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2430d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2430dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2430dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2430e0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2430e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2430e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2430e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2430e8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2430e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2430ec: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2430ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430f0: 0x26300580  addiu       $s0, $s1, 0x580
    ctx->pc = 0x2430f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x2430f4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2430f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2430f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2430f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2430fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2430fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243108: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243108u;
    SET_GPR_U32(ctx, 31, 0x243110u);
    ctx->pc = 0x24310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243108u;
    // 0x24310c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243108u, 0x243110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243110u;
label_243110:
    // 0x243110: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243110u;
    SET_GPR_U32(ctx, 31, 0x243118u);
    ctx->pc = 0x243114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243110u;
    // 0x243114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243110u, 0x243118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243118u;
label_243118:
    // 0x243118: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x243118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x24311c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x24311Cu;
    SET_GPR_U32(ctx, 31, 0x243124u);
    ctx->pc = 0x243120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24311Cu;
    // 0x243120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x24311Cu, 0x243124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243124u;
label_243124:
    // 0x243124: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x243124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x243128: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24312c: 0x0  nop
    ctx->pc = 0x24312cu;
    // NOP
    // 0x243130: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243134: 0x0  nop
    ctx->pc = 0x243134u;
    // NOP
    // 0x243138: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x243138u;
    {
        const bool branch_taken_0x243138 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243138u;
        // 0x24313c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243138) {
            ctx->pc = 0x243164u;
            goto label_243164;
        }
    }
    ctx->pc = 0x243140u;
    // 0x243140: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x243140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243144: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x243144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243148: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x243148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24314c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24314cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243150: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x243150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243154: 0x0  nop
    ctx->pc = 0x243154u;
    // NOP
    // 0x243158: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x243158u;
    {
        const bool branch_taken_0x243158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243158u;
        // 0x24315c: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243158) {
            ctx->pc = 0x24316Cu;
            goto label_24316c;
        }
    }
    ctx->pc = 0x243160u;
    // 0x243160: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x243160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_243164:
    // 0x243164: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x243164u;
    {
        const bool branch_taken_0x243164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243164u;
        // 0x243168: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243164) {
            ctx->pc = 0x243358u;
            goto label_243358;
        }
    }
    ctx->pc = 0x24316Cu;
label_24316c:
    // 0x24316c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x24316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x243170: 0xc6211738  lwc1        $f1, 0x1738($s1)
    ctx->pc = 0x243170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243174: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x243174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243178: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x243178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x24317c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x24317cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x243180: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x243180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243184: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x243184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x243188: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x243188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24318c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x24318cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x243190: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x243190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243194: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x243194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x243198: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x243198u;
    {
        const bool branch_taken_0x243198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243198u;
        // 0x24319c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243198) {
            ctx->pc = 0x2433E4u;
            goto label_2433e4;
        }
    }
    ctx->pc = 0x2431A0u;
label_2431a0:
    // 0x2431a0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2431A0u;
    SET_GPR_U32(ctx, 31, 0x2431A8u);
    ctx->pc = 0x2431A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431A0u;
    // 0x2431a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2431A0u, 0x2431A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431A8u;
label_2431a8:
    // 0x2431a8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2431a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2431ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2431acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2431b0: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2431b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_2431b4:
    // 0x2431b4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2431B4u;
    SET_GPR_U32(ctx, 31, 0x2431BCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2431B4u, 0x2431BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431BCu;
label_2431bc:
    // 0x2431bc: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2431bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2431c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2431c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431c4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2431c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2431c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2431c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2431cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2431ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2431d0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2431d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2431d4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2431D4u;
    SET_GPR_U32(ctx, 31, 0x2431DCu);
    ctx->pc = 0x2431D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431D4u;
    // 0x2431d8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2431D4u, 0x2431DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431DCu;
label_2431dc:
    // 0x2431dc: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2431dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2431e0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2431e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2431e4: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x2431e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x2431e8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2431e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2431ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2431ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2431f0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2431f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2431f4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2431f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2431f8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2431f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2431fc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2431fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x243200: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x243200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x243204: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x243204u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243208: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x243208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24320c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x24320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243210: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x243210u;
    {
        const bool branch_taken_0x243210 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x243214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243210u;
        // 0x243214: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243210) {
            ctx->pc = 0x24322Cu;
            goto label_24322c;
        }
    }
    ctx->pc = 0x243218u;
    // 0x243218: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x243218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24321c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x24321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243220: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x243220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x243224: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x243224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x243228: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x243228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24322c:
    // 0x24322c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x24322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x243230: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x243230u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243234: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x243234u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243238: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x243238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24323c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24323cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x243240: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x243240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243244: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x243244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x243248: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x243248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24324c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24324cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243258: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x243258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24325c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24325cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243260: 0xda240590  lqc2        $vf4, 0x590($s1)
    ctx->pc = 0x243260u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1424)));
    // 0x243264: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x243264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x243268: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x243268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x24326c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x24326cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x243270: 0xfa240590  sqc2        $vf4, 0x590($s1)
    ctx->pc = 0x243270u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x243274: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x243274u;
    SET_GPR_U32(ctx, 31, 0x24327Cu);
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x243274u, 0x24327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24327Cu;
label_24327c:
    // 0x24327c: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x24327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
    // 0x243280: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x243280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x243284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243288: 0x0  nop
    ctx->pc = 0x243288u;
    // NOP
    // 0x24328c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24328cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243290: 0x0  nop
    ctx->pc = 0x243290u;
    // NOP
    // 0x243294: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x243294u;
    {
        const bool branch_taken_0x243294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243294) {
            ctx->pc = 0x243350u;
            goto label_243350;
        }
    }
    ctx->pc = 0x24329Cu;
    // 0x24329c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24329Cu;
    SET_GPR_U32(ctx, 31, 0x2432A4u);
    ctx->pc = 0x2432A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24329Cu;
    // 0x2432a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24329Cu, 0x2432A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432A4u;
label_2432a4:
    // 0x2432a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2432a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2432a8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2432A8u;
    {
        const bool branch_taken_0x2432a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2432a8) {
            ctx->pc = 0x2432ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2432A8u;
            // 0x2432ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2432BCu;
            goto label_2432bc;
        }
    }
    ctx->pc = 0x2432B0u;
    // 0x2432b0: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x2432b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x2432b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2432B4u;
    {
        const bool branch_taken_0x2432b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2432b4) {
            ctx->pc = 0x2432B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2432B4u;
            // 0x2432b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2432BCu;
            goto label_2432bc;
        }
    }
    ctx->pc = 0x2432BCu;
label_2432bc:
    // 0x2432bc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2432BCu;
    SET_GPR_U32(ctx, 31, 0x2432C4u);
    ctx->pc = 0x2432C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432BCu;
    // 0x2432c0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2432BCu, 0x2432C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432C4u;
label_2432c4:
    // 0x2432c4: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x2432c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x2432c8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x2432c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x2432cc: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2432ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2432d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2432d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2432d4: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x2432D4u;
    SET_GPR_U32(ctx, 31, 0x2432DCu);
    ctx->pc = 0x2432D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432D4u;
    // 0x2432d8: 0x3900a  movz        $s2, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x2432D4u, 0x2432DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432DCu;
label_2432dc:
    // 0x2432dc: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x2432dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2432e0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2432E0u;
    SET_GPR_U32(ctx, 31, 0x2432E8u);
    ctx->pc = 0x2432E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432E0u;
    // 0x2432e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2432E0u, 0x2432E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432E8u;
label_2432e8:
    // 0x2432e8: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x2432e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2432ec: 0x52400015  beql        $s2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2432ECu;
    {
        const bool branch_taken_0x2432ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2432ec) {
            ctx->pc = 0x2432F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2432ECu;
            // 0x2432f0: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243344u;
            goto label_243344;
        }
    }
    ctx->pc = 0x2432F4u;
    // 0x2432f4: 0xc09bcca  jal         func_26F328
    ctx->pc = 0x2432F4u;
    SET_GPR_U32(ctx, 31, 0x2432FCu);
    ctx->pc = 0x2432F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432F4u;
    // 0x2432f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F328u, 0x2432F4u, 0x2432FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432FCu;
label_2432fc:
    // 0x2432fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2432FCu;
    {
        const bool branch_taken_0x2432fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2432fc) {
            ctx->pc = 0x243318u;
            goto label_243318;
        }
    }
    ctx->pc = 0x243304u;
    // 0x243304: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x243304u;
    SET_GPR_U32(ctx, 31, 0x24330Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x243304u, 0x24330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24330Cu;
label_24330c:
    // 0x24330c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243310: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x243310u;
    {
        const bool branch_taken_0x243310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243310u;
        // 0x243314: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243310) {
            ctx->pc = 0x243330u;
            goto label_243330;
        }
    }
    ctx->pc = 0x243318u;
label_243318:
    // 0x243318: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x243318u;
    SET_GPR_U32(ctx, 31, 0x243320u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x243318u, 0x243320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243320u;
label_243320:
    // 0x243320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243324: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x243324u;
    {
        const bool branch_taken_0x243324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243324u;
        // 0x243328: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243324) {
            ctx->pc = 0x243330u;
            goto label_243330;
        }
    }
    ctx->pc = 0x24332Cu;
    // 0x24332c: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x24332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_243330:
    // 0x243330: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x243330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x243334: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x243334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x243338: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x243338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24333c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24333Cu;
    {
        const bool branch_taken_0x24333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24333Cu;
        // 0x243340: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24333c) {
            ctx->pc = 0x243350u;
            goto label_243350;
        }
    }
    ctx->pc = 0x243344u;
label_243344:
    // 0x243344: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x243344u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x243348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24334c: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x24334cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_243350:
    // 0x243350: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243350u;
    SET_GPR_U32(ctx, 31, 0x243358u);
    ctx->pc = 0x243354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243350u;
    // 0x243354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243350u, 0x243358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243358u;
label_243358:
    // 0x243358: 0xc621172c  lwc1        $f1, 0x172C($s1)
    ctx->pc = 0x243358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24335c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24335cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243360: 0x0  nop
    ctx->pc = 0x243360u;
    // NOP
    // 0x243364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243368: 0x0  nop
    ctx->pc = 0x243368u;
    // NOP
    // 0x24336c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24336Cu;
    {
        const bool branch_taken_0x24336c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24336Cu;
        // 0x243370: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24336c) {
            ctx->pc = 0x243388u;
            goto label_243388;
        }
    }
    ctx->pc = 0x243374u;
    // 0x243374: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x243374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x243378: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x243378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24337c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x24337cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x243380: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x243380u;
    {
        const bool branch_taken_0x243380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243380u;
        // 0x243384: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243380) {
            ctx->pc = 0x2433E8u;
            goto label_2433e8;
        }
    }
    ctx->pc = 0x243388u;
label_243388:
    // 0x243388: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x243388u;
    SET_GPR_U32(ctx, 31, 0x243390u);
    ctx->pc = 0x24338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243388u;
    // 0x24338c: 0xc62c060c  lwc1        $f12, 0x60C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x243388u, 0x243390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243390u;
label_243390:
    // 0x243390: 0xc62305a8  lwc1        $f3, 0x5A8($s1)
    ctx->pc = 0x243390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243394: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x243394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x243398: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x243398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x24339c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24339cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2433a0: 0xc622060c  lwc1        $f2, 0x60C($s1)
    ctx->pc = 0x2433a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2433a4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2433a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2433a8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2433a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2433ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2433acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2433b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2433b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2433b4: 0x0  nop
    ctx->pc = 0x2433b4u;
    // NOP
    // 0x2433b8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2433b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2433bc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2433bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2433c0: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x2433c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x2433c4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2433C4u;
    SET_GPR_U32(ctx, 31, 0x2433CCu);
    ctx->pc = 0x2433C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433C4u;
    // 0x2433c8: 0xe622060c  swc1        $f2, 0x60C($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2433C4u, 0x2433CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433CCu;
label_2433cc:
    // 0x2433cc: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x2433ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2433d0: 0xe620060c  swc1        $f0, 0x60C($s1)
    ctx->pc = 0x2433d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1548), bits); }
    // 0x2433d4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2433d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2433d8: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2433d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2433dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2433dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2433e0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2433e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2433e4:
    // 0x2433e4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2433e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2433e8:
    // 0x2433e8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2433e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2433ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2433ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2433f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2433f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2433f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2433f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2433f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2433f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2433fc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2433fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x243400: 0x3e00008  jr          $ra
    ctx->pc = 0x243400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243400u;
        // 0x243404: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243408u;
}
