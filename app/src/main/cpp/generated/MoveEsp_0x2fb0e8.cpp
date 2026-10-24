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

// Function: MoveEsp
// Address: 0x2fb0e8 - 0x2fb310
void MoveEsp_0x2fb0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveEsp_0x2fb0e8");
#endif

    switch (ctx->pc) {
        case 0x2fb0e8u: goto label_2fb0e8;
        case 0x2fb0ecu: goto label_2fb0ec;
        case 0x2fb0f0u: goto label_2fb0f0;
        case 0x2fb0f4u: goto label_2fb0f4;
        case 0x2fb0f8u: goto label_2fb0f8;
        case 0x2fb0fcu: goto label_2fb0fc;
        case 0x2fb100u: goto label_2fb100;
        case 0x2fb104u: goto label_2fb104;
        case 0x2fb108u: goto label_2fb108;
        case 0x2fb10cu: goto label_2fb10c;
        case 0x2fb110u: goto label_2fb110;
        case 0x2fb114u: goto label_2fb114;
        case 0x2fb118u: goto label_2fb118;
        case 0x2fb11cu: goto label_2fb11c;
        case 0x2fb120u: goto label_2fb120;
        case 0x2fb124u: goto label_2fb124;
        case 0x2fb128u: goto label_2fb128;
        case 0x2fb12cu: goto label_2fb12c;
        case 0x2fb130u: goto label_2fb130;
        case 0x2fb134u: goto label_2fb134;
        case 0x2fb138u: goto label_2fb138;
        case 0x2fb13cu: goto label_2fb13c;
        case 0x2fb140u: goto label_2fb140;
        case 0x2fb144u: goto label_2fb144;
        case 0x2fb148u: goto label_2fb148;
        case 0x2fb14cu: goto label_2fb14c;
        case 0x2fb150u: goto label_2fb150;
        case 0x2fb154u: goto label_2fb154;
        case 0x2fb158u: goto label_2fb158;
        case 0x2fb15cu: goto label_2fb15c;
        case 0x2fb160u: goto label_2fb160;
        case 0x2fb164u: goto label_2fb164;
        case 0x2fb168u: goto label_2fb168;
        case 0x2fb16cu: goto label_2fb16c;
        case 0x2fb170u: goto label_2fb170;
        case 0x2fb174u: goto label_2fb174;
        case 0x2fb178u: goto label_2fb178;
        case 0x2fb17cu: goto label_2fb17c;
        case 0x2fb180u: goto label_2fb180;
        case 0x2fb184u: goto label_2fb184;
        case 0x2fb188u: goto label_2fb188;
        case 0x2fb18cu: goto label_2fb18c;
        case 0x2fb190u: goto label_2fb190;
        case 0x2fb194u: goto label_2fb194;
        case 0x2fb198u: goto label_2fb198;
        case 0x2fb19cu: goto label_2fb19c;
        case 0x2fb1a0u: goto label_2fb1a0;
        case 0x2fb1a4u: goto label_2fb1a4;
        case 0x2fb1a8u: goto label_2fb1a8;
        case 0x2fb1acu: goto label_2fb1ac;
        case 0x2fb1b0u: goto label_2fb1b0;
        case 0x2fb1b4u: goto label_2fb1b4;
        case 0x2fb1b8u: goto label_2fb1b8;
        case 0x2fb1bcu: goto label_2fb1bc;
        case 0x2fb1c0u: goto label_2fb1c0;
        case 0x2fb1c4u: goto label_2fb1c4;
        case 0x2fb1c8u: goto label_2fb1c8;
        case 0x2fb1ccu: goto label_2fb1cc;
        case 0x2fb1d0u: goto label_2fb1d0;
        case 0x2fb1d4u: goto label_2fb1d4;
        case 0x2fb1d8u: goto label_2fb1d8;
        case 0x2fb1dcu: goto label_2fb1dc;
        case 0x2fb1e0u: goto label_2fb1e0;
        case 0x2fb1e4u: goto label_2fb1e4;
        case 0x2fb1e8u: goto label_2fb1e8;
        case 0x2fb1ecu: goto label_2fb1ec;
        case 0x2fb1f0u: goto label_2fb1f0;
        case 0x2fb1f4u: goto label_2fb1f4;
        case 0x2fb1f8u: goto label_2fb1f8;
        case 0x2fb1fcu: goto label_2fb1fc;
        case 0x2fb200u: goto label_2fb200;
        case 0x2fb204u: goto label_2fb204;
        case 0x2fb208u: goto label_2fb208;
        case 0x2fb20cu: goto label_2fb20c;
        case 0x2fb210u: goto label_2fb210;
        case 0x2fb214u: goto label_2fb214;
        case 0x2fb218u: goto label_2fb218;
        case 0x2fb21cu: goto label_2fb21c;
        case 0x2fb220u: goto label_2fb220;
        case 0x2fb224u: goto label_2fb224;
        case 0x2fb228u: goto label_2fb228;
        case 0x2fb22cu: goto label_2fb22c;
        case 0x2fb230u: goto label_2fb230;
        case 0x2fb234u: goto label_2fb234;
        case 0x2fb238u: goto label_2fb238;
        case 0x2fb23cu: goto label_2fb23c;
        case 0x2fb240u: goto label_2fb240;
        case 0x2fb244u: goto label_2fb244;
        case 0x2fb248u: goto label_2fb248;
        case 0x2fb24cu: goto label_2fb24c;
        case 0x2fb250u: goto label_2fb250;
        case 0x2fb254u: goto label_2fb254;
        case 0x2fb258u: goto label_2fb258;
        case 0x2fb25cu: goto label_2fb25c;
        case 0x2fb260u: goto label_2fb260;
        case 0x2fb264u: goto label_2fb264;
        case 0x2fb268u: goto label_2fb268;
        case 0x2fb26cu: goto label_2fb26c;
        case 0x2fb270u: goto label_2fb270;
        case 0x2fb274u: goto label_2fb274;
        case 0x2fb278u: goto label_2fb278;
        case 0x2fb27cu: goto label_2fb27c;
        case 0x2fb280u: goto label_2fb280;
        case 0x2fb284u: goto label_2fb284;
        case 0x2fb288u: goto label_2fb288;
        case 0x2fb28cu: goto label_2fb28c;
        case 0x2fb290u: goto label_2fb290;
        case 0x2fb294u: goto label_2fb294;
        case 0x2fb298u: goto label_2fb298;
        case 0x2fb29cu: goto label_2fb29c;
        case 0x2fb2a0u: goto label_2fb2a0;
        case 0x2fb2a4u: goto label_2fb2a4;
        case 0x2fb2a8u: goto label_2fb2a8;
        case 0x2fb2acu: goto label_2fb2ac;
        case 0x2fb2b0u: goto label_2fb2b0;
        case 0x2fb2b4u: goto label_2fb2b4;
        case 0x2fb2b8u: goto label_2fb2b8;
        case 0x2fb2bcu: goto label_2fb2bc;
        case 0x2fb2c0u: goto label_2fb2c0;
        case 0x2fb2c4u: goto label_2fb2c4;
        case 0x2fb2c8u: goto label_2fb2c8;
        case 0x2fb2ccu: goto label_2fb2cc;
        case 0x2fb2d0u: goto label_2fb2d0;
        case 0x2fb2d4u: goto label_2fb2d4;
        case 0x2fb2d8u: goto label_2fb2d8;
        case 0x2fb2dcu: goto label_2fb2dc;
        case 0x2fb2e0u: goto label_2fb2e0;
        case 0x2fb2e4u: goto label_2fb2e4;
        case 0x2fb2e8u: goto label_2fb2e8;
        case 0x2fb2ecu: goto label_2fb2ec;
        case 0x2fb2f0u: goto label_2fb2f0;
        case 0x2fb2f4u: goto label_2fb2f4;
        case 0x2fb2f8u: goto label_2fb2f8;
        case 0x2fb2fcu: goto label_2fb2fc;
        case 0x2fb300u: goto label_2fb300;
        case 0x2fb304u: goto label_2fb304;
        case 0x2fb308u: goto label_2fb308;
        case 0x2fb30cu: goto label_2fb30c;
        default: break;
    }

    ctx->pc = 0x2fb0e8u;

