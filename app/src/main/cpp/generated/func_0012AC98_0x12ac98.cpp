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

// Function: func_0012AC98
// Address: 0x12ac98 - 0x12afe8
void func_0012AC98_0x12ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012AC98_0x12ac98");
#endif

    switch (ctx->pc) {
        case 0x12ac98u: goto label_12ac98;
        case 0x12ac9cu: goto label_12ac9c;
        case 0x12aca0u: goto label_12aca0;
        case 0x12aca4u: goto label_12aca4;
        case 0x12aca8u: goto label_12aca8;
        case 0x12acacu: goto label_12acac;
        case 0x12acb0u: goto label_12acb0;
        case 0x12acb4u: goto label_12acb4;
        case 0x12acb8u: goto label_12acb8;
        case 0x12acbcu: goto label_12acbc;
        case 0x12acc0u: goto label_12acc0;
        case 0x12acc4u: goto label_12acc4;
        case 0x12acc8u: goto label_12acc8;
        case 0x12acccu: goto label_12accc;
        case 0x12acd0u: goto label_12acd0;
        case 0x12acd4u: goto label_12acd4;
        case 0x12acd8u: goto label_12acd8;
        case 0x12acdcu: goto label_12acdc;
        case 0x12ace0u: goto label_12ace0;
        case 0x12ace4u: goto label_12ace4;
        case 0x12ace8u: goto label_12ace8;
        case 0x12acecu: goto label_12acec;
        case 0x12acf0u: goto label_12acf0;
        case 0x12acf4u: goto label_12acf4;
        case 0x12acf8u: goto label_12acf8;
        case 0x12acfcu: goto label_12acfc;
        case 0x12ad00u: goto label_12ad00;
        case 0x12ad04u: goto label_12ad04;
        case 0x12ad08u: goto label_12ad08;
        case 0x12ad0cu: goto label_12ad0c;
        case 0x12ad10u: goto label_12ad10;
        case 0x12ad14u: goto label_12ad14;
        case 0x12ad18u: goto label_12ad18;
        case 0x12ad1cu: goto label_12ad1c;
        case 0x12ad20u: goto label_12ad20;
        case 0x12ad24u: goto label_12ad24;
        case 0x12ad28u: goto label_12ad28;
        case 0x12ad2cu: goto label_12ad2c;
        case 0x12ad30u: goto label_12ad30;
        case 0x12ad34u: goto label_12ad34;
        case 0x12ad38u: goto label_12ad38;
        case 0x12ad3cu: goto label_12ad3c;
        case 0x12ad40u: goto label_12ad40;
        case 0x12ad44u: goto label_12ad44;
        case 0x12ad48u: goto label_12ad48;
        case 0x12ad4cu: goto label_12ad4c;
        case 0x12ad50u: goto label_12ad50;
        case 0x12ad54u: goto label_12ad54;
        case 0x12ad58u: goto label_12ad58;
        case 0x12ad5cu: goto label_12ad5c;
        case 0x12ad60u: goto label_12ad60;
        case 0x12ad64u: goto label_12ad64;
        case 0x12ad68u: goto label_12ad68;
        case 0x12ad6cu: goto label_12ad6c;
        case 0x12ad70u: goto label_12ad70;
        case 0x12ad74u: goto label_12ad74;
        case 0x12ad78u: goto label_12ad78;
        case 0x12ad7cu: goto label_12ad7c;
        case 0x12ad80u: goto label_12ad80;
        case 0x12ad84u: goto label_12ad84;
        case 0x12ad88u: goto label_12ad88;
        case 0x12ad8cu: goto label_12ad8c;
        case 0x12ad90u: goto label_12ad90;
        case 0x12ad94u: goto label_12ad94;
        case 0x12ad98u: goto label_12ad98;
        case 0x12ad9cu: goto label_12ad9c;
        case 0x12ada0u: goto label_12ada0;
        case 0x12ada4u: goto label_12ada4;
        case 0x12ada8u: goto label_12ada8;
        case 0x12adacu: goto label_12adac;
        case 0x12adb0u: goto label_12adb0;
        case 0x12adb4u: goto label_12adb4;
        case 0x12adb8u: goto label_12adb8;
        case 0x12adbcu: goto label_12adbc;
        case 0x12adc0u: goto label_12adc0;
        case 0x12adc4u: goto label_12adc4;
        case 0x12adc8u: goto label_12adc8;
        case 0x12adccu: goto label_12adcc;
        case 0x12add0u: goto label_12add0;
        case 0x12add4u: goto label_12add4;
        case 0x12add8u: goto label_12add8;
        case 0x12addcu: goto label_12addc;
        case 0x12ade0u: goto label_12ade0;
        case 0x12ade4u: goto label_12ade4;
        case 0x12ade8u: goto label_12ade8;
        case 0x12adecu: goto label_12adec;
        case 0x12adf0u: goto label_12adf0;
        case 0x12adf4u: goto label_12adf4;
        case 0x12adf8u: goto label_12adf8;
        case 0x12adfcu: goto label_12adfc;
        case 0x12ae00u: goto label_12ae00;
        case 0x12ae04u: goto label_12ae04;
        case 0x12ae08u: goto label_12ae08;
        case 0x12ae0cu: goto label_12ae0c;
        case 0x12ae10u: goto label_12ae10;
        case 0x12ae14u: goto label_12ae14;
        case 0x12ae18u: goto label_12ae18;
        case 0x12ae1cu: goto label_12ae1c;
        case 0x12ae20u: goto label_12ae20;
        case 0x12ae24u: goto label_12ae24;
        case 0x12ae28u: goto label_12ae28;
        case 0x12ae2cu: goto label_12ae2c;
        case 0x12ae30u: goto label_12ae30;
        case 0x12ae34u: goto label_12ae34;
        case 0x12ae38u: goto label_12ae38;
        case 0x12ae3cu: goto label_12ae3c;
        case 0x12ae40u: goto label_12ae40;
        case 0x12ae44u: goto label_12ae44;
        case 0x12ae48u: goto label_12ae48;
        case 0x12ae4cu: goto label_12ae4c;
        case 0x12ae50u: goto label_12ae50;
        case 0x12ae54u: goto label_12ae54;
        case 0x12ae58u: goto label_12ae58;
        case 0x12ae5cu: goto label_12ae5c;
        case 0x12ae60u: goto label_12ae60;
        case 0x12ae64u: goto label_12ae64;
        case 0x12ae68u: goto label_12ae68;
        case 0x12ae6cu: goto label_12ae6c;
        case 0x12ae70u: goto label_12ae70;
        case 0x12ae74u: goto label_12ae74;
        case 0x12ae78u: goto label_12ae78;
        case 0x12ae7cu: goto label_12ae7c;
        case 0x12ae80u: goto label_12ae80;
        case 0x12ae84u: goto label_12ae84;
        case 0x12ae88u: goto label_12ae88;
        case 0x12ae8cu: goto label_12ae8c;
        case 0x12ae90u: goto label_12ae90;
        case 0x12ae94u: goto label_12ae94;
        case 0x12ae98u: goto label_12ae98;
        case 0x12ae9cu: goto label_12ae9c;
        case 0x12aea0u: goto label_12aea0;
        case 0x12aea4u: goto label_12aea4;
        case 0x12aea8u: goto label_12aea8;
        case 0x12aeacu: goto label_12aeac;
        case 0x12aeb0u: goto label_12aeb0;
        case 0x12aeb4u: goto label_12aeb4;
        case 0x12aeb8u: goto label_12aeb8;
        case 0x12aebcu: goto label_12aebc;
        case 0x12aec0u: goto label_12aec0;
        case 0x12aec4u: goto label_12aec4;
        case 0x12aec8u: goto label_12aec8;
        case 0x12aeccu: goto label_12aecc;
        case 0x12aed0u: goto label_12aed0;
        case 0x12aed4u: goto label_12aed4;
        case 0x12aed8u: goto label_12aed8;
        case 0x12aedcu: goto label_12aedc;
        case 0x12aee0u: goto label_12aee0;
        case 0x12aee4u: goto label_12aee4;
        case 0x12aee8u: goto label_12aee8;
        case 0x12aeecu: goto label_12aeec;
        case 0x12aef0u: goto label_12aef0;
        case 0x12aef4u: goto label_12aef4;
        case 0x12aef8u: goto label_12aef8;
        case 0x12aefcu: goto label_12aefc;
        case 0x12af00u: goto label_12af00;
        case 0x12af04u: goto label_12af04;
        case 0x12af08u: goto label_12af08;
        case 0x12af0cu: goto label_12af0c;
        case 0x12af10u: goto label_12af10;
        case 0x12af14u: goto label_12af14;
        case 0x12af18u: goto label_12af18;
        case 0x12af1cu: goto label_12af1c;
        case 0x12af20u: goto label_12af20;
        case 0x12af24u: goto label_12af24;
        case 0x12af28u: goto label_12af28;
        case 0x12af2cu: goto label_12af2c;
        case 0x12af30u: goto label_12af30;
        case 0x12af34u: goto label_12af34;
        case 0x12af38u: goto label_12af38;
        case 0x12af3cu: goto label_12af3c;
        case 0x12af40u: goto label_12af40;
        case 0x12af44u: goto label_12af44;
        case 0x12af48u: goto label_12af48;
        case 0x12af4cu: goto label_12af4c;
        case 0x12af50u: goto label_12af50;
        case 0x12af54u: goto label_12af54;
        case 0x12af58u: goto label_12af58;
        case 0x12af5cu: goto label_12af5c;
        case 0x12af60u: goto label_12af60;
        case 0x12af64u: goto label_12af64;
        case 0x12af68u: goto label_12af68;
        case 0x12af6cu: goto label_12af6c;
        case 0x12af70u: goto label_12af70;
        case 0x12af74u: goto label_12af74;
        case 0x12af78u: goto label_12af78;
        case 0x12af7cu: goto label_12af7c;
        case 0x12af80u: goto label_12af80;
        case 0x12af84u: goto label_12af84;
        case 0x12af88u: goto label_12af88;
        case 0x12af8cu: goto label_12af8c;
        case 0x12af90u: goto label_12af90;
        case 0x12af94u: goto label_12af94;
        case 0x12af98u: goto label_12af98;
        case 0x12af9cu: goto label_12af9c;
        case 0x12afa0u: goto label_12afa0;
        case 0x12afa4u: goto label_12afa4;
        case 0x12afa8u: goto label_12afa8;
        case 0x12afacu: goto label_12afac;
        case 0x12afb0u: goto label_12afb0;
        case 0x12afb4u: goto label_12afb4;
        case 0x12afb8u: goto label_12afb8;
        case 0x12afbcu: goto label_12afbc;
        case 0x12afc0u: goto label_12afc0;
        case 0x12afc4u: goto label_12afc4;
        case 0x12afc8u: goto label_12afc8;
        case 0x12afccu: goto label_12afcc;
        case 0x12afd0u: goto label_12afd0;
        case 0x12afd4u: goto label_12afd4;
        case 0x12afd8u: goto label_12afd8;
        case 0x12afdcu: goto label_12afdc;
        case 0x12afe0u: goto label_12afe0;
        case 0x12afe4u: goto label_12afe4;
        default: break;
    }

    ctx->pc = 0x12ac98u;

