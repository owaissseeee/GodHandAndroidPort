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

// Function: func_00248FE0
// Address: 0x248fe0 - 0x249250
void func_00248FE0_0x248fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00248FE0_0x248fe0");
#endif

    switch (ctx->pc) {
        case 0x249078u: goto label_249078;
        case 0x2490d4u: goto label_2490d4;
        case 0x24910cu: goto label_24910c;
        case 0x24912cu: goto label_24912c;
        case 0x249138u: goto label_249138;
        case 0x249148u: goto label_249148;
        case 0x249188u: goto label_249188;
        case 0x2491a8u: goto label_2491a8;
        case 0x2491bcu: goto label_2491bc;
        case 0x2491ecu: goto label_2491ec;
        case 0x2491fcu: goto label_2491fc;
        case 0x24920cu: goto label_24920c;
        case 0x249220u: goto label_249220;
        case 0x24922cu: goto label_24922c;
        default: break;
    }

    ctx->pc = 0x248fe0u;

    // 0x248fe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x248fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x248fe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248fe8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x248fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x248fec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x248fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x248ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ff4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x248ff8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x248ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x248ffc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x248ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x249000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249004: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x249004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x249008: 0xa2030617  sb          $v1, 0x617($s0)
    ctx->pc = 0x249008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 3));
    // 0x24900c: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x24900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x249010: 0x8605054a  lh          $a1, 0x54A($s0)
    ctx->pc = 0x249010u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x249014: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x249014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x249018: 0x1ca00005  bgtz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249018u;
    {
        const bool branch_taken_0x249018 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x24901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249018u;
        // 0x24901c: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249018) {
            ctx->pc = 0x249030u;
            goto label_249030;
        }
    }
    ctx->pc = 0x249020u;
    // 0x249020: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x249020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x249024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249028: 0x0  nop
    ctx->pc = 0x249028u;
    // NOP
    // 0x24902c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x24902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_249030:
    // 0x249030: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x249030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249038: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x249038u;
    {
        const bool branch_taken_0x249038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249038u;
        // 0x24903c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249038) {
            ctx->pc = 0x2490F4u;
            goto label_2490f4;
        }
    }
    ctx->pc = 0x249040u;
    // 0x249040: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x249040u;
    {
        const bool branch_taken_0x249040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249040) {
            ctx->pc = 0x249044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249040u;
            // 0x249044: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249058u;
            goto label_249058;
        }
    }
    ctx->pc = 0x249048u;
    // 0x249048: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x249048u;
    {
        const bool branch_taken_0x249048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249048) {
            ctx->pc = 0x249070u;
            goto label_249070;
        }
    }
    ctx->pc = 0x249050u;
    // 0x249050: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x249050u;
    {
        const bool branch_taken_0x249050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249050u;
        // 0x249054: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249050) {
            ctx->pc = 0x249230u;
            goto label_249230;
        }
    }
    ctx->pc = 0x249058u;
label_249058:
    // 0x249058: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x249058u;
    {
        const bool branch_taken_0x249058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249058u;
        // 0x24905c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249058) {
            ctx->pc = 0x249140u;
            goto label_249140;
        }
    }
    ctx->pc = 0x249060u;
    // 0x249060: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x249060u;
    {
        const bool branch_taken_0x249060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x249060) {
            ctx->pc = 0x2491B4u;
            goto label_2491b4;
        }
    }
    ctx->pc = 0x249068u;
    // 0x249068: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x249068u;
    {
        const bool branch_taken_0x249068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249068u;
        // 0x24906c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249068) {
            ctx->pc = 0x249230u;
            goto label_249230;
        }
    }
    ctx->pc = 0x249070u;
label_249070:
    // 0x249070: 0xc09d91a  jal         func_276468
    ctx->pc = 0x249070u;
    SET_GPR_U32(ctx, 31, 0x249078u);
    ctx->pc = 0x249074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249070u;
    // 0x249074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x249070u, 0x249078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249078u;