label_2fb0e8:
    // 0x2fb0e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fb0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2fb0ec:
    // 0x2fb0ec: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2fb0f0:
    // 0x2fb0f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2fb0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2fb0f4:
    // 0x2fb0f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2fb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_2fb0f8:
    // 0x2fb0f8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2fb0f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2fb0fc:
    // 0x2fb0fc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fb0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2fb100:
    // 0x2fb100: 0x8c637a84  lw          $v1, 0x7A84($v1)
    ctx->pc = 0x2fb100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
label_2fb104:
    // 0x2fb104: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2fb104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2fb108:
    // 0x2fb108: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2fb108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2fb10c:
    // 0x2fb10c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fb10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2fb110:
    // 0x2fb110: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2fb110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2fb114:
    // 0x2fb114: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2fb114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2fb118:
    // 0x2fb118: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2fb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2fb11c:
    // 0x2fb11c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2fb11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2fb120:
    // 0x2fb120: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2fb120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2fb124:
    // 0x2fb124: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2fb128:
    if (ctx->pc == 0x2FB128u) {
        ctx->pc = 0x2FB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB124u;
        // 0x2fb128: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB12Cu;
        goto label_2fb12c;
    }
    ctx->pc = 0x2FB124u;
    {
        const bool branch_taken_0x2fb124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB124u;
        // 0x2fb128: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb124) {
            ctx->pc = 0x2FB150u;
            goto label_2fb150;
        }
    }
    ctx->pc = 0x2FB12Cu;
