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

// Function: func_0033B218
// Address: 0x33b218 - 0x33b3b0
void func_0033B218_0x33b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B218_0x33b218");
#endif

    switch (ctx->pc) {
        case 0x33b268u: goto label_33b268;
        case 0x33b270u: goto label_33b270;
        case 0x33b298u: goto label_33b298;
        case 0x33b2acu: goto label_33b2ac;
        case 0x33b2b0u: goto label_33b2b0;
        case 0x33b300u: goto label_33b300;
        case 0x33b314u: goto label_33b314;
        case 0x33b318u: goto label_33b318;
        case 0x33b350u: goto label_33b350;
        case 0x33b364u: goto label_33b364;
        case 0x33b37cu: goto label_33b37c;
        default: break;
    }

    ctx->pc = 0x33b218u;

    // 0x33b218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33b21c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33b220: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x33b220u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x33b224: 0x8ea28dd4  lw          $v0, -0x722C($s5)
    ctx->pc = 0x33b224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8DD4u));
    // 0x33b228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33b22c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33b230: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33b234: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33b238: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33b23c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x33B23Cu;
    {
        const bool branch_taken_0x33b23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B23Cu;
        // 0x33b240: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b23c) {
            ctx->pc = 0x33B37Cu;
            goto label_33b37c;
        }
    }
    ctx->pc = 0x33B244u;
    // 0x33b244: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x33b244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x33b248: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x33b248u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x33b24c: 0x26109070  addiu       $s0, $s0, -0x6F90
    ctx->pc = 0x33b24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938736));
    // 0x33b250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b258: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x33b258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x33b25c: 0x240608d0  addiu       $a2, $zero, 0x8D0
    ctx->pc = 0x33b25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x33b260: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33B260u;
    SET_GPR_U32(ctx, 31, 0x33B268u);
    ctx->pc = 0x33B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B260u;
    // 0x33b264: 0x26938ddc  addiu       $s3, $s4, -0x7224 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33B260u, 0x33B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B268u;
label_33b268:
    // 0x33b268: 0xc0cc942  jal         func_332508
    ctx->pc = 0x33B268u;
    SET_GPR_U32(ctx, 31, 0x33B270u);
    ctx->pc = 0x33B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B268u;
    // 0x33b26c: 0x3c12003f  lui         $s2, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332508u, 0x33B268u, 0x33B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B270u;
label_33b270:
    // 0x33b270: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x33b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33b274: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x33b274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33b278: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x33b278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x33b27c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x33b27cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x33b280: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x33b280u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x33b284: 0xae44906c  sw          $a0, -0x6F94($s2)
    ctx->pc = 0x33b284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294938732), GPR_U32(ctx, 4));
    // 0x33b288: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33B288u;
    {
        const bool branch_taken_0x33b288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B288u;
        // 0x33b28c: 0xae308dd8  sw          $s0, -0x7228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b288) {
            ctx->pc = 0x33B2D0u;
            goto label_33b2d0;
        }
    }
    ctx->pc = 0x33B290u;
    // 0x33b290: 0xc0ed65a  jal         func_3B5968
    ctx->pc = 0x33B290u;
    SET_GPR_U32(ctx, 31, 0x33B298u);
    ctx->pc = 0x33B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B290u;
    // 0x33b294: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5968u, 0x33B290u, 0x33B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B298u;
label_33b298:
    // 0x33b298: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B298u;
    {
        const bool branch_taken_0x33b298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B298u;
        // 0x33b29c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b298) {
            ctx->pc = 0x33B2D0u;
            goto label_33b2d0;
        }
    }
    ctx->pc = 0x33B2A0u;
    // 0x33b2a0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33b2a4: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x33B2A4u;
    SET_GPR_U32(ctx, 31, 0x33B2ACu);
    ctx->pc = 0x33B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B2A4u;
    // 0x33b2a8: 0x24845dc8  addiu       $a0, $a0, 0x5DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33B2A4u, 0x33B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B2ACu;
label_33b2ac:
    // 0x33b2ac: 0x0  nop
    ctx->pc = 0x33b2acu;
    // NOP
label_33b2b0:
    // 0x33b2b0: 0x0  nop
    ctx->pc = 0x33b2b0u;
    // NOP
    // 0x33b2b4: 0x0  nop
    ctx->pc = 0x33b2b4u;
    // NOP
    // 0x33b2b8: 0x0  nop
    ctx->pc = 0x33b2b8u;
    // NOP
    // 0x33b2bc: 0x0  nop
    ctx->pc = 0x33b2bcu;
    // NOP
    // 0x33b2c0: 0x0  nop
    ctx->pc = 0x33b2c0u;
    // NOP
    // 0x33b2c4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x33B2C4u;
    {
        const bool branch_taken_0x33b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b2c4) {
            ctx->pc = 0x33B2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b2b0;
        }
    }
    ctx->pc = 0x33B2CCu;
    // 0x33b2cc: 0x0  nop
    ctx->pc = 0x33b2ccu;
    // NOP