label_249078:
    // 0x249078: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x249078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x24907c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24907Cu;
    {
        const bool branch_taken_0x24907c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24907Cu;
        // 0x249080: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24907c) {
            ctx->pc = 0x249094u;
            goto label_249094;
        }
    }
    ctx->pc = 0x249084u;
    // 0x249084: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x249084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249088: 0x8c433978  lw          $v1, 0x3978($v0)
    ctx->pc = 0x249088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14712)));
    // 0x24908c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24908Cu;
    {
        const bool branch_taken_0x24908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24908Cu;
        // 0x249090: 0x8c44397c  lw          $a0, 0x397C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24908c) {
            ctx->pc = 0x2490A0u;
            goto label_2490a0;
        }
    }
    ctx->pc = 0x249094u;
label_249094:
    // 0x249094: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x249094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249098: 0x8c433990  lw          $v1, 0x3990($v0)
    ctx->pc = 0x249098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14736)));
    // 0x24909c: 0x8c443994  lw          $a0, 0x3994($v0)
    ctx->pc = 0x24909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14740)));
label_2490a0:
    // 0x2490a0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2490a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2490a4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2490a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2490a8: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2490a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2490ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2490acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2490b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2490b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2490b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2490b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2490bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490c0: 0xe6001764  swc1        $f0, 0x1764($s0)
    ctx->pc = 0x2490c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5988), bits); }
    // 0x2490c4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2490c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490c8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2490cc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2490CCu;
    SET_GPR_U32(ctx, 31, 0x2490D4u);
    ctx->pc = 0x2490D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490CCu;
    // 0x2490d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2490CCu, 0x2490D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490D4u;
label_2490d4:
    // 0x2490d4: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x2490d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2490d8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2490d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x2490dc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2490dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2490e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2490e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2490e4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2490e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2490e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2490e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2490ec: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x2490ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x2490f0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2490f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_2490f4:
    // 0x2490f4: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2490f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2490f8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2490f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2490fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2490fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249100: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x249100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x249104: 0xc055f06  jal         func_157C18
    ctx->pc = 0x249104u;
    SET_GPR_U32(ctx, 31, 0x24910Cu);
    ctx->pc = 0x249108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249104u;
    // 0x249108: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x249104u, 0x24910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24910Cu;
label_24910c:
    // 0x24910c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24910Cu;
    {
        const bool branch_taken_0x24910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24910Cu;
        // 0x249110: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24910c) {
            ctx->pc = 0x249118u;
            goto label_249118;
        }
    }
    ctx->pc = 0x249114u;
    // 0x249114: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x249114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_249118:
    // 0x249118: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24911c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24911cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x249120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249124: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x249124u;
    SET_GPR_U32(ctx, 31, 0x24912Cu);
    ctx->pc = 0x249128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249124u;
    // 0x249128: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x249124u, 0x24912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24912Cu;
label_24912c:
    // 0x24912c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249130: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x249130u;
    SET_GPR_U32(ctx, 31, 0x249138u);
    ctx->pc = 0x249134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249130u;
    // 0x249134: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x249130u, 0x249138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249138u;
label_249138:
    // 0x249138: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x249138u;
    {
        const bool branch_taken_0x249138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249138u;
        // 0x24913c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249138) {
            ctx->pc = 0x249230u;
            goto label_249230;
        }
    }
    ctx->pc = 0x249140u;
label_249140:
    // 0x249140: 0xc09d91a  jal         func_276468
    ctx->pc = 0x249140u;
    SET_GPR_U32(ctx, 31, 0x249148u);
    ctx->pc = 0x249144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249140u;
    // 0x249144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x249140u, 0x249148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249148u;
label_249148:
    // 0x249148: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x249148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x24914c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24914Cu;
    {
        const bool branch_taken_0x24914c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24914Cu;
        // 0x249150: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24914c) {
            ctx->pc = 0x249164u;
            goto label_249164;
        }
    }
    ctx->pc = 0x249154u;
    // 0x249154: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x249154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249158: 0x8c433980  lw          $v1, 0x3980($v0)
    ctx->pc = 0x249158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14720)));
    // 0x24915c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24915Cu;
    {
        const bool branch_taken_0x24915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24915Cu;
        // 0x249160: 0x8c443984  lw          $a0, 0x3984($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24915c) {
            ctx->pc = 0x249170u;
            goto label_249170;
        }
    }
    ctx->pc = 0x249164u;
label_249164:
    // 0x249164: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x249164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249168: 0x8c433998  lw          $v1, 0x3998($v0)
    ctx->pc = 0x249168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14744)));
    // 0x24916c: 0x8c44399c  lw          $a0, 0x399C($v0)
    ctx->pc = 0x24916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14748)));