label_2fb12c:
    // 0x2fb12c: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x2fb12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
label_2fb130:
    // 0x2fb130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fb130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fb134:
    // 0x2fb134: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2fb138:
    if (ctx->pc == 0x2FB138u) {
        ctx->pc = 0x2FB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB134u;
        // 0x2fb138: 0x8ea27a84  lw          $v0, 0x7A84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB13Cu;
        goto label_2fb13c;
    }
    ctx->pc = 0x2FB134u;
    {
        const bool branch_taken_0x2fb134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB134u;
        // 0x2fb138: 0x8ea27a84  lw          $v0, 0x7A84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb134) {
            ctx->pc = 0x2FB154u;
            goto label_2fb154;
        }
    }
    ctx->pc = 0x2FB13Cu;
label_2fb13c:
    // 0x2fb13c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2fb13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2fb140:
    // 0x2fb140: 0xc0c1708  jal         func_305C20
label_2fb144:
    if (ctx->pc == 0x2FB144u) {
        ctx->pc = 0x2FB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB140u;
        // 0x2fb144: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB148u;
        goto label_2fb148;
    }
    ctx->pc = 0x2FB140u;
    SET_GPR_U32(ctx, 31, 0x2FB148u);
    ctx->pc = 0x2FB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB140u;
    // 0x2fb144: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305C20u, 0x2FB140u, 0x2FB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB148u;
label_2fb148:
    // 0x2fb148: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fb14c:
    if (ctx->pc == 0x2FB14Cu) {
        ctx->pc = 0x2FB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB148u;
        // 0x2fb14c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB150u;
        goto label_2fb150;
    }
    ctx->pc = 0x2FB148u;
    {
        const bool branch_taken_0x2fb148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB148u;
        // 0x2fb14c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb148) {
            ctx->pc = 0x2FB170u;
            goto label_2fb170;
        }
    }
    ctx->pc = 0x2FB150u;
label_2fb150:
    // 0x2fb150: 0x8ea27a84  lw          $v0, 0x7A84($s5)
    ctx->pc = 0x2fb150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31364)));
label_2fb154:
    // 0x2fb154: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2fb154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2fb158:
    // 0x2fb158: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fb158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fb15c:
    // 0x2fb15c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fb160:
    if (ctx->pc == 0x2FB160u) {
        ctx->pc = 0x2FB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB15Cu;
        // 0x2fb160: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB164u;
        goto label_2fb164;
    }
    ctx->pc = 0x2FB15Cu;
    {
        const bool branch_taken_0x2fb15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB15Cu;
        // 0x2fb160: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb15c) {
            ctx->pc = 0x2FB16Cu;
            goto label_2fb16c;
        }
    }
    ctx->pc = 0x2FB164u;
