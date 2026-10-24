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

// Function: func_0032B1C8
// Address: 0x32b1c8 - 0x32b300
void func_0032B1C8_0x32b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B1C8_0x32b1c8");
#endif

    switch (ctx->pc) {
        case 0x32b1c8u: goto label_32b1c8;
        case 0x32b1ccu: goto label_32b1cc;
        case 0x32b1d0u: goto label_32b1d0;
        case 0x32b1d4u: goto label_32b1d4;
        case 0x32b1d8u: goto label_32b1d8;
        case 0x32b1dcu: goto label_32b1dc;
        case 0x32b1e0u: goto label_32b1e0;
        case 0x32b1e4u: goto label_32b1e4;
        case 0x32b1e8u: goto label_32b1e8;
        case 0x32b1ecu: goto label_32b1ec;
        case 0x32b1f0u: goto label_32b1f0;
        case 0x32b1f4u: goto label_32b1f4;
        case 0x32b1f8u: goto label_32b1f8;
        case 0x32b1fcu: goto label_32b1fc;
        case 0x32b200u: goto label_32b200;
        case 0x32b204u: goto label_32b204;
        case 0x32b208u: goto label_32b208;
        case 0x32b20cu: goto label_32b20c;
        case 0x32b210u: goto label_32b210;
        case 0x32b214u: goto label_32b214;
        case 0x32b218u: goto label_32b218;
        case 0x32b21cu: goto label_32b21c;
        case 0x32b220u: goto label_32b220;
        case 0x32b224u: goto label_32b224;
        case 0x32b228u: goto label_32b228;
        case 0x32b22cu: goto label_32b22c;
        case 0x32b230u: goto label_32b230;
        case 0x32b234u: goto label_32b234;
        case 0x32b238u: goto label_32b238;
        case 0x32b23cu: goto label_32b23c;
        case 0x32b240u: goto label_32b240;
        case 0x32b244u: goto label_32b244;
        case 0x32b248u: goto label_32b248;
        case 0x32b24cu: goto label_32b24c;
        case 0x32b250u: goto label_32b250;
        case 0x32b254u: goto label_32b254;
        case 0x32b258u: goto label_32b258;
        case 0x32b25cu: goto label_32b25c;
        case 0x32b260u: goto label_32b260;
        case 0x32b264u: goto label_32b264;
        case 0x32b268u: goto label_32b268;
        case 0x32b26cu: goto label_32b26c;
        case 0x32b270u: goto label_32b270;
        case 0x32b274u: goto label_32b274;
        case 0x32b278u: goto label_32b278;
        case 0x32b27cu: goto label_32b27c;
        case 0x32b280u: goto label_32b280;
        case 0x32b284u: goto label_32b284;
        case 0x32b288u: goto label_32b288;
        case 0x32b28cu: goto label_32b28c;
        case 0x32b290u: goto label_32b290;
        case 0x32b294u: goto label_32b294;
        case 0x32b298u: goto label_32b298;
        case 0x32b29cu: goto label_32b29c;
        case 0x32b2a0u: goto label_32b2a0;
        case 0x32b2a4u: goto label_32b2a4;
        case 0x32b2a8u: goto label_32b2a8;
        case 0x32b2acu: goto label_32b2ac;
        case 0x32b2b0u: goto label_32b2b0;
        case 0x32b2b4u: goto label_32b2b4;
        case 0x32b2b8u: goto label_32b2b8;
        case 0x32b2bcu: goto label_32b2bc;
        case 0x32b2c0u: goto label_32b2c0;
        case 0x32b2c4u: goto label_32b2c4;
        case 0x32b2c8u: goto label_32b2c8;
        case 0x32b2ccu: goto label_32b2cc;
        case 0x32b2d0u: goto label_32b2d0;
        case 0x32b2d4u: goto label_32b2d4;
        case 0x32b2d8u: goto label_32b2d8;
        case 0x32b2dcu: goto label_32b2dc;
        case 0x32b2e0u: goto label_32b2e0;
        case 0x32b2e4u: goto label_32b2e4;
        case 0x32b2e8u: goto label_32b2e8;
        case 0x32b2ecu: goto label_32b2ec;
        case 0x32b2f0u: goto label_32b2f0;
        case 0x32b2f4u: goto label_32b2f4;
        case 0x32b2f8u: goto label_32b2f8;
        case 0x32b2fcu: goto label_32b2fc;
        default: break;
    }

    ctx->pc = 0x32b1c8u;

label_32b1c8:
    // 0x32b1c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32b1cc:
    // 0x32b1cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32b1d0:
    // 0x32b1d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32b1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32b1d4:
    // 0x32b1d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_32b1d8:
    // 0x32b1d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32b1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32b1dc:
    // 0x32b1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32b1e0:
    // 0x32b1e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32b1e4:
    // 0x32b1e4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_32b1e8:
    if (ctx->pc == 0x32B1E8u) {
        ctx->pc = 0x32B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1E4u;
        // 0x32b1e8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1ECu;
        goto label_32b1ec;
    }
    ctx->pc = 0x32B1E4u;
    {
        const bool branch_taken_0x32b1e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1E4u;
        // 0x32b1e8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b1e4) {
            ctx->pc = 0x32B210u;
            goto label_32b210;
        }
    }
    ctx->pc = 0x32B1ECu;