label_12ac98:
    // 0x12ac98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12ac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_12ac9c:
    // 0x12ac9c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x12ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_12aca0:
    // 0x12aca0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x12aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_12aca4:
    // 0x12aca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12aca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12aca8:
    // 0x12aca8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x12aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_12acac:
    // 0x12acac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12acacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_12acb0:
    // 0x12acb0: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x12acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_12acb4:
    // 0x12acb4: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
label_12acb8:
    if (ctx->pc == 0x12ACB8u) {
        ctx->pc = 0x12ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACB4u;
        // 0x12acb8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACBCu;
        goto label_12acbc;
    }
    ctx->pc = 0x12ACB4u;
    {
        const bool branch_taken_0x12acb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACB4u;
        // 0x12acb8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acb4) {
            ctx->pc = 0x12AFD0u;
            goto label_12afd0;
        }
    }
    ctx->pc = 0x12ACBCu;
label_12acbc:
    // 0x12acbc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x12acbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_12acc0:
    // 0x12acc0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x12acc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_12acc4:
    // 0x12acc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12acc8:
    if (ctx->pc == 0x12ACC8u) {
        ctx->pc = 0x12ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACC4u;
        // 0x12acc8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACCCu;
        goto label_12accc;
    }
    ctx->pc = 0x12ACC4u;
    {
        const bool branch_taken_0x12acc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACC4u;
        // 0x12acc8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acc4) {
            ctx->pc = 0x12ACD8u;
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12ACCCu;
label_12accc:
    // 0x12accc: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x12acccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_12acd0:
    // 0x12acd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_12acd4:
    if (ctx->pc == 0x12ACD4u) {
        ctx->pc = 0x12ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACD0u;
        // 0x12acd4: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACD8u;
        goto label_12acd8;
    }
    ctx->pc = 0x12ACD0u;
    {
        const bool branch_taken_0x12acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACD0u;
        // 0x12acd4: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acd0) {
            ctx->pc = 0x12ACDCu;
            goto label_12acdc;
        }
    }
    ctx->pc = 0x12ACD8u;