label_2fb164:
    // 0x2fb164: 0xc0c1708  jal         func_305C20
label_2fb168:
    if (ctx->pc == 0x2FB168u) {
        ctx->pc = 0x2FB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB164u;
        // 0x2fb168: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB16Cu;
        goto label_2fb16c;
    }
    ctx->pc = 0x2FB164u;
    SET_GPR_U32(ctx, 31, 0x2FB16Cu);
    ctx->pc = 0x2FB168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB164u;
    // 0x2fb168: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305C20u, 0x2FB164u, 0x2FB16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB16Cu;
label_2fb16c:
    // 0x2fb16c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2fb16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2fb170:
    // 0x2fb170: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2fb170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb174:
    // 0x2fb174: 0x24843250  addiu       $a0, $a0, 0x3250
    ctx->pc = 0x2fb174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12880));
label_2fb178:
    // 0x2fb178: 0xc0c1b8e  jal         func_306E38
label_2fb17c:
    if (ctx->pc == 0x2FB17Cu) {
        ctx->pc = 0x2FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB178u;
        // 0x2fb17c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB180u;
        goto label_2fb180;
    }
    ctx->pc = 0x2FB178u;
    SET_GPR_U32(ctx, 31, 0x2FB180u);
    ctx->pc = 0x2FB17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB178u;
    // 0x2fb17c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306E38u, 0x2FB178u, 0x2FB180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB180u;
label_2fb180:
    // 0x2fb180: 0x3c170400  lui         $s7, 0x400
    ctx->pc = 0x2fb180u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1024 << 16));
label_2fb184:
    // 0x2fb184: 0x8ea37a84  lw          $v1, 0x7A84($s5)
    ctx->pc = 0x2fb184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31364)));
label_2fb188:
    // 0x2fb188: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fb188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2fb18c:
    // 0x2fb18c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2fb18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_2fb190:
    // 0x2fb190: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2fb190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2fb194:
    // 0x2fb194: 0x24b2b7c0  addiu       $s2, $a1, -0x4840
    ctx->pc = 0x2fb194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948800));
label_2fb198:
    // 0x2fb198: 0x3b02b  sltu        $s6, $zero, $v1
    ctx->pc = 0x2fb198u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2fb19c:
    // 0x2fb19c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
label_2fb1a0:
    // 0x2fb1a0: 0x247eb840  addiu       $fp, $v1, -0x47C0
    ctx->pc = 0x2fb1a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
label_2fb1a4:
    // 0x2fb1a4: 0x0  nop
    ctx->pc = 0x2fb1a4u;
    // NOP
label_2fb1a8:
    // 0x2fb1a8: 0x131142  srl         $v0, $s3, 5
    ctx->pc = 0x2fb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
label_2fb1ac:
    // 0x2fb1ac: 0x3264001f  andi        $a0, $s3, 0x1F
    ctx->pc = 0x2fb1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
label_2fb1b0:
    // 0x2fb1b0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fb1b4:
    // 0x2fb1b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2fb1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2fb1b8:
    // 0x2fb1b8: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2fb1bc:
    // 0x2fb1bc: 0x838006  srlv        $s0, $v1, $a0
    ctx->pc = 0x2fb1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_2fb1c0:
    // 0x2fb1c0: 0x2442b7c0  addiu       $v0, $v0, -0x4840
    ctx->pc = 0x2fb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
label_2fb1c4:
    // 0x2fb1c4: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x2fb1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2fb1c8:
    // 0x2fb1c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fb1cc:
    // 0x2fb1cc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2fb1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_2fb1d0:
    // 0x2fb1d0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2fb1d4:
    if (ctx->pc == 0x2FB1D4u) {
        ctx->pc = 0x2FB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1D0u;
        // 0x2fb1d4: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1D8u;
        goto label_2fb1d8;
    }
    ctx->pc = 0x2FB1D0u;
    {
        const bool branch_taken_0x2fb1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1D0u;
        // 0x2fb1d4: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1d0) {
            ctx->pc = 0x2FB2C4u;
            goto label_2fb2c4;
        }
    }
    ctx->pc = 0x2FB1D8u;
