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

// Function: func_002BA250
// Address: 0x2ba250 - 0x2ba300
void func_002BA250_0x2ba250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA250_0x2ba250");
#endif

    switch (ctx->pc) {
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        case 0x2ba2f8u: goto label_2ba2f8;
        case 0x2ba2fcu: goto label_2ba2fc;
        default: break;
    }

    ctx->pc = 0x2ba250u;

label_2ba250:
    // 0x2ba250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ba250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ba254:
    // 0x2ba254: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ba254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ba258:
    // 0x2ba258: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ba258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ba25c:
    // 0x2ba25c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ba25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ba260:
    // 0x2ba260: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ba260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba264:
    // 0x2ba264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba268:
    // 0x2ba268: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ba268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ba26c:
    // 0x2ba26c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2ba270:
    if (ctx->pc == 0x2BA270u) {
        ctx->pc = 0x2BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA26Cu;
        // 0x2ba270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA274u;
        goto label_2ba274;
    }
    ctx->pc = 0x2BA26Cu;
    {
        const bool branch_taken_0x2ba26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA26Cu;
        // 0x2ba270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba26c) {
            ctx->pc = 0x2BA2E0u;
            goto label_2ba2e0;
        }
    }
    ctx->pc = 0x2BA274u;
label_2ba274:
    // 0x2ba274: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ba274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2ba278:
    // 0x2ba278: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ba278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba27c:
    // 0x2ba27c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2ba27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2ba280:
    // 0x2ba280: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2ba280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ba284:
    // 0x2ba284: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ba284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ba288:
    // 0x2ba288: 0x30620603  andi        $v0, $v1, 0x603
    ctx->pc = 0x2ba288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1539);
label_2ba28c:
    // 0x2ba28c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2ba290:
    if (ctx->pc == 0x2BA290u) {
        ctx->pc = 0x2BA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA28Cu;
        // 0x2ba290: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA294u;
        goto label_2ba294;
    }
    ctx->pc = 0x2BA28Cu;
    {
        const bool branch_taken_0x2ba28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA28Cu;
        // 0x2ba290: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba28c) {
            ctx->pc = 0x2BA2CCu;
            goto label_2ba2cc;
        }
    }
    ctx->pc = 0x2BA294u;
label_2ba294:
    // 0x2ba294: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ba298:
    if (ctx->pc == 0x2BA298u) {
        ctx->pc = 0x2BA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA294u;
        // 0x2ba298: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA29Cu;
        goto label_2ba29c;
    }
    ctx->pc = 0x2BA294u;
    {
        const bool branch_taken_0x2ba294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA294u;
        // 0x2ba298: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba294) {
            ctx->pc = 0x2BA2C0u;
            goto label_2ba2c0;
        }
    }
    ctx->pc = 0x2BA29Cu;
label_2ba29c:
    // 0x2ba29c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2ba2a0:
    if (ctx->pc == 0x2BA2A0u) {
        ctx->pc = 0x2BA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA29Cu;
        // 0x2ba2a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2A4u;
        goto label_2ba2a4;
    }
    ctx->pc = 0x2BA29Cu;
    {
        const bool branch_taken_0x2ba29c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA29Cu;
        // 0x2ba2a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba29c) {
            ctx->pc = 0x2BA2B8u;
            goto label_2ba2b8;
        }
    }
    ctx->pc = 0x2BA2A4u;
label_2ba2a4:
    // 0x2ba2a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ba2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ba2a8:
    // 0x2ba2a8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2ba2a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2ba2ac:
    // 0x2ba2ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ba2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ba2b0:
    // 0x2ba2b0: 0x60f809  jalr        $v1
label_2ba2b4:
    if (ctx->pc == 0x2BA2B4u) {
        ctx->pc = 0x2BA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2B0u;
        // 0x2ba2b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2B8u;
        goto label_2ba2b8;
    }
    ctx->pc = 0x2BA2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA2B8u);
        ctx->pc = 0x2BA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2B0u;
        // 0x2ba2b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA2B0u, 0x2BA2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA2B8u;
label_2ba2b8:
    // 0x2ba2b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ba2bc:
    if (ctx->pc == 0x2BA2BCu) {
        ctx->pc = 0x2BA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2B8u;
        // 0x2ba2bc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2C0u;
        goto label_2ba2c0;
    }
    ctx->pc = 0x2BA2B8u;
    {
        const bool branch_taken_0x2ba2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2B8u;
        // 0x2ba2bc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2b8) {
            ctx->pc = 0x2BA2CCu;
            goto label_2ba2cc;
        }
    }
    ctx->pc = 0x2BA2C0u;
label_2ba2c0:
    // 0x2ba2c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2ba2c4:
    if (ctx->pc == 0x2BA2C4u) {
        ctx->pc = 0x2BA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2C0u;
        // 0x2ba2c4: 0x34620400  ori         $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2C8u;
        goto label_2ba2c8;
    }
    ctx->pc = 0x2BA2C0u;
    {
        const bool branch_taken_0x2ba2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2C0u;
        // 0x2ba2c4: 0x34620400  ori         $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2c0) {
            ctx->pc = 0x2BA2CCu;
            goto label_2ba2cc;
        }
    }
    ctx->pc = 0x2BA2C8u;
label_2ba2c8:
    // 0x2ba2c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ba2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ba2cc:
    // 0x2ba2cc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ba2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ba2d0:
    // 0x2ba2d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ba2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ba2d4:
    // 0x2ba2d4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2ba2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ba2d8:
    // 0x2ba2d8: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
label_2ba2dc:
    if (ctx->pc == 0x2BA2DCu) {
        ctx->pc = 0x2BA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D8u;
        // 0x2ba2dc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2E0u;
        goto label_2ba2e0;
    }
    ctx->pc = 0x2BA2D8u;
    {
        const bool branch_taken_0x2ba2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba2d8) {
            ctx->pc = 0x2BA2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA2D8u;
            // 0x2ba2dc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba278;
        }
    }
    ctx->pc = 0x2BA2E0u;
label_2ba2e0:
    // 0x2ba2e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ba2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ba2e4:
    // 0x2ba2e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba2e8:
    // 0x2ba2e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ba2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba2ec:
    // 0x2ba2ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ba2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba2f0:
    // 0x2ba2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba2f4:
    // 0x2ba2f4: 0x3e00008  jr          $ra
label_2ba2f8:
    if (ctx->pc == 0x2BA2F8u) {
        ctx->pc = 0x2BA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F4u;
        // 0x2ba2f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2FCu;
        goto label_2ba2fc;
    }
    ctx->pc = 0x2BA2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F4u;
        // 0x2ba2f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA2FCu;
label_2ba2fc:
    // 0x2ba2fc: 0x0  nop
    ctx->pc = 0x2ba2fcu;
    // NOP
    ctx->pc = 0x2ba300u;
}