label_12acd8:
    // 0x12acd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12acd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12acdc:
    // 0x12acdc: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
label_12ace0:
    if (ctx->pc == 0x12ACE0u) {
        ctx->pc = 0x12ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACDCu;
        // 0x12ace0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACE4u;
        goto label_12ace4;
    }
    ctx->pc = 0x12ACDCu;
    {
        const bool branch_taken_0x12acdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACDCu;
        // 0x12ace0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acdc) {
            ctx->pc = 0x12AFD4u;
            goto label_12afd4;
        }
    }
    ctx->pc = 0x12ACE4u;
label_12ace4:
    // 0x12ace4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x12ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_12ace8:
    // 0x12ace8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x12ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_12acec:
    // 0x12acec: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12acf0:
    // 0x12acf0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x12acf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12acf4:
    // 0x12acf4: 0x52420008  beql        $s2, $v0, . + 4 + (0x8 << 2)
label_12acf8:
    if (ctx->pc == 0x12ACF8u) {
        ctx->pc = 0x12ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACF4u;
        // 0x12acf8: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACFCu;
        goto label_12acfc;
    }
    ctx->pc = 0x12ACF4u;
    {
        const bool branch_taken_0x12acf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12acf4) {
            ctx->pc = 0x12ACF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ACF4u;
            // 0x12acf8: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD18u;
            goto label_12ad18;
        }
    }
    ctx->pc = 0x12ACFCu;
