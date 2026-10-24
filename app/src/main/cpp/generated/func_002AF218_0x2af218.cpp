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

// Function: func_002AF218
// Address: 0x2af218 - 0x2af348
void func_002AF218_0x2af218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF218_0x2af218");
#endif

    switch (ctx->pc) {
        case 0x2af300u: goto label_2af300;
        case 0x2af314u: goto label_2af314;
        default: break;
    }

    ctx->pc = 0x2af218u;

    // 0x2af218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af21c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af220: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2af220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af224: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2af224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2af228: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2AF228u;
    {
        const bool branch_taken_0x2af228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF228u;
        // 0x2af22c: 0x3063ff00  andi        $v1, $v1, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af228) {
            ctx->pc = 0x2AF338u;
            goto label_2af338;
        }
    }
    ctx->pc = 0x2AF230u;
    // 0x2af230: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x2af230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2af234: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AF234u;
    {
        const bool branch_taken_0x2af234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF234u;
        // 0x2af238: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af234) {
            ctx->pc = 0x2AF2E0u;
            goto label_2af2e0;
        }
    }
    ctx->pc = 0x2AF23Cu;
    // 0x2af23c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF23Cu;
    {
        const bool branch_taken_0x2af23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF23Cu;
        // 0x2af240: 0x3402a400  ori         $v0, $zero, 0xA400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41984);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af23c) {
            ctx->pc = 0x2AF27Cu;
            goto label_2af27c;
        }
    }
    ctx->pc = 0x2AF244u;
    // 0x2af244: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x2af244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x2af248: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AF248u;
    {
        const bool branch_taken_0x2af248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF248u;
        // 0x2af24c: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af248) {
            ctx->pc = 0x2AF324u;
            goto label_2af324;
        }
    }
    ctx->pc = 0x2AF250u;
    // 0x2af250: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF250u;
    {
        const bool branch_taken_0x2af250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF250u;
        // 0x2af254: 0x34029300  ori         $v0, $zero, 0x9300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af250) {
            ctx->pc = 0x2AF260u;
            goto label_2af260;
        }
    }
    ctx->pc = 0x2AF258u;
    // 0x2af258: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2AF258u;
    {
        const bool branch_taken_0x2af258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF258u;
        // 0x2af25c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af258) {
            ctx->pc = 0x2AF2E0u;
            goto label_2af2e0;
        }
    }
    ctx->pc = 0x2AF260u;
