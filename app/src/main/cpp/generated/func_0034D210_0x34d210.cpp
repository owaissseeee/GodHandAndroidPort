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

// Function: func_0034D210
// Address: 0x34d210 - 0x34d2d8
void func_0034D210_0x34d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034D210_0x34d210");
#endif

    switch (ctx->pc) {
        case 0x34d210u: goto label_34d210;
        case 0x34d214u: goto label_34d214;
        case 0x34d218u: goto label_34d218;
        case 0x34d21cu: goto label_34d21c;
        case 0x34d220u: goto label_34d220;
        case 0x34d224u: goto label_34d224;
        case 0x34d228u: goto label_34d228;
        case 0x34d22cu: goto label_34d22c;
        case 0x34d230u: goto label_34d230;
        case 0x34d234u: goto label_34d234;
        case 0x34d238u: goto label_34d238;
        case 0x34d23cu: goto label_34d23c;
        case 0x34d240u: goto label_34d240;
        case 0x34d244u: goto label_34d244;
        case 0x34d248u: goto label_34d248;
        case 0x34d24cu: goto label_34d24c;
        case 0x34d250u: goto label_34d250;
        case 0x34d254u: goto label_34d254;
        case 0x34d258u: goto label_34d258;
        case 0x34d25cu: goto label_34d25c;
        case 0x34d260u: goto label_34d260;
        case 0x34d264u: goto label_34d264;
        case 0x34d268u: goto label_34d268;
        case 0x34d26cu: goto label_34d26c;
        case 0x34d270u: goto label_34d270;
        case 0x34d274u: goto label_34d274;
        case 0x34d278u: goto label_34d278;
        case 0x34d27cu: goto label_34d27c;
        case 0x34d280u: goto label_34d280;
        case 0x34d284u: goto label_34d284;
        case 0x34d288u: goto label_34d288;
        case 0x34d28cu: goto label_34d28c;
        case 0x34d290u: goto label_34d290;
        case 0x34d294u: goto label_34d294;
        case 0x34d298u: goto label_34d298;
        case 0x34d29cu: goto label_34d29c;
        case 0x34d2a0u: goto label_34d2a0;
        case 0x34d2a4u: goto label_34d2a4;
        case 0x34d2a8u: goto label_34d2a8;
        case 0x34d2acu: goto label_34d2ac;
        case 0x34d2b0u: goto label_34d2b0;
        case 0x34d2b4u: goto label_34d2b4;
        case 0x34d2b8u: goto label_34d2b8;
        case 0x34d2bcu: goto label_34d2bc;
        case 0x34d2c0u: goto label_34d2c0;
        case 0x34d2c4u: goto label_34d2c4;
        case 0x34d2c8u: goto label_34d2c8;
        case 0x34d2ccu: goto label_34d2cc;
        case 0x34d2d0u: goto label_34d2d0;
        case 0x34d2d4u: goto label_34d2d4;
        default: break;
    }

    ctx->pc = 0x34d210u;

label_34d210:
    // 0x34d210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34d214:
    // 0x34d214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34d218:
    // 0x34d218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34d218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34d21c:
    // 0x34d21c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_34d220:
    // 0x34d220: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34d220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34d224:
    // 0x34d224: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x34d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_34d228:
    // 0x34d228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34d22c:
    // 0x34d22c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34d22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34d230:
    // 0x34d230: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34d230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34d234:
    // 0x34d234: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_34d238:
    // 0x34d238: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34d23c:
    // 0x34d23c: 0xc0d6872  jal         func_35A1C8
label_34d240:
    if (ctx->pc == 0x34D240u) {
        ctx->pc = 0x34D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D23Cu;
        // 0x34d240: 0x26330078  addiu       $s3, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D244u;
        goto label_34d244;
    }
    ctx->pc = 0x34D23Cu;
    SET_GPR_U32(ctx, 31, 0x34D244u);
    ctx->pc = 0x34D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D23Cu;
    // 0x34d240: 0x26330078  addiu       $s3, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34D23Cu, 0x34D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D244u;
label_34d244:
    // 0x34d244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34d248:
    // 0x34d248: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x34d248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_34d24c:
    // 0x34d24c: 0xc0d6872  jal         func_35A1C8
label_34d250:
    if (ctx->pc == 0x34D250u) {
        ctx->pc = 0x34D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D24Cu;
        // 0x34d250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D254u;
        goto label_34d254;
    }
    ctx->pc = 0x34D24Cu;
    SET_GPR_U32(ctx, 31, 0x34D254u);
    ctx->pc = 0x34D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D24Cu;
    // 0x34d250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34D24Cu, 0x34D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D254u;
