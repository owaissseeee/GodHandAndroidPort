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

// Function: setbuf__9streambufPci
// Address: 0x38b218 - 0x38b2f8
void setbuf__9streambufPci_0x38b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setbuf__9streambufPci_0x38b218");
#endif

    switch (ctx->pc) {
        case 0x38b218u: goto label_38b218;
        case 0x38b21cu: goto label_38b21c;
        case 0x38b220u: goto label_38b220;
        case 0x38b224u: goto label_38b224;
        case 0x38b228u: goto label_38b228;
        case 0x38b22cu: goto label_38b22c;
        case 0x38b230u: goto label_38b230;
        case 0x38b234u: goto label_38b234;
        case 0x38b238u: goto label_38b238;
        case 0x38b23cu: goto label_38b23c;
        case 0x38b240u: goto label_38b240;
        case 0x38b244u: goto label_38b244;
        case 0x38b248u: goto label_38b248;
        case 0x38b24cu: goto label_38b24c;
        case 0x38b250u: goto label_38b250;
        case 0x38b254u: goto label_38b254;
        case 0x38b258u: goto label_38b258;
        case 0x38b25cu: goto label_38b25c;
        case 0x38b260u: goto label_38b260;
        case 0x38b264u: goto label_38b264;
        case 0x38b268u: goto label_38b268;
        case 0x38b26cu: goto label_38b26c;
        case 0x38b270u: goto label_38b270;
        case 0x38b274u: goto label_38b274;
        case 0x38b278u: goto label_38b278;
        case 0x38b27cu: goto label_38b27c;
        case 0x38b280u: goto label_38b280;
        case 0x38b284u: goto label_38b284;
        case 0x38b288u: goto label_38b288;
        case 0x38b28cu: goto label_38b28c;
        case 0x38b290u: goto label_38b290;
        case 0x38b294u: goto label_38b294;
        case 0x38b298u: goto label_38b298;
        case 0x38b29cu: goto label_38b29c;
        case 0x38b2a0u: goto label_38b2a0;
        case 0x38b2a4u: goto label_38b2a4;
        case 0x38b2a8u: goto label_38b2a8;
        case 0x38b2acu: goto label_38b2ac;
        case 0x38b2b0u: goto label_38b2b0;
        case 0x38b2b4u: goto label_38b2b4;
        case 0x38b2b8u: goto label_38b2b8;
        case 0x38b2bcu: goto label_38b2bc;
        case 0x38b2c0u: goto label_38b2c0;
        case 0x38b2c4u: goto label_38b2c4;
        case 0x38b2c8u: goto label_38b2c8;
        case 0x38b2ccu: goto label_38b2cc;
        case 0x38b2d0u: goto label_38b2d0;
        case 0x38b2d4u: goto label_38b2d4;
        case 0x38b2d8u: goto label_38b2d8;
        case 0x38b2dcu: goto label_38b2dc;
        case 0x38b2e0u: goto label_38b2e0;
        case 0x38b2e4u: goto label_38b2e4;
        case 0x38b2e8u: goto label_38b2e8;
        case 0x38b2ecu: goto label_38b2ec;
        case 0x38b2f0u: goto label_38b2f0;
        case 0x38b2f4u: goto label_38b2f4;
        default: break;
    }

    ctx->pc = 0x38b218u;

label_38b218:
    // 0x38b218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38b21c:
    // 0x38b21c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_38b220:
    // 0x38b220: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_38b224:
    // 0x38b224: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38b224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38b228:
    // 0x38b228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38b22c:
    // 0x38b22c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38b22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b230:
    // 0x38b230: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38b234:
    // 0x38b234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b238:
    // 0x38b238: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38b23c:
    // 0x38b23c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x38b23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_38b240:
    // 0x38b240: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x38b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_38b244:
    // 0x38b244: 0x40f809  jalr        $v0
label_38b248:
    if (ctx->pc == 0x38B248u) {
        ctx->pc = 0x38B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B244u;
        // 0x38b248: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B24Cu;
        goto label_38b24c;
    }
    ctx->pc = 0x38B244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B24Cu);
        ctx->pc = 0x38B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B244u;
        // 0x38b248: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B244u, 0x38B24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B24Cu;
label_38b24c:
    // 0x38b24c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38b250:
    // 0x38b250: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_38b254:
    if (ctx->pc == 0x38B254u) {
        ctx->pc = 0x38B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B250u;
        // 0x38b254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B258u;
        goto label_38b258;
    }
    ctx->pc = 0x38B250u;
    {
        const bool branch_taken_0x38b250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B250u;
        // 0x38b254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b250) {
            ctx->pc = 0x38B2DCu;
            goto label_38b2dc;
        }
    }
    ctx->pc = 0x38B258u;
label_38b258:
    // 0x38b258: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_38b25c:
    if (ctx->pc == 0x38B25Cu) {
        ctx->pc = 0x38B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B258u;
        // 0x38b25c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B260u;
        goto label_38b260;
    }
    ctx->pc = 0x38B258u;
    {
        const bool branch_taken_0x38b258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B258u;
        // 0x38b25c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b258) {
            ctx->pc = 0x38B268u;
            goto label_38b268;
        }
    }
    ctx->pc = 0x38B260u;