label_12acfc:
    // 0x12acfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ad00:
    // 0x12ad00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12ad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_12ad04:
    // 0x12ad04: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ad08:
    // 0x12ad08: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12ad08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12ad0c:
    // 0x12ad0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ad10:
    // 0x12ad10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12ad10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12ad14:
    // 0x12ad14: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x12ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_12ad18:
    // 0x12ad18: 0x10a00078  beqz        $a1, . + 4 + (0x78 << 2)
label_12ad1c:
    if (ctx->pc == 0x12AD1Cu) {
        ctx->pc = 0x12AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD18u;
        // 0x12ad1c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD20u;
        goto label_12ad20;
    }
    ctx->pc = 0x12AD18u;
    {
        const bool branch_taken_0x12ad18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD18u;
        // 0x12ad1c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad18) {
            ctx->pc = 0x12AEFCu;
            goto label_12aefc;
        }
    }
    ctx->pc = 0x12AD20u;
label_12ad20:
    // 0x12ad20: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x12ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_12ad24:
    // 0x12ad24: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x12ad24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
label_12ad28:
    // 0x12ad28: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x12ad28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_12ad2c:
    // 0x12ad2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12ad30:
    if (ctx->pc == 0x12AD30u) {
        ctx->pc = 0x12AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD2Cu;
        // 0x12ad30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD34u;
        goto label_12ad34;
    }
    ctx->pc = 0x12AD2Cu;
    {
        const bool branch_taken_0x12ad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD2Cu;
        // 0x12ad30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad2c) {
            ctx->pc = 0x12AD3Cu;
            goto label_12ad3c;
        }
    }
    ctx->pc = 0x12AD34u;
label_12ad34:
    // 0x12ad34: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x12ad34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_12ad38:
    // 0x12ad38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ad3c:
    // 0x12ad3c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x12ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12ad40:
    // 0x12ad40: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_12ad44:
    if (ctx->pc == 0x12AD44u) {
        ctx->pc = 0x12AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD40u;
        // 0x12ad44: 0x90a202b4  lbu         $v0, 0x2B4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD48u;
        goto label_12ad48;
    }
    ctx->pc = 0x12AD40u;
    {
        const bool branch_taken_0x12ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ad40) {
            ctx->pc = 0x12AD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AD40u;
            // 0x12ad44: 0x90a202b4  lbu         $v0, 0x2B4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD70u;
            goto label_12ad70;
        }
    }
    ctx->pc = 0x12AD48u;