label_34d254:
    // 0x34d254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34d258:
    // 0x34d258: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34d258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34d25c:
    // 0x34d25c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_34d260:
    if (ctx->pc == 0x34D260u) {
        ctx->pc = 0x34D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D25Cu;
        // 0x34d260: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D264u;
        goto label_34d264;
    }
    ctx->pc = 0x34D25Cu;
    {
        const bool branch_taken_0x34d25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D25Cu;
        // 0x34d260: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d25c) {
            ctx->pc = 0x34D26Cu;
            goto label_34d26c;
        }
    }
    ctx->pc = 0x34D264u;
label_34d264:
    // 0x34d264: 0x200f809  jalr        $s0
label_34d268:
    if (ctx->pc == 0x34D268u) {
        ctx->pc = 0x34D26Cu;
        goto label_34d26c;
    }
    ctx->pc = 0x34D264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x34D26Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D264u, 0x34D26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34D26Cu;
label_34d26c:
    // 0x34d26c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x34d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34d270:
    // 0x34d270: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_34d274:
    if (ctx->pc == 0x34D274u) {
        ctx->pc = 0x34D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D270u;
        // 0x34d274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D278u;
        goto label_34d278;
    }
    ctx->pc = 0x34D270u;
    {
        const bool branch_taken_0x34d270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D270u;
        // 0x34d274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d270) {
            ctx->pc = 0x34D2B4u;
            goto label_34d2b4;
        }
    }
    ctx->pc = 0x34D278u;
label_34d278:
    // 0x34d278: 0x2a420801  slti        $v0, $s2, 0x801
    ctx->pc = 0x34d278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2049) ? 1 : 0);
label_34d27c:
    // 0x34d27c: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x34d27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_34d280:
    // 0x34d280: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x34d280u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_34d284:
    // 0x34d284: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34d284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34d288:
    // 0x34d288: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34d288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34d28c:
    // 0x34d28c: 0xc0d9a58  jal         func_366960
label_34d290:
    if (ctx->pc == 0x34D290u) {
        ctx->pc = 0x34D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D28Cu;
        // 0x34d290: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D294u;
        goto label_34d294;
    }
    ctx->pc = 0x34D28Cu;
    SET_GPR_U32(ctx, 31, 0x34D294u);
    ctx->pc = 0x34D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D28Cu;
    // 0x34d290: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34D28Cu, 0x34D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D294u;
label_34d294:
    // 0x34d294: 0xae700090  sw          $s0, 0x90($s3)
    ctx->pc = 0x34d294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 16));
label_34d298:
    // 0x34d298: 0xc0d3528  jal         func_34D4A0
label_34d29c:
    if (ctx->pc == 0x34D29Cu) {
        ctx->pc = 0x34D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D298u;
        // 0x34d29c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D2A0u;
        goto label_34d2a0;
    }
    ctx->pc = 0x34D298u;
    SET_GPR_U32(ctx, 31, 0x34D2A0u);
    ctx->pc = 0x34D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D298u;
    // 0x34d29c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D4A0u, 0x34D298u, 0x34D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2A0u;
label_34d2a0:
    // 0x34d2a0: 0xc0d36b0  jal         func_34DAC0
label_34d2a4:
    if (ctx->pc == 0x34D2A4u) {
        ctx->pc = 0x34D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D2A0u;
        // 0x34d2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D2A8u;
        goto label_34d2a8;
    }
    ctx->pc = 0x34D2A0u;
    SET_GPR_U32(ctx, 31, 0x34D2A8u);
    ctx->pc = 0x34D2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D2A0u;
    // 0x34d2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DAC0u, 0x34D2A0u, 0x34D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2A8u;
label_34d2a8:
    // 0x34d2a8: 0xc0d34b6  jal         func_34D2D8
label_34d2ac:
    if (ctx->pc == 0x34D2ACu) {
        ctx->pc = 0x34D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D2A8u;
        // 0x34d2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D2B0u;
        goto label_34d2b0;
    }
    ctx->pc = 0x34D2A8u;
    SET_GPR_U32(ctx, 31, 0x34D2B0u);
    ctx->pc = 0x34D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D2A8u;
    // 0x34d2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D2D8u, 0x34D2A8u, 0x34D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2B0u;
label_34d2b0:
    // 0x34d2b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34d2b4:
    // 0x34d2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34d2b8:
    // 0x34d2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34d2bc:
    // 0x34d2bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34d2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34d2c0:
    // 0x34d2c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34d2c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34d2c4:
    // 0x34d2c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34d2c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34d2c8:
    // 0x34d2c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34d2cc:
    // 0x34d2cc: 0x3e00008  jr          $ra
label_34d2d0:
    if (ctx->pc == 0x34D2D0u) {
        ctx->pc = 0x34D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D2CCu;
        // 0x34d2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34D2D4u;
        goto label_34d2d4;
    }
    ctx->pc = 0x34D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D2CCu;
        // 0x34d2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D2D4u;
label_34d2d4:
    // 0x34d2d4: 0x0  nop
    ctx->pc = 0x34d2d4u;
    // NOP
    ctx->pc = 0x34d2d8u;
}