label_2fb1d8:
    // 0x2fb1d8: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x2fb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
label_2fb1dc:
    // 0x2fb1dc: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2fb1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2fb1e0:
    // 0x2fb1e0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2fb1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb1e4:
    // 0x2fb1e4: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x2fb1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_2fb1e8:
    // 0x2fb1e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2fb1ec:
    if (ctx->pc == 0x2FB1ECu) {
        ctx->pc = 0x2FB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1E8u;
        // 0x2fb1ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB1F0u;
        goto label_2fb1f0;
    }
    ctx->pc = 0x2FB1E8u;
    {
        const bool branch_taken_0x2fb1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1E8u;
        // 0x2fb1ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1e8) {
            ctx->pc = 0x2FB21Cu;
            goto label_2fb21c;
        }
    }
    ctx->pc = 0x2FB1F0u;
label_2fb1f0:
    // 0x2fb1f0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2fb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2fb1f4:
    // 0x2fb1f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2fb1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fb1f8:
    // 0x2fb1f8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2fb1f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2fb1fc:
    // 0x2fb1fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2fb1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fb200:
    // 0x2fb200: 0x60f809  jalr        $v1
label_2fb204:
    if (ctx->pc == 0x2FB204u) {
        ctx->pc = 0x2FB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB200u;
        // 0x2fb204: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB208u;
        goto label_2fb208;
    }
    ctx->pc = 0x2FB200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FB208u);
        ctx->pc = 0x2FB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB200u;
        // 0x2fb204: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB200u, 0x2FB208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB208u;
label_2fb208:
    // 0x2fb208: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fb208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fb20c:
    // 0x2fb20c: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x2fb20cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
label_2fb210:
    // 0x2fb210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fb210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fb214:
    // 0x2fb214: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2fb218:
    if (ctx->pc == 0x2FB218u) {
        ctx->pc = 0x2FB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB214u;
        // 0x2fb218: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB21Cu;
        goto label_2fb21c;
    }
    ctx->pc = 0x2FB214u;
    {
        const bool branch_taken_0x2fb214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB214u;
        // 0x2fb218: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb214) {
            ctx->pc = 0x2FB2C4u;
            goto label_2fb2c4;
        }
    }
    ctx->pc = 0x2FB21Cu;
label_2fb21c:
    // 0x2fb21c: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x2fb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_2fb220:
    // 0x2fb220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb224:
    // 0x2fb224: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2fb224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_2fb228:
    // 0x2fb228: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fb22c:
    if (ctx->pc == 0x2FB22Cu) {
        ctx->pc = 0x2FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB228u;
        // 0x2fb22c: 0x901025  or          $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB230u;
        goto label_2fb230;
    }
    ctx->pc = 0x2FB228u;
    {
        const bool branch_taken_0x2fb228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB228u;
        // 0x2fb22c: 0x901025  or          $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb228) {
            ctx->pc = 0x2FB238u;
            goto label_2fb238;
        }
    }
    ctx->pc = 0x2FB230u;
label_2fb230:
    // 0x2fb230: 0x10000024  b           . + 4 + (0x24 << 2)
label_2fb234:
    if (ctx->pc == 0x2FB234u) {
        ctx->pc = 0x2FB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB230u;
        // 0x2fb234: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB238u;
        goto label_2fb238;
    }
    ctx->pc = 0x2FB230u;
    {
        const bool branch_taken_0x2fb230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB230u;
        // 0x2fb234: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb230) {
            ctx->pc = 0x2FB2C4u;
            goto label_2fb2c4;
        }
    }
    ctx->pc = 0x2FB238u;
label_2fb238:
    // 0x2fb238: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x2fb238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_2fb23c:
    // 0x2fb23c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2fb240:
    if (ctx->pc == 0x2FB240u) {
        ctx->pc = 0x2FB244u;
        goto label_2fb244;
    }
    ctx->pc = 0x2FB23Cu;
    {
        const bool branch_taken_0x2fb23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb23c) {
            ctx->pc = 0x2FB254u;
            goto label_2fb254;
        }
    }
    ctx->pc = 0x2FB244u;