label_33b2d0:
    // 0x33b2d0: 0x8e828ddc  lw          $v0, -0x7224($s4)
    ctx->pc = 0x33b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938076)));
    // 0x33b2d4: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x33b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33b2d8: 0x8e258dd8  lw          $a1, -0x7228($s1)
    ctx->pc = 0x33b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938072)));
    // 0x33b2dc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x33b2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x33b2e0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x33b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x33b2e4: 0x8e47906c  lw          $a3, -0x6F94($s2)
    ctx->pc = 0x33b2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938732)));
    // 0x33b2e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33b2ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33b2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33b2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2f4: 0xad028de0  sw          $v0, -0x7220($t0)
    ctx->pc = 0x33b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294938080), GPR_U32(ctx, 2));
    // 0x33b2f8: 0xc0cc85e  jal         func_332178
    ctx->pc = 0x33B2F8u;
    SET_GPR_U32(ctx, 31, 0x33B300u);
    ctx->pc = 0x33B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B2F8u;
    // 0x33b2fc: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332178u, 0x33B2F8u, 0x33B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B300u;
label_33b300:
    // 0x33b300: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B300u;
    {
        const bool branch_taken_0x33b300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B300u;
        // 0x33b304: 0xae029068  sw          $v0, -0x6F98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b300) {
            ctx->pc = 0x33B338u;
            goto label_33b338;
        }
    }
    ctx->pc = 0x33B308u;
    // 0x33b308: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33b30c: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x33B30Cu;
    SET_GPR_U32(ctx, 31, 0x33B314u);
    ctx->pc = 0x33B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B30Cu;
    // 0x33b310: 0x24845df8  addiu       $a0, $a0, 0x5DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33B30Cu, 0x33B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B314u;
label_33b314:
    // 0x33b314: 0x0  nop
    ctx->pc = 0x33b314u;
    // NOP
label_33b318:
    // 0x33b318: 0x0  nop
    ctx->pc = 0x33b318u;
    // NOP
    // 0x33b31c: 0x0  nop
    ctx->pc = 0x33b31cu;
    // NOP
    // 0x33b320: 0x0  nop
    ctx->pc = 0x33b320u;
    // NOP
    // 0x33b324: 0x0  nop
    ctx->pc = 0x33b324u;
    // NOP
    // 0x33b328: 0x0  nop
    ctx->pc = 0x33b328u;
    // NOP
    // 0x33b32c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x33B32Cu;
    {
        const bool branch_taken_0x33b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b32c) {
            ctx->pc = 0x33B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b318;
        }
    }
    ctx->pc = 0x33B334u;
    // 0x33b334: 0x0  nop
    ctx->pc = 0x33b334u;
    // NOP
label_33b338:
    // 0x33b338: 0x26109068  addiu       $s0, $s0, -0x6F98
    ctx->pc = 0x33b338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938728));
    // 0x33b33c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b340: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33b340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b344: 0x24a5b050  addiu       $a1, $a1, -0x4FB0
    ctx->pc = 0x33b344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946896));
    // 0x33b348: 0xc0cc8de  jal         func_332378
    ctx->pc = 0x33B348u;
    SET_GPR_U32(ctx, 31, 0x33B350u);
    ctx->pc = 0x33B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B348u;
    // 0x33b34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332378u, 0x33B348u, 0x33B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B350u;
label_33b350:
    // 0x33b350: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b354: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b358: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10
    ctx->pc = 0x33b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
    // 0x33b35c: 0xc0cc8e2  jal         func_332388
    ctx->pc = 0x33B35Cu;
    SET_GPR_U32(ctx, 31, 0x33B364u);
    ctx->pc = 0x33B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B35Cu;
    // 0x33b360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332388u, 0x33B35Cu, 0x33B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B364u;
label_33b364:
    // 0x33b364: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33b364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33b36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b374: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x33B374u;
    SET_GPR_U32(ctx, 31, 0x33B37Cu);
    ctx->pc = 0x33B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B374u;
    // 0x33b378: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x33B374u, 0x33B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B37Cu;
label_33b37c:
    // 0x33b37c: 0x26a38dd4  addiu       $v1, $s5, -0x722C
    ctx->pc = 0x33b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938068));
    // 0x33b380: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33b380u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33b384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b38c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b38cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b394: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33b394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b398: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33b398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b39c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33b39cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b3a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33b3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b3a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x33B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3A8u;
        // 0x33b3ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B3B0u;
}