label_32b1ec:
    // 0x32b1ec: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32b1f0:
    // 0x32b1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32b1f4:
    // 0x32b1f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32b1f8:
    // 0x32b1f8: 0x24842560  addiu       $a0, $a0, 0x2560
    ctx->pc = 0x32b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9568));
label_32b1fc:
    // 0x32b1fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32b1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32b200:
    // 0x32b200: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32b200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32b204:
    // 0x32b204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b208:
    // 0x32b208: 0x80cfc4c  j           func_33F130
label_32b20c:
    if (ctx->pc == 0x32B20Cu) {
        ctx->pc = 0x32B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B208u;
        // 0x32b20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B210u;
        goto label_32b210;
    }
    ctx->pc = 0x32B208u;
    ctx->pc = 0x32B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B208u;
    // 0x32b20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32B208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B210u;
label_32b210:
    // 0x32b210: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x32b210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_32b214:
    // 0x32b214: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_32b218:
    if (ctx->pc == 0x32B218u) {
        ctx->pc = 0x32B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B214u;
        // 0x32b218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B21Cu;
        goto label_32b21c;
    }
    ctx->pc = 0x32B214u;
    {
        const bool branch_taken_0x32b214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B214u;
        // 0x32b218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b214) {
            ctx->pc = 0x32B230u;
            goto label_32b230;
        }
    }
    ctx->pc = 0x32B21Cu;
label_32b21c:
    // 0x32b21c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b220:
    // 0x32b220: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32b224:
    // 0x32b224: 0x40f809  jalr        $v0
label_32b228:
    if (ctx->pc == 0x32B228u) {
        ctx->pc = 0x32B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B224u;
        // 0x32b228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B22Cu;
        goto label_32b22c;
    }
    ctx->pc = 0x32B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B22Cu);
        ctx->pc = 0x32B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B224u;
        // 0x32b228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B224u, 0x32B22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B22Cu;
label_32b22c:
    // 0x32b22c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b230:
    // 0x32b230: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x32b230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_32b234:
    // 0x32b234: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32b238:
    // 0x32b238: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_32b23c:
    if (ctx->pc == 0x32B23Cu) {
        ctx->pc = 0x32B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B238u;
        // 0x32b23c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B240u;
        goto label_32b240;
    }
    ctx->pc = 0x32B238u;
    {
        const bool branch_taken_0x32b238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B238u;
        // 0x32b23c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b238) {
            ctx->pc = 0x32B2D4u;
            goto label_32b2d4;
        }
    }
    ctx->pc = 0x32B240u;
label_32b240:
    // 0x32b240: 0x8223006c  lb          $v1, 0x6C($s1)
    ctx->pc = 0x32b240u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_32b244:
    // 0x32b244: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_32b248:
    if (ctx->pc == 0x32B248u) {
        ctx->pc = 0x32B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B244u;
        // 0x32b248: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B24Cu;
        goto label_32b24c;
    }
    ctx->pc = 0x32B244u;
    {
        const bool branch_taken_0x32b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32b244) {
            ctx->pc = 0x32B248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B244u;
            // 0x32b248: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B2D8u;
            goto label_32b2d8;
        }
    }
    ctx->pc = 0x32B24Cu;
label_32b24c:
    // 0x32b24c: 0x56600022  bnel        $s3, $zero, . + 4 + (0x22 << 2)
label_32b250:
    if (ctx->pc == 0x32B250u) {
        ctx->pc = 0x32B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B24Cu;
        // 0x32b250: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B254u;
        goto label_32b254;
    }
    ctx->pc = 0x32B24Cu;
    {
        const bool branch_taken_0x32b24c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b24c) {
            ctx->pc = 0x32B250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B24Cu;
            // 0x32b250: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B2D8u;
            goto label_32b2d8;
        }
    }
    ctx->pc = 0x32B254u;
label_32b254:
    // 0x32b254: 0xc0c9dc2  jal         func_327708
label_32b258:
    if (ctx->pc == 0x32B258u) {
        ctx->pc = 0x32B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B254u;
        // 0x32b258: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B25Cu;
        goto label_32b25c;
    }
    ctx->pc = 0x32B254u;
    SET_GPR_U32(ctx, 31, 0x32B25Cu);
    ctx->pc = 0x32B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B254u;
    // 0x32b258: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327708u, 0x32B254u, 0x32B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B25Cu;
label_32b25c:
    // 0x32b25c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32b260:
    // 0x32b260: 0xc0c9e0c  jal         func_327830