label_2fb244:
    // 0x2fb244: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2fb244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_2fb248:
    // 0x2fb248: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fb248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2fb24c:
    // 0x2fb24c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2fb250:
    if (ctx->pc == 0x2FB250u) {
        ctx->pc = 0x2FB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB24Cu;
        // 0x2fb250: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB254u;
        goto label_2fb254;
    }
    ctx->pc = 0x2FB24Cu;
    {
        const bool branch_taken_0x2fb24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb24c) {
            ctx->pc = 0x2FB250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB24Cu;
            // 0x2fb250: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB2C8u;
            goto label_2fb2c8;
        }
    }
    ctx->pc = 0x2FB254u;
label_2fb254:
    // 0x2fb254: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
label_2fb258:
    if (ctx->pc == 0x2FB258u) {
        ctx->pc = 0x2FB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB254u;
        // 0x2fb258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB25Cu;
        goto label_2fb25c;
    }
    ctx->pc = 0x2FB254u;
    {
        const bool branch_taken_0x2fb254 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB254u;
        // 0x2fb258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb254) {
            ctx->pc = 0x2FB2ACu;
            goto label_2fb2ac;
        }
    }
    ctx->pc = 0x2FB25Cu;
label_2fb25c:
    // 0x2fb25c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2fb260:
    if (ctx->pc == 0x2FB260u) {
        ctx->pc = 0x2FB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB25Cu;
        // 0x2fb260: 0x8e430104  lw          $v1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB264u;
        goto label_2fb264;
    }
    ctx->pc = 0x2FB25Cu;
    {
        const bool branch_taken_0x2fb25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb25c) {
            ctx->pc = 0x2FB260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB25Cu;
            // 0x2fb260: 0x8e430104  lw          $v1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB274u;
            goto label_2fb274;
        }
    }
    ctx->pc = 0x2FB264u;
label_2fb264:
    // 0x2fb264: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2fb264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_2fb268:
    // 0x2fb268: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fb268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2fb26c:
    // 0x2fb26c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2fb26cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fb270:
    // 0x2fb270: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2fb270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2fb274:
    // 0x2fb274: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2fb274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2fb278:
    // 0x2fb278: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2fb27c:
    if (ctx->pc == 0x2FB27Cu) {
        ctx->pc = 0x2FB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB278u;
        // 0x2fb27c: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB280u;
        goto label_2fb280;
    }
    ctx->pc = 0x2FB278u;
    {
        const bool branch_taken_0x2fb278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb278) {
            ctx->pc = 0x2FB27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB278u;
            // 0x2fb27c: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB2B0u;
            goto label_2fb2b0;
        }
    }
    ctx->pc = 0x2FB280u;
label_2fb280:
    // 0x2fb280: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x2fb280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
label_2fb284:
    // 0x2fb284: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fb284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fb288:
    // 0x2fb288: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2fb28c:
    if (ctx->pc == 0x2FB28Cu) {
        ctx->pc = 0x2FB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB288u;
        // 0x2fb28c: 0x8ea27a84  lw          $v0, 0x7A84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB290u;
        goto label_2fb290;
    }
    ctx->pc = 0x2FB288u;
    {
        const bool branch_taken_0x2fb288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB288u;
        // 0x2fb28c: 0x8ea27a84  lw          $v0, 0x7A84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb288) {
            ctx->pc = 0x2FB2A0u;
            goto label_2fb2a0;
        }
    }
    ctx->pc = 0x2FB290u;
label_2fb290:
    // 0x2fb290: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_2fb294:
    if (ctx->pc == 0x2FB294u) {
        ctx->pc = 0x2FB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB290u;
        // 0x2fb294: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB298u;
        goto label_2fb298;
    }
    ctx->pc = 0x2FB290u;
    {
        const bool branch_taken_0x2fb290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb290) {
            ctx->pc = 0x2FB294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB290u;
            // 0x2fb294: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB2C8u;
            goto label_2fb2c8;
        }
    }
    ctx->pc = 0x2FB298u;
label_2fb298:
    // 0x2fb298: 0x10000005  b           . + 4 + (0x5 << 2)