label_12ad48:
    // 0x12ad48: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x12ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12ad4c:
    // 0x12ad4c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12ad4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_12ad50:
    // 0x12ad50: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x12ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_12ad54:
    // 0x12ad54: 0x40f809  jalr        $v0
label_12ad58:
    if (ctx->pc == 0x12AD58u) {
        ctx->pc = 0x12AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD54u;
        // 0x12ad58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD5Cu;
        goto label_12ad5c;
    }
    ctx->pc = 0x12AD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12AD5Cu);
        ctx->pc = 0x12AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD54u;
        // 0x12ad58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AD54u, 0x12AD5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AD5Cu;
label_12ad5c:
    // 0x12ad5c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ad60:
    // 0x12ad60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12ad64:
    // 0x12ad64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ad64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12ad68:
    // 0x12ad68: 0x10000024  b           . + 4 + (0x24 << 2)
label_12ad6c:
    if (ctx->pc == 0x12AD6Cu) {
        ctx->pc = 0x12AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD68u;
        // 0x12ad6c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD70u;
        goto label_12ad70;
    }
    ctx->pc = 0x12AD68u;
    {
        const bool branch_taken_0x12ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD68u;
        // 0x12ad6c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad68) {
            ctx->pc = 0x12ADFCu;
            goto label_12adfc;
        }
    }
    ctx->pc = 0x12AD70u;
label_12ad70:
    // 0x12ad70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12ad74:
    if (ctx->pc == 0x12AD74u) {
        ctx->pc = 0x12AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD70u;
        // 0x12ad74: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD78u;
        goto label_12ad78;
    }
    ctx->pc = 0x12AD70u;
    {
        const bool branch_taken_0x12ad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD70u;
        // 0x12ad74: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad70) {
            ctx->pc = 0x12AD84u;
            goto label_12ad84;
        }
    }
    ctx->pc = 0x12AD78u;
label_12ad78:
    // 0x12ad78: 0x8ca20278  lw          $v0, 0x278($a1)
    ctx->pc = 0x12ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_12ad7c:
    // 0x12ad7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_12ad80:
    if (ctx->pc == 0x12AD80u) {
        ctx->pc = 0x12AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD7Cu;
        // 0x12ad80: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD84u;
        goto label_12ad84;
    }
    ctx->pc = 0x12AD7Cu;
    {
        const bool branch_taken_0x12ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD7Cu;
        // 0x12ad80: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad7c) {
            ctx->pc = 0x12AD88u;
            goto label_12ad88;
        }
    }
    ctx->pc = 0x12AD84u;
label_12ad84:
    // 0x12ad84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ad84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ad88:
    // 0x12ad88: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_12ad8c:
    if (ctx->pc == 0x12AD8Cu) {
        ctx->pc = 0x12AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD88u;
        // 0x12ad8c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD90u;
        goto label_12ad90;
    }
    ctx->pc = 0x12AD88u;
    {
        const bool branch_taken_0x12ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD88u;
        // 0x12ad8c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad88) {
            ctx->pc = 0x12ADD0u;
            goto label_12add0;
        }
    }
    ctx->pc = 0x12AD90u;
label_12ad90:
    // 0x12ad90: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12ad94:
    // 0x12ad94: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_12ad98:
    if (ctx->pc == 0x12AD98u) {
        ctx->pc = 0x12AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD94u;
        // 0x12ad98: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD9Cu;
        goto label_12ad9c;
    }
    ctx->pc = 0x12AD94u;
    {
        const bool branch_taken_0x12ad94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD94u;
        // 0x12ad98: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad94) {
            ctx->pc = 0x12ADB8u;
            goto label_12adb8;
        }
    }
    ctx->pc = 0x12AD9Cu;
label_12ad9c:
    // 0x12ad9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ada0:
    // 0x12ada0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12ada0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12ada4:
    // 0x12ada4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ada8:
    // 0x12ada8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x12ada8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12adac:
    // 0x12adac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12adb0:
    // 0x12adb0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12adb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12adb4:
    // 0x12adb4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x12adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12adb8:
    // 0x12adb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12adb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12adbc:
    // 0x12adbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12adbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12adc0:
    // 0x12adc0: 0x0  nop
    ctx->pc = 0x12adc0u;
    // NOP