label_38b260:
    // 0x38b260: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_38b264:
    if (ctx->pc == 0x38B264u) {
        ctx->pc = 0x38B268u;
        goto label_38b268;
    }
    ctx->pc = 0x38B260u;
    {
        const bool branch_taken_0x38b260 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b260) {
            ctx->pc = 0x38B28Cu;
            goto label_38b28c;
        }
    }
    ctx->pc = 0x38B268u;
label_38b268:
    // 0x38b268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b26c:
    // 0x38b26c: 0x2605004b  addiu       $a1, $s0, 0x4B
    ctx->pc = 0x38b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 75));
label_38b270:
    // 0x38b270: 0x2606004c  addiu       $a2, $s0, 0x4C
    ctx->pc = 0x38b270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_38b274:
    // 0x38b274: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38b274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_38b278:
    // 0x38b278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38b278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b27c:
    // 0x38b27c: 0xc0e2cd2  jal         func_38B348
label_38b280:
    if (ctx->pc == 0x38B280u) {
        ctx->pc = 0x38B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B27Cu;
        // 0x38b280: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B284u;
        goto label_38b284;
    }
    ctx->pc = 0x38B27Cu;
    SET_GPR_U32(ctx, 31, 0x38B284u);
    ctx->pc = 0x38B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B27Cu;
    // 0x38b280: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B348u, 0x38B27Cu, 0x38B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B284u;
label_38b284:
    // 0x38b284: 0x1000000a  b           . + 4 + (0xA << 2)
label_38b288:
    if (ctx->pc == 0x38B288u) {
        ctx->pc = 0x38B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B284u;
        // 0x38b288: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B28Cu;
        goto label_38b28c;
    }
    ctx->pc = 0x38B284u;
    {
        const bool branch_taken_0x38b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B284u;
        // 0x38b288: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b284) {
            ctx->pc = 0x38B2B0u;
            goto label_38b2b0;
        }
    }
    ctx->pc = 0x38B28Cu;
label_38b28c:
    // 0x38b28c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x38b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_38b290:
    // 0x38b290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38b290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b294:
    // 0x38b294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b298:
    // 0x38b298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38b29c:
    // 0x38b29c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x38b29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_38b2a0:
    // 0x38b2a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38b2a4:
    // 0x38b2a4: 0xc0e2cd2  jal         func_38B348
label_38b2a8:
    if (ctx->pc == 0x38B2A8u) {
        ctx->pc = 0x38B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2A4u;
        // 0x38b2a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2ACu;
        goto label_38b2ac;
    }
    ctx->pc = 0x38B2A4u;
    SET_GPR_U32(ctx, 31, 0x38B2ACu);
    ctx->pc = 0x38B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B2A4u;
    // 0x38b2a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B348u, 0x38B2A4u, 0x38B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B2ACu;
label_38b2ac:
    // 0x38b2ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38b2b0:
    // 0x38b2b0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x38b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_38b2b4:
    // 0x38b2b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_38b2b8:
    // 0x38b2b8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x38b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_38b2bc:
    // 0x38b2bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b2c0:
    if (ctx->pc == 0x38B2C0u) {
        ctx->pc = 0x38B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2BCu;
        // 0x38b2c0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2C4u;
        goto label_38b2c4;
    }
    ctx->pc = 0x38B2BCu;
    {
        const bool branch_taken_0x38b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2BCu;
        // 0x38b2c0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2bc) {
            ctx->pc = 0x38B2CCu;
            goto label_38b2cc;
        }
    }
    ctx->pc = 0x38B2C4u;
label_38b2c4:
    // 0x38b2c4: 0xc0e30e8  jal         func_38C3A0
label_38b2c8:
    if (ctx->pc == 0x38B2C8u) {
        ctx->pc = 0x38B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2C4u;
        // 0x38b2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2CCu;
        goto label_38b2cc;
    }
    ctx->pc = 0x38B2C4u;
    SET_GPR_U32(ctx, 31, 0x38B2CCu);
    ctx->pc = 0x38B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B2C4u;
    // 0x38b2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38B2C4u, 0x38B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B2CCu;
label_38b2cc:
    // 0x38b2cc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38b2d0:
    // 0x38b2d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38b2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b2d4:
    // 0x38b2d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x38b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_38b2d8:
    // 0x38b2d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38b2dc:
    // 0x38b2dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38b2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38b2e0:
    // 0x38b2e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38b2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b2e4:
    // 0x38b2e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38b2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38b2e8:
    // 0x38b2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38b2ec:
    // 0x38b2ec: 0x3e00008  jr          $ra
label_38b2f0:
    if (ctx->pc == 0x38B2F0u) {
        ctx->pc = 0x38B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2ECu;
        // 0x38b2f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2F4u;
        goto label_38b2f4;
    }
    ctx->pc = 0x38B2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2ECu;
        // 0x38b2f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B2F4u;
label_38b2f4:
    // 0x38b2f4: 0x0  nop
    ctx->pc = 0x38b2f4u;
    // NOP
    ctx->pc = 0x38b2f8u;
}