label_32b264:
    if (ctx->pc == 0x32B264u) {
        ctx->pc = 0x32B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B260u;
        // 0x32b264: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B268u;
        goto label_32b268;
    }
    ctx->pc = 0x32B260u;
    SET_GPR_U32(ctx, 31, 0x32B268u);
    ctx->pc = 0x32B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B260u;
    // 0x32b264: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327830u, 0x32B260u, 0x32B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B268u;
label_32b268:
    // 0x32b268: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32b268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32b26c:
    // 0x32b26c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b270:
    // 0x32b270: 0x260207ff  addiu       $v0, $s0, 0x7FF
    ctx->pc = 0x32b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_32b274:
    // 0x32b274: 0x26050ffe  addiu       $a1, $s0, 0xFFE
    ctx->pc = 0x32b274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4094));
label_32b278:
    // 0x32b278: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x32b278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_32b27c:
    // 0x32b27c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x32b27cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_32b280:
    // 0x32b280: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x32b280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_32b284:
    // 0x32b284: 0xc0c9e1e  jal         func_327878
label_32b288:
    if (ctx->pc == 0x32B288u) {
        ctx->pc = 0x32B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B284u;
        // 0x32b288: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B28Cu;
        goto label_32b28c;
    }
    ctx->pc = 0x32B284u;
    SET_GPR_U32(ctx, 31, 0x32B28Cu);
    ctx->pc = 0x32B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B284u;
    // 0x32b288: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327878u, 0x32B284u, 0x32B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B28Cu;
label_32b28c:
    // 0x32b28c: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x32b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_32b290:
    // 0x32b290: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x32b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
label_32b294:
    // 0x32b294: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x32b294u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_32b298:
    // 0x32b298: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x32b298u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_32b29c:
    // 0x32b29c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x32b29cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_32b2a0:
    // 0x32b2a0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x32b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_32b2a4:
    // 0x32b2a4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x32b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_32b2a8:
    // 0x32b2a8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_32b2ac:
    if (ctx->pc == 0x32B2ACu) {
        ctx->pc = 0x32B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2A8u;
        // 0x32b2ac: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2B0u;
        goto label_32b2b0;
    }
    ctx->pc = 0x32B2A8u;
    {
        const bool branch_taken_0x32b2a8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x32B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2A8u;
        // 0x32b2ac: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2a8) {
            ctx->pc = 0x32B2B8u;
            goto label_32b2b8;
        }
    }
    ctx->pc = 0x32B2B0u;
label_32b2b0:
    // 0x32b2b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_32b2b4:
    if (ctx->pc == 0x32B2B4u) {
        ctx->pc = 0x32B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2B0u;
        // 0x32b2b4: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2B8u;
        goto label_32b2b8;
    }
    ctx->pc = 0x32B2B0u;
    {
        const bool branch_taken_0x32b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2B0u;
        // 0x32b2b4: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2b0) {
            ctx->pc = 0x32B2D4u;
            goto label_32b2d4;
        }
    }
    ctx->pc = 0x32B2B8u;
label_32b2b8:
    // 0x32b2b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_32b2bc:
    if (ctx->pc == 0x32B2BCu) {
        ctx->pc = 0x32B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2B8u;
        // 0x32b2bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2C0u;
        goto label_32b2c0;
    }
    ctx->pc = 0x32B2B8u;
    {
        const bool branch_taken_0x32b2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b2b8) {
            ctx->pc = 0x32B2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B2B8u;
            // 0x32b2bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B2C0u;
            goto label_32b2c0;
        }
    }
    ctx->pc = 0x32B2C0u;
label_32b2c0:
    // 0x32b2c0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x32b2c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32b2c4:
    // 0x32b2c4: 0x1012  mflo        $v0
    ctx->pc = 0x32b2c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_32b2c8:
    // 0x32b2c8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x32b2c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_32b2cc:
    // 0x32b2cc: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x32b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_32b2d0:
    // 0x32b2d0: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x32b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_32b2d4:
    // 0x32b2d4: 0xa233006c  sb          $s3, 0x6C($s1)
    ctx->pc = 0x32b2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
label_32b2d8:
    // 0x32b2d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32b2dc:
    // 0x32b2dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b2dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32b2e0:
    // 0x32b2e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32b2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32b2e4:
    // 0x32b2e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32b2e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32b2e8:
    // 0x32b2e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b2ec:
    // 0x32b2ec: 0x3e00008  jr          $ra
label_32b2f0:
    if (ctx->pc == 0x32B2F0u) {
        ctx->pc = 0x32B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2ECu;
        // 0x32b2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2F4u;
        goto label_32b2f4;
    }
    ctx->pc = 0x32B2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2ECu;
        // 0x32b2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B2F4u;
label_32b2f4:
    // 0x32b2f4: 0x0  nop
    ctx->pc = 0x32b2f4u;
    // NOP
label_32b2f8:
    // 0x32b2f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32b2fc:
    // 0x32b2fc: 0x0  nop
    ctx->pc = 0x32b2fcu;
    // NOP
    ctx->pc = 0x32b300u;
}