label_12adc4:
    // 0x12adc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12adc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12adc8:
    // 0x12adc8: 0x10000013  b           . + 4 + (0x13 << 2)
label_12adcc:
    if (ctx->pc == 0x12ADCCu) {
        ctx->pc = 0x12ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADC8u;
        // 0x12adcc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADD0u;
        goto label_12add0;
    }
    ctx->pc = 0x12ADC8u;
    {
        const bool branch_taken_0x12adc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADC8u;
        // 0x12adcc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adc8) {
            ctx->pc = 0x12AE18u;
            goto label_12ae18;
        }
    }
    ctx->pc = 0x12ADD0u;
label_12add0:
    // 0x12add0: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x12add0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_12add4:
    // 0x12add4: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x12add4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12add8:
    // 0x12add8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12add8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_12addc:
    // 0x12addc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x12addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_12ade0:
    // 0x12ade0: 0x40f809  jalr        $v0
label_12ade4:
    if (ctx->pc == 0x12ADE4u) {
        ctx->pc = 0x12ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADE0u;
        // 0x12ade4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADE8u;
        goto label_12ade8;
    }
    ctx->pc = 0x12ADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12ADE8u);
        ctx->pc = 0x12ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADE0u;
        // 0x12ade4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ADE0u, 0x12ADE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ADE8u;
label_12ade8:
    // 0x12ade8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12adec:
    // 0x12adec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x12adecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12adf0:
    // 0x12adf0: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_12adf4:
    // 0x12adf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12adf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12adf8:
    // 0x12adf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12adf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12adfc:
    // 0x12adfc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x12adfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12ae00:
    // 0x12ae00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ae04:
    // 0x12ae04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12ae04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12ae08:
    // 0x12ae08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12ae08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12ae0c:
    // 0x12ae0c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ae10:
    // 0x12ae10: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12ae10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12ae14:
    // 0x12ae14: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x12ae14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12ae18:
    // 0x12ae18: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x12ae18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12ae1c:
    // 0x12ae1c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_12ae20:
    // 0x12ae20: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12ae20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_12ae24:
    // 0x12ae24: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x12ae24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_12ae28:
    // 0x12ae28: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12ae28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_12ae2c:
    // 0x12ae2c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x12ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_12ae30:
    // 0x12ae30: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x12ae30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_12ae34:
    // 0x12ae34: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x12ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_12ae38:
    // 0x12ae38: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x12ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ae3c:
    // 0x12ae3c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ae40:
    // 0x12ae40: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ae44:
    // 0x12ae44: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12ae48:
    // 0x12ae48: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12ae48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12ae4c:
    // 0x12ae4c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12ae4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12ae50:
    // 0x12ae50: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12ae50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_12ae54:
    // 0x12ae54: 0xc04078a  jal         func_101E28
label_12ae58:
    if (ctx->pc == 0x12AE58u) {
        ctx->pc = 0x12AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE54u;
        // 0x12ae58: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE5Cu;
        goto label_12ae5c;
    }
    ctx->pc = 0x12AE54u;
    SET_GPR_U32(ctx, 31, 0x12AE5Cu);
    ctx->pc = 0x12AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE54u;
    // 0x12ae58: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x12AE54u, 0x12AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE5Cu;
label_12ae5c:
    // 0x12ae5c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x12ae5cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_12ae60:
    // 0x12ae60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12ae60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ae64:
    // 0x12ae64: 0x0  nop
    ctx->pc = 0x12ae64u;
    // NOP
label_12ae68:
    // 0x12ae68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12ae68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ae6c:
    // 0x12ae6c: 0x0  nop
    ctx->pc = 0x12ae6cu;
    // NOP
label_12ae70:
    // 0x12ae70: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12ae74:
    if (ctx->pc == 0x12AE74u) {
        ctx->pc = 0x12AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE70u;
        // 0x12ae74: 0xc7a40010  lwc1        $f4, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE78u;
        goto label_12ae78;
    }
    ctx->pc = 0x12AE70u;
    {
        const bool branch_taken_0x12ae70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE70u;
        // 0x12ae74: 0xc7a40010  lwc1        $f4, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae70) {
            ctx->pc = 0x12AEB4u;
            goto label_12aeb4;
        }
    }
    ctx->pc = 0x12AE78u;