label_2af260:
    // 0x2af260: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AF260u;
    {
        const bool branch_taken_0x2af260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2af260) {
            ctx->pc = 0x2AF264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF260u;
            // 0x2af264: 0x94830002  lhu         $v1, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF2E8u;
            goto label_2af2e8;
        }
    }
    ctx->pc = 0x2AF268u;
    // 0x2af268: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x2af268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x2af26c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AF26Cu;
    {
        const bool branch_taken_0x2af26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF26Cu;
        // 0x2af270: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af26c) {
            ctx->pc = 0x2AF308u;
            goto label_2af308;
        }
    }
    ctx->pc = 0x2AF274u;
    // 0x2af274: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2AF274u;
    {
        const bool branch_taken_0x2af274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF274u;
        // 0x2af278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af274) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF27Cu;
label_2af27c:
    // 0x2af27c: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF27Cu;
    {
        const bool branch_taken_0x2af27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2af27c) {
            ctx->pc = 0x2AF280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF27Cu;
            // 0x2af280: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF2BCu;
            goto label_2af2bc;
        }
    }
    ctx->pc = 0x2AF284u;
    // 0x2af284: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2af284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2af288: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF288u;
    {
        const bool branch_taken_0x2af288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF288u;
        // 0x2af28c: 0x3402a500  ori         $v0, $zero, 0xA500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af288) {
            ctx->pc = 0x2AF2A4u;
            goto label_2af2a4;
        }
    }
    ctx->pc = 0x2AF290u;
    // 0x2af290: 0x3402a100  ori         $v0, $zero, 0xA100
    ctx->pc = 0x2af290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41216);
    // 0x2af294: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AF294u;
    {
        const bool branch_taken_0x2af294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af294) {
            ctx->pc = 0x2AF298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF294u;
            // 0x2af298: 0x3402a300  ori         $v0, $zero, 0xA300 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41728);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF2E0u;
            goto label_2af2e0;
        }
    }
    ctx->pc = 0x2AF29Cu;
    // 0x2af29c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2AF29Cu;
    {
        const bool branch_taken_0x2af29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF29Cu;
        // 0x2af2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af29c) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF2A4u;
label_2af2a4:
    // 0x2af2a4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF2A4u;
    {
        const bool branch_taken_0x2af2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2A4u;
        // 0x2af2a8: 0x3402a900  ori         $v0, $zero, 0xA900 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2a4) {
            ctx->pc = 0x2AF2E0u;
            goto label_2af2e0;
        }
    }
    ctx->pc = 0x2AF2ACu;
    // 0x2af2ac: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF2ACu;
    {
        const bool branch_taken_0x2af2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2ACu;
        // 0x2af2b0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2ac) {
            ctx->pc = 0x2AF2CCu;
            goto label_2af2cc;
        }
    }
    ctx->pc = 0x2AF2B4u;
    // 0x2af2b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2AF2B4u;
    {
        const bool branch_taken_0x2af2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2B4u;
        // 0x2af2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2b4) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF2BCu;
label_2af2bc:
    // 0x2af2bc: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x2af2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x2af2c0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2af2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2af2c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2AF2C4u;
    {
        const bool branch_taken_0x2af2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2C4u;
        // 0x2af2c8: 0x3042fffc  andi        $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2c4) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF2CCu;
label_2af2cc:
    // 0x2af2cc: 0x24040384  addiu       $a0, $zero, 0x384
    ctx->pc = 0x2af2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x2af2d0: 0x946223a8  lhu         $v0, 0x23A8($v1)
    ctx->pc = 0x2af2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 9128)));
    // 0x2af2d4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2af2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2af2d8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2AF2D8u;
    {
        const bool branch_taken_0x2af2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2D8u;
        // 0x2af2dc: 0x3042fffc  andi        $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2d8) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF2E0u;
label_2af2e0:
    // 0x2af2e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AF2E0u;
    {
        const bool branch_taken_0x2af2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2E0u;
        // 0x2af2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2e0) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF2E8u;
label_2af2e8:
    // 0x2af2e8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2af2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2af2ec: 0x8c8223a4  lw          $v0, 0x23A4($a0)
    ctx->pc = 0x2af2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2af2f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af2f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2f8: 0xc0abcd2  jal         func_2AF348
    ctx->pc = 0x2AF2F8u;
    SET_GPR_U32(ctx, 31, 0x2AF300u);
    ctx->pc = 0x2AF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2F8u;
    // 0x2af2fc: 0x8c440bdc  lw          $a0, 0xBDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3036)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF348u, 0x2AF2F8u, 0x2AF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF300u;
label_2af300:
    // 0x2af300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF300u;
    {
        const bool branch_taken_0x2af300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF300u;
        // 0x2af304: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af300) {
            ctx->pc = 0x2AF318u;
            goto label_2af318;
        }
    }
    ctx->pc = 0x2AF308u;
label_2af308:
    // 0x2af308: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x2af308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    // 0x2af30c: 0xc0abce0  jal         func_2AF380
    ctx->pc = 0x2AF30Cu;
    SET_GPR_U32(ctx, 31, 0x2AF314u);
    ctx->pc = 0x2AF310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF30Cu;
    // 0x2af310: 0x94640bee  lhu         $a0, 0xBEE($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3054)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF380u, 0x2AF30Cu, 0x2AF314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF314u;
label_2af314:
    // 0x2af314: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2af314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2af318:
    // 0x2af318: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2af318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2af31c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF31Cu;
    {
        const bool branch_taken_0x2af31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF31Cu;
        // 0x2af320: 0x3042fffe  andi        $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af31c) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF324u;
label_2af324:
    // 0x2af324: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x2af324u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2af328: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2af328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2af32c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2af32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af330: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF330u;
    {
        const bool branch_taken_0x2af330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF330u;
        // 0x2af334: 0xa46423a8  sh          $a0, 0x23A8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 9128), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af330) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF338u;
label_2af338:
    // 0x2af338: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2af338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2af33c:
    // 0x2af33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af340: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF340u;
        // 0x2af344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF348u;
}