label_2fb29c:
    if (ctx->pc == 0x2FB29Cu) {
        ctx->pc = 0x2FB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB298u;
        // 0x2fb29c: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2A0u;
        goto label_2fb2a0;
    }
    ctx->pc = 0x2FB298u;
    {
        const bool branch_taken_0x2fb298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB298u;
        // 0x2fb29c: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb298) {
            ctx->pc = 0x2FB2B0u;
            goto label_2fb2b0;
        }
    }
    ctx->pc = 0x2FB2A0u;
label_2fb2a0:
    // 0x2fb2a0: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2fb2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_2fb2a4:
    // 0x2fb2a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2fb2a8:
    if (ctx->pc == 0x2FB2A8u) {
        ctx->pc = 0x2FB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2A4u;
        // 0x2fb2a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2ACu;
        goto label_2fb2ac;
    }
    ctx->pc = 0x2FB2A4u;
    {
        const bool branch_taken_0x2fb2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb2a4) {
            ctx->pc = 0x2FB2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB2A4u;
            // 0x2fb2a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB2C8u;
            goto label_2fb2c8;
        }
    }
    ctx->pc = 0x2FB2ACu;
label_2fb2ac:
    // 0x2fb2ac: 0x8ce200f0  lw          $v0, 0xF0($a3)
    ctx->pc = 0x2fb2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
label_2fb2b0:
    // 0x2fb2b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2fb2b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2fb2b4:
    // 0x2fb2b4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2fb2b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2fb2b8:
    // 0x2fb2b8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2fb2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2fb2bc:
    // 0x2fb2bc: 0x60f809  jalr        $v1
label_2fb2c0:
    if (ctx->pc == 0x2FB2C0u) {
        ctx->pc = 0x2FB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2BCu;
        // 0x2fb2c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2C4u;
        goto label_2fb2c4;
    }
    ctx->pc = 0x2FB2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FB2C4u);
        ctx->pc = 0x2FB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2BCu;
        // 0x2fb2c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB2BCu, 0x2FB2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB2C4u;
label_2fb2c4:
    // 0x2fb2c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fb2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2fb2c8:
    // 0x2fb2c8: 0x2a620400  slti        $v0, $s3, 0x400
    ctx->pc = 0x2fb2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
label_2fb2cc:
    // 0x2fb2cc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_2fb2d0:
    if (ctx->pc == 0x2FB2D0u) {
        ctx->pc = 0x2FB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2CCu;
        // 0x2fb2d0: 0x26520400  addiu       $s2, $s2, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2D4u;
        goto label_2fb2d4;
    }
    ctx->pc = 0x2FB2CCu;
    {
        const bool branch_taken_0x2fb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2CCu;
        // 0x2fb2d0: 0x26520400  addiu       $s2, $s2, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2cc) {
            ctx->pc = 0x2FB1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb1a8;
        }
    }
    ctx->pc = 0x2FB2D4u;
label_2fb2d4:
    // 0x2fb2d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2fb2d8:
    // 0x2fb2d8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fb2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fb2dc:
    // 0x2fb2dc: 0xac543bb8  sw          $s4, 0x3BB8($v0)
    ctx->pc = 0x2fb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15288), GPR_U32(ctx, 20));
label_2fb2e0:
    // 0x2fb2e0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2fb2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2fb2e4:
    // 0x2fb2e4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2fb2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2fb2e8:
    // 0x2fb2e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2fb2e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fb2ec:
    // 0x2fb2ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2fb2ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fb2f0:
    // 0x2fb2f0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2fb2f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fb2f4:
    // 0x2fb2f4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2fb2f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fb2f8:
    // 0x2fb2f8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2fb2f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb2fc:
    // 0x2fb2fc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2fb2fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb300:
    // 0x2fb300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb304:
    // 0x2fb304: 0x3e00008  jr          $ra
label_2fb308:
    if (ctx->pc == 0x2FB308u) {
        ctx->pc = 0x2FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB304u;
        // 0x2fb308: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB30Cu;
        goto label_2fb30c;
    }
    ctx->pc = 0x2FB304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB304u;
        // 0x2fb308: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB30Cu;
label_2fb30c:
    // 0x2fb30c: 0x0  nop
    ctx->pc = 0x2fb30cu;
    // NOP
    ctx->pc = 0x2fb310u;
}