label_12ae78:
    // 0x12ae78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12ae7c:
    // 0x12ae7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ae7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12ae80:
    // 0x12ae80: 0x0  nop
    ctx->pc = 0x12ae80u;
    // NOP
label_12ae84:
    // 0x12ae84: 0x0  nop
    ctx->pc = 0x12ae84u;
    // NOP
label_12ae88:
    // 0x12ae88: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x12ae88u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_12ae8c:
    // 0x12ae8c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x12ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ae90:
    // 0x12ae90: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x12ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ae94:
    // 0x12ae94: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x12ae94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ae98:
    // 0x12ae98: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x12ae98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_12ae9c:
    // 0x12ae9c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12ae9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_12aea0:
    // 0x12aea0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x12aea0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_12aea4:
    // 0x12aea4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x12aea4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_12aea8:
    // 0x12aea8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x12aea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_12aeac:
    // 0x12aeac: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x12aeacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_12aeb0:
    // 0x12aeb0: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x12aeb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_12aeb4:
    // 0x12aeb4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x12aeb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_12aeb8:
    // 0x12aeb8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x12aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_12aebc:
    // 0x12aebc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x12aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12aec0:
    // 0x12aec0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12aec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12aec4:
    // 0x12aec4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12aec8:
    // 0x12aec8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12aecc:
    // 0x12aecc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12aeccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12aed0:
    // 0x12aed0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12aed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12aed4:
    // 0x12aed4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12aed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_12aed8:
    // 0x12aed8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12aed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12aedc:
    // 0x12aedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12aedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12aee0:
    // 0x12aee0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12aee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12aee4:
    // 0x12aee4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x12aee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_12aee8:
    // 0x12aee8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x12aee8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_12aeec:
    // 0x12aeec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x12aeecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_12aef0:
    // 0x12aef0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_12aef4:
    // 0x12aef4: 0x1000000e  b           . + 4 + (0xE << 2)
label_12aef8:
    if (ctx->pc == 0x12AEF8u) {
        ctx->pc = 0x12AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEF4u;
        // 0x12aef8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AEFCu;
        goto label_12aefc;
    }
    ctx->pc = 0x12AEF4u;
    {
        const bool branch_taken_0x12aef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEF4u;
        // 0x12aef8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aef4) {
            ctx->pc = 0x12AF30u;
            goto label_12af30;
        }
    }
    ctx->pc = 0x12AEFCu;
label_12aefc:
    // 0x12aefc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12aefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12af00:
    // 0x12af00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12af00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12af04:
    // 0x12af04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12af04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12af08:
    // 0x12af08: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12af08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_12af0c:
    // 0x12af0c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12af0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12af10:
    // 0x12af10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12af10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12af14:
    // 0x12af14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12af18:
    // 0x12af18: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12af18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12af1c:
    // 0x12af1c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x12af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_12af20:
    // 0x12af20: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x12af20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12af24:
    // 0x12af24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12af24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12af28:
    // 0x12af28: 0xc07e0d4  jal         func_1F8350
label_12af2c:
    if (ctx->pc == 0x12AF2Cu) {
        ctx->pc = 0x12AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF28u;
        // 0x12af2c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF30u;
        goto label_12af30;
    }
    ctx->pc = 0x12AF28u;
    SET_GPR_U32(ctx, 31, 0x12AF30u);
    ctx->pc = 0x12AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF28u;
    // 0x12af2c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x12AF28u, 0x12AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF30u;
label_12af30:
    // 0x12af30: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x12af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_12af34:
    // 0x12af34: 0x240403af  addiu       $a0, $zero, 0x3AF
    ctx->pc = 0x12af34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
label_12af38:
    // 0x12af38: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x12af38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_12af3c:
    // 0x12af3c: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
label_12af40:
    if (ctx->pc == 0x12AF40u) {
        ctx->pc = 0x12AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF3Cu;
        // 0x12af40: 0x8c4200f0  lw          $v0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF44u;
        goto label_12af44;
    }
    ctx->pc = 0x12AF3Cu;
    {
        const bool branch_taken_0x12af3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x12af3c) {
            ctx->pc = 0x12AF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AF3Cu;
            // 0x12af40: 0x8c4200f0  lw          $v0, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AF80u;
            goto label_12af80;
        }
    }
    ctx->pc = 0x12AF44u;