label_249170:
    // 0x249170: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249174: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x249174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x249178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24917c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24917cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249180: 0xc0c1880  jal         func_306200
    ctx->pc = 0x249180u;
    SET_GPR_U32(ctx, 31, 0x249188u);
    ctx->pc = 0x249184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249180u;
    // 0x249184: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x249180u, 0x249188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249188u;
label_249188:
    // 0x249188: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x249188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24918c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24918cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x249190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249194: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x249194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24919c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24919cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2491a0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2491A0u;
    SET_GPR_U32(ctx, 31, 0x2491A8u);
    ctx->pc = 0x2491A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491A0u;
    // 0x2491a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2491A0u, 0x2491A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491A8u;
label_2491a8:
    // 0x2491a8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2491a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2491ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2491acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2491b0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2491b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2491b4:
    // 0x2491b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2491B4u;
    SET_GPR_U32(ctx, 31, 0x2491BCu);
    ctx->pc = 0x2491B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491B4u;
    // 0x2491b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2491B4u, 0x2491BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491BCu;
label_2491bc:
    // 0x2491bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2491BCu;
    {
        const bool branch_taken_0x2491bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2491bc) {
            ctx->pc = 0x24920Cu;
            goto label_24920c;
        }
    }
    ctx->pc = 0x2491C4u;
    // 0x2491c4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2491c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2491c8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2491C8u;
    {
        const bool branch_taken_0x2491c8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2491CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491C8u;
        // 0x2491cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491c8) {
            ctx->pc = 0x2491E4u;
            goto label_2491e4;
        }
    }
    ctx->pc = 0x2491D0u;
    // 0x2491d0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2491d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2491d4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2491d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2491d8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x2491d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2491dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2491DCu;
    {
        const bool branch_taken_0x2491dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491DCu;
        // 0x2491e0: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491dc) {
            ctx->pc = 0x24922Cu;
            goto label_24922c;
        }
    }
    ctx->pc = 0x2491E4u;
label_2491e4:
    // 0x2491e4: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2491E4u;
    SET_GPR_U32(ctx, 31, 0x2491ECu);
    ctx->pc = 0x2491E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491E4u;
    // 0x2491e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2491E4u, 0x2491ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491ECu;
label_2491ec:
    // 0x2491ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2491ECu;
    {
        const bool branch_taken_0x2491ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2491ec) {
            ctx->pc = 0x249204u;
            goto label_249204;
        }
    }
    ctx->pc = 0x2491F4u;
    // 0x2491f4: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x2491F4u;
    SET_GPR_U32(ctx, 31, 0x2491FCu);
    ctx->pc = 0x2491F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491F4u;
    // 0x2491f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x2491F4u, 0x2491FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491FCu;
label_2491fc:
    // 0x2491fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2491FCu;
    {
        const bool branch_taken_0x2491fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491FCu;
        // 0x249200: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491fc) {
            ctx->pc = 0x249230u;
            goto label_249230;
        }
    }
    ctx->pc = 0x249204u;
label_249204:
    // 0x249204: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x249204u;
    SET_GPR_U32(ctx, 31, 0x24920Cu);
    ctx->pc = 0x249208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249204u;
    // 0x249208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x249204u, 0x24920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24920Cu;
label_24920c:
    // 0x24920c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24920cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249210: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x249210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x249214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249218: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x249218u;
    SET_GPR_U32(ctx, 31, 0x249220u);
    ctx->pc = 0x24921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249218u;
    // 0x24921c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x249218u, 0x249220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249220u;
label_249220:
    // 0x249220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249224: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x249224u;
    SET_GPR_U32(ctx, 31, 0x24922Cu);
    ctx->pc = 0x249228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249224u;
    // 0x249228: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x249224u, 0x24922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24922Cu;
label_24922c:
    // 0x24922c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24922cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_249230:
    // 0x249230: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x249230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x249234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249238: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x249238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24923c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24923cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249240: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x249240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x249244: 0x3e00008  jr          $ra
    ctx->pc = 0x249244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249244u;
        // 0x249248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24924Cu;
    // 0x24924c: 0x0  nop
    ctx->pc = 0x24924cu;
    // NOP
    ctx->pc = 0x249250u;
}