label_12af44:
    // 0x12af44: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_12af48:
    // 0x12af48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12af48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12af4c:
    // 0x12af4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12af4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12af50:
    // 0x12af50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12af54:
    // 0x12af54: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x12af54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_12af58:
    // 0x12af58: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x12af58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_12af5c:
    // 0x12af5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12af5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12af60:
    // 0x12af60: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x12af60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_12af64:
    // 0x12af64: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12af64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12af68:
    // 0x12af68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12af68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12af6c:
    // 0x12af6c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x12af6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12af70:
    // 0x12af70: 0xc07e0d4  jal         func_1F8350
label_12af74:
    if (ctx->pc == 0x12AF74u) {
        ctx->pc = 0x12AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF70u;
        // 0x12af74: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF78u;
        goto label_12af78;
    }
    ctx->pc = 0x12AF70u;
    SET_GPR_U32(ctx, 31, 0x12AF78u);
    ctx->pc = 0x12AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF70u;
    // 0x12af74: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x12AF70u, 0x12AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF78u;
label_12af78:
    // 0x12af78: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x12af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_12af7c:
    // 0x12af7c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12af80:
    // 0x12af80: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_12af84:
    if (ctx->pc == 0x12AF84u) {
        ctx->pc = 0x12AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF80u;
        // 0x12af84: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF88u;
        goto label_12af88;
    }
    ctx->pc = 0x12AF80u;
    {
        const bool branch_taken_0x12af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x12AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF80u;
        // 0x12af84: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af80) {
            ctx->pc = 0x12AF9Cu;
            goto label_12af9c;
        }
    }
    ctx->pc = 0x12AF88u;
label_12af88:
    // 0x12af88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12af88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12af8c:
    // 0x12af8c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x12af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12af90:
    // 0x12af90: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12af90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12af94:
    // 0x12af94: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x12af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12af98:
    // 0x12af98: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12af9c:
    // 0x12af9c: 0x8e230698  lw          $v1, 0x698($s1)
    ctx->pc = 0x12af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_12afa0:
    // 0x12afa0: 0x24620490  addiu       $v0, $v1, 0x490
    ctx->pc = 0x12afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
label_12afa4:
    // 0x12afa4: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_12afa8:
    if (ctx->pc == 0x12AFA8u) {
        ctx->pc = 0x12AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFA4u;
        // 0x12afa8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AFACu;
        goto label_12afac;
    }
    ctx->pc = 0x12AFA4u;
    {
        const bool branch_taken_0x12afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x12AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFA4u;
        // 0x12afa8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afa4) {
            ctx->pc = 0x12AFC0u;
            goto label_12afc0;
        }
    }
    ctx->pc = 0x12AFACu;
label_12afac:
    // 0x12afac: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x12afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
label_12afb0:
    // 0x12afb0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x12afb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12afb4:
    // 0x12afb4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12afb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12afb8:
    // 0x12afb8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x12afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12afbc:
    // 0x12afbc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12afbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12afc0:
    // 0x12afc0: 0x8e240698  lw          $a0, 0x698($s1)
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_12afc4:
    // 0x12afc4: 0xc073f12  jal         func_1CFC48
label_12afc8:
    if (ctx->pc == 0x12AFC8u) {
        ctx->pc = 0x12AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFC4u;
        // 0x12afc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AFCCu;
        goto label_12afcc;
    }
    ctx->pc = 0x12AFC4u;
    SET_GPR_U32(ctx, 31, 0x12AFCCu);
    ctx->pc = 0x12AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFC4u;
    // 0x12afc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC48u, 0x12AFC4u, 0x12AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFCCu;
label_12afcc:
    // 0x12afcc: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x12afccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
label_12afd0:
    // 0x12afd0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x12afd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12afd4:
    // 0x12afd4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x12afd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12afd8:
    // 0x12afd8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x12afd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12afdc:
    // 0x12afdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12afdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12afe0:
    // 0x12afe0: 0x3e00008  jr          $ra
label_12afe4:
    if (ctx->pc == 0x12AFE4u) {
        ctx->pc = 0x12AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFE0u;
        // 0x12afe4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AFE8u;
        goto label_fallthrough_0x12afe0;
    }
    ctx->pc = 0x12AFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFE0u;
        // 0x12afe4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12afe0:
    ctx->pc = 0x12AFE8u;
}
