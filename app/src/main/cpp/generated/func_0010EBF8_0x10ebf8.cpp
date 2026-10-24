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

// Function: func_0010EBF8
// Address: 0x10ebf8 - 0x10ee80
void func_0010EBF8_0x10ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010EBF8_0x10ebf8");
#endif

    switch (ctx->pc) {
        case 0x10ebf8u: goto label_10ebf8;
        case 0x10ebfcu: goto label_10ebfc;
        case 0x10ec00u: goto label_10ec00;
        case 0x10ec04u: goto label_10ec04;
        case 0x10ec08u: goto label_10ec08;
        case 0x10ec0cu: goto label_10ec0c;
        case 0x10ec10u: goto label_10ec10;
        case 0x10ec14u: goto label_10ec14;
        case 0x10ec18u: goto label_10ec18;
        case 0x10ec1cu: goto label_10ec1c;
        case 0x10ec20u: goto label_10ec20;
        case 0x10ec24u: goto label_10ec24;
        case 0x10ec28u: goto label_10ec28;
        case 0x10ec2cu: goto label_10ec2c;
        case 0x10ec30u: goto label_10ec30;
        case 0x10ec34u: goto label_10ec34;
        case 0x10ec38u: goto label_10ec38;
        case 0x10ec3cu: goto label_10ec3c;
        case 0x10ec40u: goto label_10ec40;
        case 0x10ec44u: goto label_10ec44;
        case 0x10ec48u: goto label_10ec48;
        case 0x10ec4cu: goto label_10ec4c;
        case 0x10ec50u: goto label_10ec50;
        case 0x10ec54u: goto label_10ec54;
        case 0x10ec58u: goto label_10ec58;
        case 0x10ec5cu: goto label_10ec5c;
        case 0x10ec60u: goto label_10ec60;
        case 0x10ec64u: goto label_10ec64;
        case 0x10ec68u: goto label_10ec68;
        case 0x10ec6cu: goto label_10ec6c;
        case 0x10ec70u: goto label_10ec70;
        case 0x10ec74u: goto label_10ec74;
        case 0x10ec78u: goto label_10ec78;
        case 0x10ec7cu: goto label_10ec7c;
        case 0x10ec80u: goto label_10ec80;
        case 0x10ec84u: goto label_10ec84;
        case 0x10ec88u: goto label_10ec88;
        case 0x10ec8cu: goto label_10ec8c;
        case 0x10ec90u: goto label_10ec90;
        case 0x10ec94u: goto label_10ec94;
        case 0x10ec98u: goto label_10ec98;
        case 0x10ec9cu: goto label_10ec9c;
        case 0x10eca0u: goto label_10eca0;
        case 0x10eca4u: goto label_10eca4;
        case 0x10eca8u: goto label_10eca8;
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecb0u: goto label_10ecb0;
        case 0x10ecb4u: goto label_10ecb4;
        case 0x10ecb8u: goto label_10ecb8;
        case 0x10ecbcu: goto label_10ecbc;
        case 0x10ecc0u: goto label_10ecc0;
        case 0x10ecc4u: goto label_10ecc4;
        case 0x10ecc8u: goto label_10ecc8;
        case 0x10ecccu: goto label_10eccc;
        case 0x10ecd0u: goto label_10ecd0;
        case 0x10ecd4u: goto label_10ecd4;
        case 0x10ecd8u: goto label_10ecd8;
        case 0x10ecdcu: goto label_10ecdc;
        case 0x10ece0u: goto label_10ece0;
        case 0x10ece4u: goto label_10ece4;
        case 0x10ece8u: goto label_10ece8;
        case 0x10ececu: goto label_10ecec;
        case 0x10ecf0u: goto label_10ecf0;
        case 0x10ecf4u: goto label_10ecf4;
        case 0x10ecf8u: goto label_10ecf8;
        case 0x10ecfcu: goto label_10ecfc;
        case 0x10ed00u: goto label_10ed00;
        case 0x10ed04u: goto label_10ed04;
        case 0x10ed08u: goto label_10ed08;
        case 0x10ed0cu: goto label_10ed0c;
        case 0x10ed10u: goto label_10ed10;
        case 0x10ed14u: goto label_10ed14;
        case 0x10ed18u: goto label_10ed18;
        case 0x10ed1cu: goto label_10ed1c;
        case 0x10ed20u: goto label_10ed20;
        case 0x10ed24u: goto label_10ed24;
        case 0x10ed28u: goto label_10ed28;
        case 0x10ed2cu: goto label_10ed2c;
        case 0x10ed30u: goto label_10ed30;
        case 0x10ed34u: goto label_10ed34;
        case 0x10ed38u: goto label_10ed38;
        case 0x10ed3cu: goto label_10ed3c;
        case 0x10ed40u: goto label_10ed40;
        case 0x10ed44u: goto label_10ed44;
        case 0x10ed48u: goto label_10ed48;
        case 0x10ed4cu: goto label_10ed4c;
        case 0x10ed50u: goto label_10ed50;
        case 0x10ed54u: goto label_10ed54;
        case 0x10ed58u: goto label_10ed58;
        case 0x10ed5cu: goto label_10ed5c;
        case 0x10ed60u: goto label_10ed60;
        case 0x10ed64u: goto label_10ed64;
        case 0x10ed68u: goto label_10ed68;
        case 0x10ed6cu: goto label_10ed6c;
        case 0x10ed70u: goto label_10ed70;
        case 0x10ed74u: goto label_10ed74;
        case 0x10ed78u: goto label_10ed78;
        case 0x10ed7cu: goto label_10ed7c;
        case 0x10ed80u: goto label_10ed80;
        case 0x10ed84u: goto label_10ed84;
        case 0x10ed88u: goto label_10ed88;
        case 0x10ed8cu: goto label_10ed8c;
        case 0x10ed90u: goto label_10ed90;
        case 0x10ed94u: goto label_10ed94;
        case 0x10ed98u: goto label_10ed98;
        case 0x10ed9cu: goto label_10ed9c;
        case 0x10eda0u: goto label_10eda0;
        case 0x10eda4u: goto label_10eda4;
        case 0x10eda8u: goto label_10eda8;
        case 0x10edacu: goto label_10edac;
        case 0x10edb0u: goto label_10edb0;
        case 0x10edb4u: goto label_10edb4;
        case 0x10edb8u: goto label_10edb8;
        case 0x10edbcu: goto label_10edbc;
        case 0x10edc0u: goto label_10edc0;
        case 0x10edc4u: goto label_10edc4;
        case 0x10edc8u: goto label_10edc8;
        case 0x10edccu: goto label_10edcc;
        case 0x10edd0u: goto label_10edd0;
        case 0x10edd4u: goto label_10edd4;
        case 0x10edd8u: goto label_10edd8;
        case 0x10eddcu: goto label_10eddc;
        case 0x10ede0u: goto label_10ede0;
        case 0x10ede4u: goto label_10ede4;
        case 0x10ede8u: goto label_10ede8;
        case 0x10edecu: goto label_10edec;
        case 0x10edf0u: goto label_10edf0;
        case 0x10edf4u: goto label_10edf4;
        case 0x10edf8u: goto label_10edf8;
        case 0x10edfcu: goto label_10edfc;
        case 0x10ee00u: goto label_10ee00;
        case 0x10ee04u: goto label_10ee04;
        case 0x10ee08u: goto label_10ee08;
        case 0x10ee0cu: goto label_10ee0c;
        case 0x10ee10u: goto label_10ee10;
        case 0x10ee14u: goto label_10ee14;
        case 0x10ee18u: goto label_10ee18;
        case 0x10ee1cu: goto label_10ee1c;
        case 0x10ee20u: goto label_10ee20;
        case 0x10ee24u: goto label_10ee24;
        case 0x10ee28u: goto label_10ee28;
        case 0x10ee2cu: goto label_10ee2c;
        case 0x10ee30u: goto label_10ee30;
        case 0x10ee34u: goto label_10ee34;
        case 0x10ee38u: goto label_10ee38;
        case 0x10ee3cu: goto label_10ee3c;
        case 0x10ee40u: goto label_10ee40;
        case 0x10ee44u: goto label_10ee44;
        case 0x10ee48u: goto label_10ee48;
        case 0x10ee4cu: goto label_10ee4c;
        case 0x10ee50u: goto label_10ee50;
        case 0x10ee54u: goto label_10ee54;
        case 0x10ee58u: goto label_10ee58;
        case 0x10ee5cu: goto label_10ee5c;
        case 0x10ee60u: goto label_10ee60;
        case 0x10ee64u: goto label_10ee64;
        case 0x10ee68u: goto label_10ee68;
        case 0x10ee6cu: goto label_10ee6c;
        case 0x10ee70u: goto label_10ee70;
        case 0x10ee74u: goto label_10ee74;
        case 0x10ee78u: goto label_10ee78;
        case 0x10ee7cu: goto label_10ee7c;
        default: break;
    }

    ctx->pc = 0x10ebf8u;

label_10ebf8:
    // 0x10ebf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10ebfc:
    // 0x10ebfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10ec00:
    // 0x10ec00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10ec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10ec04:
    // 0x10ec04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ec04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10ec08:
    // 0x10ec08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10ec0c:
    // 0x10ec0c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x10ec0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_10ec10:
    // 0x10ec10: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10ec10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10ec14:
    // 0x10ec14: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x10ec14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_10ec18:
    // 0x10ec18: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_10ec1c:
    if (ctx->pc == 0x10EC1Cu) {
        ctx->pc = 0x10EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC18u;
        // 0x10ec1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC20u;
        goto label_10ec20;
    }
    ctx->pc = 0x10EC18u;
    {
        const bool branch_taken_0x10ec18 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC18u;
        // 0x10ec1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec18) {
            ctx->pc = 0x10EC24u;
            goto label_10ec24;
        }
    }
    ctx->pc = 0x10EC20u;
label_10ec20:
    // 0x10ec20: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x10ec20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_10ec24:
    // 0x10ec24: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10ec24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10ec28:
    // 0x10ec28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10ec2c:
    if (ctx->pc == 0x10EC2Cu) {
        ctx->pc = 0x10EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC28u;
        // 0x10ec2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC30u;
        goto label_10ec30;
    }
    ctx->pc = 0x10EC28u;
    {
        const bool branch_taken_0x10ec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC28u;
        // 0x10ec2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec28) {
            ctx->pc = 0x10EC40u;
            goto label_10ec40;
        }
    }
    ctx->pc = 0x10EC30u;
label_10ec30:
    // 0x10ec30: 0x5043004b  beql        $v0, $v1, . + 4 + (0x4B << 2)
label_10ec34:
    if (ctx->pc == 0x10EC34u) {
        ctx->pc = 0x10EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC30u;
        // 0x10ec34: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC38u;
        goto label_10ec38;
    }
    ctx->pc = 0x10EC30u;
    {
        const bool branch_taken_0x10ec30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10ec30) {
            ctx->pc = 0x10EC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC30u;
            // 0x10ec34: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ED60u;
            goto label_10ed60;
        }
    }
    ctx->pc = 0x10EC38u;
label_10ec38:
    // 0x10ec38: 0x1000007f  b           . + 4 + (0x7F << 2)
label_10ec3c:
    if (ctx->pc == 0x10EC3Cu) {
        ctx->pc = 0x10EC40u;
        goto label_10ec40;
    }
    ctx->pc = 0x10EC38u;
    {
        const bool branch_taken_0x10ec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec38) {
            ctx->pc = 0x10EE38u;
            goto label_10ee38;
        }
    }
    ctx->pc = 0x10EC40u;
label_10ec40:
    // 0x10ec40: 0xc049150  jal         func_124540
label_10ec44:
    if (ctx->pc == 0x10EC44u) {
        ctx->pc = 0x10EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC40u;
        // 0x10ec44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC48u;
        goto label_10ec48;
    }
    ctx->pc = 0x10EC40u;
    SET_GPR_U32(ctx, 31, 0x10EC48u);
    ctx->pc = 0x10EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC40u;
    // 0x10ec44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10EC40u, 0x10EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC48u;
label_10ec48:
    // 0x10ec48: 0x82230648  lb          $v1, 0x648($s1)
    ctx->pc = 0x10ec48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
label_10ec4c:
    // 0x10ec4c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10ec4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10ec50:
    // 0x10ec50: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_10ec54:
    if (ctx->pc == 0x10EC54u) {
        ctx->pc = 0x10EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC50u;
        // 0x10ec54: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC58u;
        goto label_10ec58;
    }
    ctx->pc = 0x10EC50u;
    {
        const bool branch_taken_0x10ec50 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x10EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC50u;
        // 0x10ec54: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec50) {
            ctx->pc = 0x10EC60u;
            goto label_10ec60;
        }
    }
    ctx->pc = 0x10EC58u;
label_10ec58:
    // 0x10ec58: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x10ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_10ec5c:
    // 0x10ec5c: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10ec5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10ec60:
    // 0x10ec60: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10ec64:
    // 0x10ec64: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_10ec68:
    if (ctx->pc == 0x10EC68u) {
        ctx->pc = 0x10EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC64u;
        // 0x10ec68: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC6Cu;
        goto label_10ec6c;
    }
    ctx->pc = 0x10EC64u;
    {
        const bool branch_taken_0x10ec64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec64) {
            ctx->pc = 0x10EC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC64u;
            // 0x10ec68: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECA0u;
            goto label_10eca0;
        }
    }
    ctx->pc = 0x10EC6Cu;
label_10ec6c:
    // 0x10ec6c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x10ec6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_10ec70:
    // 0x10ec70: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10ec70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_10ec74:
    // 0x10ec74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10ec78:
    if (ctx->pc == 0x10EC78u) {
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC7Cu;
        goto label_10ec7c;
    }
    ctx->pc = 0x10EC74u;
    {
        const bool branch_taken_0x10ec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec74) {
            ctx->pc = 0x10EC84u;
            goto label_10ec84;
        }
    }
    ctx->pc = 0x10EC7Cu;
label_10ec7c:
    // 0x10ec7c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10ec7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_10ec80:
    // 0x10ec80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ec80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ec84:
    // 0x10ec84: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x10ec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_10ec88:
    // 0x10ec88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10ec8c:
    if (ctx->pc == 0x10EC8Cu) {
        ctx->pc = 0x10EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC88u;
        // 0x10ec8c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC90u;
        goto label_10ec90;
    }
    ctx->pc = 0x10EC88u;
    {
        const bool branch_taken_0x10ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC88u;
        // 0x10ec8c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec88) {
            ctx->pc = 0x10EC9Cu;
            goto label_10ec9c;
        }
    }
    ctx->pc = 0x10EC90u;
label_10ec90:
    // 0x10ec90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10ec94:
    // 0x10ec94: 0xc07e8a0  jal         func_1FA280
label_10ec98:
    if (ctx->pc == 0x10EC98u) {
        ctx->pc = 0x10EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC94u;
        // 0x10ec98: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC9Cu;
        goto label_10ec9c;
    }
    ctx->pc = 0x10EC94u;
    SET_GPR_U32(ctx, 31, 0x10EC9Cu);
    ctx->pc = 0x10EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC94u;
    // 0x10ec98: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x10EC94u, 0x10EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC9Cu;
label_10ec9c:
    // 0x10ec9c: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10eca0:
    // 0x10eca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eca4:
    // 0x10eca4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x10eca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_10eca8:
    // 0x10eca8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10eca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_10ecac:
    // 0x10ecac: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_10ecb0:
    // 0x10ecb0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ecb4:
    // 0x10ecb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ecb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ecb8:
    // 0x10ecb8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x10ecb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_10ecbc:
    // 0x10ecbc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10ecbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10ecc0:
    // 0x10ecc0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ecc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10ecc4:
    // 0x10ecc4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10ecc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10ecc8:
    // 0x10ecc8: 0xc042902  jal         func_10A408
label_10eccc:
    if (ctx->pc == 0x10ECCCu) {
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECD0u;
        goto label_10ecd0;
    }
    ctx->pc = 0x10ECC8u;
    SET_GPR_U32(ctx, 31, 0x10ECD0u);
    ctx->pc = 0x10ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECC8u;
    // 0x10eccc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10ECC8u, 0x10ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECD0u;
label_10ecd0:
    // 0x10ecd0: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ecd4:
    // 0x10ecd4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_10ecd8:
    // 0x10ecd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ecdc:
    // 0x10ecdc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10ecdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ece0:
    // 0x10ece0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x10ece0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_10ece4:
    // 0x10ece4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ece4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ece8:
    // 0x10ece8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ece8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10ecec:
    // 0x10ecec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10ececu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10ecf0:
    // 0x10ecf0: 0xc042908  jal         func_10A420
label_10ecf4:
    if (ctx->pc == 0x10ECF4u) {
        ctx->pc = 0x10ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECF0u;
        // 0x10ecf4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECF8u;
        goto label_10ecf8;
    }
    ctx->pc = 0x10ECF0u;
    SET_GPR_U32(ctx, 31, 0x10ECF8u);
    ctx->pc = 0x10ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECF0u;
    // 0x10ecf4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10ECF0u, 0x10ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECF8u;
label_10ecf8:
    // 0x10ecf8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10ecfc:
    // 0x10ecfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ecfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ed00:
    // 0x10ed00: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x10ed00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10ed04:
    // 0x10ed04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10ed04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10ed08:
    // 0x10ed08: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x10ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_10ed0c:
    // 0x10ed0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ed0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ed10:
    // 0x10ed10: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x10ed10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_10ed14:
    // 0x10ed14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10ed14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ed18:
    // 0x10ed18: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10ed1c:
    // 0x10ed1c: 0xc0aa15e  jal         func_2A8578
label_10ed20:
    if (ctx->pc == 0x10ED20u) {
        ctx->pc = 0x10ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED1Cu;
        // 0x10ed20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED24u;
        goto label_10ed24;
    }
    ctx->pc = 0x10ED1Cu;
    SET_GPR_U32(ctx, 31, 0x10ED24u);
    ctx->pc = 0x10ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED1Cu;
    // 0x10ed20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10ED1Cu, 0x10ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED24u;
label_10ed24:
    // 0x10ed24: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10ed24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10ed28:
    // 0x10ed28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ed2c:
    // 0x10ed2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ed2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10ed30:
    // 0x10ed30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ed30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ed34:
    // 0x10ed34: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x10ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_10ed38:
    // 0x10ed38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10ed3c:
    // 0x10ed3c: 0xae2415b8  sw          $a0, 0x15B8($s1)
    ctx->pc = 0x10ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 4));
label_10ed40:
    // 0x10ed40: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10ed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_10ed44:
    // 0x10ed44: 0xe6341588  swc1        $f20, 0x1588($s1)
    ctx->pc = 0x10ed44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
label_10ed48:
    // 0x10ed48: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x10ed48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
label_10ed4c:
    // 0x10ed4c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10ed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10ed50:
    // 0x10ed50: 0xe63415c4  swc1        $f20, 0x15C4($s1)
    ctx->pc = 0x10ed50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
label_10ed54:
    // 0x10ed54: 0xae2415b0  sw          $a0, 0x15B0($s1)
    ctx->pc = 0x10ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 4));
label_10ed58:
    // 0x10ed58: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x10ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_10ed5c:
    // 0x10ed5c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x10ed5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_10ed60:
    // 0x10ed60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ed64:
    if (ctx->pc == 0x10ED64u) {
        ctx->pc = 0x10ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED60u;
        // 0x10ed64: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED68u;
        goto label_10ed68;
    }
    ctx->pc = 0x10ED60u;
    {
        const bool branch_taken_0x10ed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED60u;
        // 0x10ed64: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed60) {
            ctx->pc = 0x10ED84u;
            goto label_10ed84;
        }
    }
    ctx->pc = 0x10ED68u;
label_10ed68:
    // 0x10ed68: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10ed6c:
    // 0x10ed6c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x10ed6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_10ed70:
    // 0x10ed70: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10ed70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_10ed74:
    // 0x10ed74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ed74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10ed78:
    // 0x10ed78: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x10ed78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_10ed7c:
    // 0x10ed7c: 0xc04939a  jal         func_124E68
label_10ed80:
    if (ctx->pc == 0x10ED80u) {
        ctx->pc = 0x10ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED7Cu;
        // 0x10ed80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED84u;
        goto label_10ed84;
    }
    ctx->pc = 0x10ED7Cu;
    SET_GPR_U32(ctx, 31, 0x10ED84u);
    ctx->pc = 0x10ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED7Cu;
    // 0x10ed80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10ED7Cu, 0x10ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED84u;
label_10ed84:
    // 0x10ed84: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10ed88:
    // 0x10ed88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10ed8c:
    if (ctx->pc == 0x10ED8Cu) {
        ctx->pc = 0x10ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED88u;
        // 0x10ed8c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED90u;
        goto label_10ed90;
    }
    ctx->pc = 0x10ED88u;
    {
        const bool branch_taken_0x10ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED88u;
        // 0x10ed8c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed88) {
            ctx->pc = 0x10ED94u;
            goto label_10ed94;
        }
    }
    ctx->pc = 0x10ED90u;
label_10ed90:
    // 0x10ed90: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10ed90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10ed94:
    // 0x10ed94: 0xc055f06  jal         func_157C18
label_10ed98:
    if (ctx->pc == 0x10ED98u) {
        ctx->pc = 0x10ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED94u;
        // 0x10ed98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED9Cu;
        goto label_10ed9c;
    }
    ctx->pc = 0x10ED94u;
    SET_GPR_U32(ctx, 31, 0x10ED9Cu);
    ctx->pc = 0x10ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED94u;
    // 0x10ed98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10ED94u, 0x10ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED9Cu;
label_10ed9c:
    // 0x10ed9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10eda0:
    if (ctx->pc == 0x10EDA0u) {
        ctx->pc = 0x10EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED9Cu;
        // 0x10eda0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDA4u;
        goto label_10eda4;
    }
    ctx->pc = 0x10ED9Cu;
    {
        const bool branch_taken_0x10ed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED9Cu;
        // 0x10eda0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed9c) {
            ctx->pc = 0x10EDC0u;
            goto label_10edc0;
        }
    }
    ctx->pc = 0x10EDA4u;
label_10eda4:
    // 0x10eda4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10eda8:
    // 0x10eda8: 0xc0493d8  jal         func_124F60
label_10edac:
    if (ctx->pc == 0x10EDACu) {
        ctx->pc = 0x10EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDA8u;
        // 0x10edac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDB0u;
        goto label_10edb0;
    }
    ctx->pc = 0x10EDA8u;
    SET_GPR_U32(ctx, 31, 0x10EDB0u);
    ctx->pc = 0x10EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EDA8u;
    // 0x10edac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10EDA8u, 0x10EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDB0u;
label_10edb0:
    // 0x10edb0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10edb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_10edb4:
    // 0x10edb4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10edb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_10edb8:
    // 0x10edb8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10edbc:
    // 0x10edbc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10edbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10edc0:
    // 0x10edc0: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10edc4:
    // 0x10edc4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_10edc8:
    if (ctx->pc == 0x10EDC8u) {
        ctx->pc = 0x10EDCCu;
        goto label_10edcc;
    }
    ctx->pc = 0x10EDC4u;
    {
        const bool branch_taken_0x10edc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10edc4) {
            ctx->pc = 0x10EE18u;
            goto label_10ee18;
        }
    }
    ctx->pc = 0x10EDCCu;
label_10edcc:
    // 0x10edcc: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10edd0:
    // 0x10edd0: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10edd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10edd4:
    // 0x10edd4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10edd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10edd8:
    // 0x10edd8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10eddc:
    // 0x10eddc: 0x40f809  jalr        $v0
label_10ede0:
    if (ctx->pc == 0x10EDE0u) {
        ctx->pc = 0x10EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDDCu;
        // 0x10ede0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDE4u;
        goto label_10ede4;
    }
    ctx->pc = 0x10EDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10EDE4u);
        ctx->pc = 0x10EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDDCu;
        // 0x10ede0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDDCu, 0x10EDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EDE4u;
label_10ede4:
    // 0x10ede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ede8:
    // 0x10ede8: 0xc07dfac  jal         func_1F7EB0
label_10edec:
    if (ctx->pc == 0x10EDECu) {
        ctx->pc = 0x10EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDE8u;
        // 0x10edec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDF0u;
        goto label_10edf0;
    }
    ctx->pc = 0x10EDE8u;
    SET_GPR_U32(ctx, 31, 0x10EDF0u);
    ctx->pc = 0x10EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EDE8u;
    // 0x10edec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x10EDE8u, 0x10EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDF0u;
label_10edf0:
    // 0x10edf0: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x10edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_10edf4:
    // 0x10edf4: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x10edf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_10edf8:
    // 0x10edf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10edf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10edfc:
    // 0x10edfc: 0x0  nop
    ctx->pc = 0x10edfcu;
    // NOP
label_10ee00:
    // 0x10ee00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10ee00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10ee04:
    // 0x10ee04: 0x0  nop
    ctx->pc = 0x10ee04u;
    // NOP
label_10ee08:
    // 0x10ee08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_10ee0c:
    if (ctx->pc == 0x10EE0Cu) {
        ctx->pc = 0x10EE10u;
        goto label_10ee10;
    }
    ctx->pc = 0x10EE08u;
    {
        const bool branch_taken_0x10ee08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ee08) {
            ctx->pc = 0x10EE18u;
            goto label_10ee18;
        }
    }
    ctx->pc = 0x10EE10u;
label_10ee10:
    // 0x10ee10: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x10ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_10ee14:
    // 0x10ee14: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x10ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_10ee18:
    // 0x10ee18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ee18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10ee1c:
    // 0x10ee1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10ee1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10ee20:
    // 0x10ee20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ee24:
    // 0x10ee24: 0xc053e7c  jal         func_14F9F0
label_10ee28:
    if (ctx->pc == 0x10EE28u) {
        ctx->pc = 0x10EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE24u;
        // 0x10ee28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE2Cu;
        goto label_10ee2c;
    }
    ctx->pc = 0x10EE24u;
    SET_GPR_U32(ctx, 31, 0x10EE2Cu);
    ctx->pc = 0x10EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE24u;
    // 0x10ee28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10EE24u, 0x10EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE2Cu;
label_10ee2c:
    // 0x10ee2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10ee2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10ee30:
    // 0x10ee30: 0xc053e4a  jal         func_14F928
label_10ee34:
    if (ctx->pc == 0x10EE34u) {
        ctx->pc = 0x10EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE30u;
        // 0x10ee34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE38u;
        goto label_10ee38;
    }
    ctx->pc = 0x10EE30u;
    SET_GPR_U32(ctx, 31, 0x10EE38u);
    ctx->pc = 0x10EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE30u;
    // 0x10ee34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10EE30u, 0x10EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE38u;
label_10ee38:
    // 0x10ee38: 0xc04290e  jal         func_10A438
label_10ee3c:
    if (ctx->pc == 0x10EE3Cu) {
        ctx->pc = 0x10EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE38u;
        // 0x10ee3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE40u;
        goto label_10ee40;
    }
    ctx->pc = 0x10EE38u;
    SET_GPR_U32(ctx, 31, 0x10EE40u);
    ctx->pc = 0x10EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE38u;
    // 0x10ee3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10EE38u, 0x10EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE40u;
label_10ee40:
    // 0x10ee40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ee44:
    // 0x10ee44: 0xc048e4e  jal         func_123938
label_10ee48:
    if (ctx->pc == 0x10EE48u) {
        ctx->pc = 0x10EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE44u;
        // 0x10ee48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE4Cu;
        goto label_10ee4c;
    }
    ctx->pc = 0x10EE44u;
    SET_GPR_U32(ctx, 31, 0x10EE4Cu);
    ctx->pc = 0x10EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE44u;
    // 0x10ee48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10EE44u, 0x10EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE4Cu;
label_10ee4c:
    // 0x10ee4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10ee50:
    if (ctx->pc == 0x10EE50u) {
        ctx->pc = 0x10EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE4Cu;
        // 0x10ee50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE54u;
        goto label_10ee54;
    }
    ctx->pc = 0x10EE4Cu;
    {
        const bool branch_taken_0x10ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE4Cu;
        // 0x10ee50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee4c) {
            ctx->pc = 0x10EE60u;
            goto label_10ee60;
        }
    }
    ctx->pc = 0x10EE54u;
label_10ee54:
    // 0x10ee54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ee58:
    // 0x10ee58: 0xc0493d8  jal         func_124F60
label_10ee5c:
    if (ctx->pc == 0x10EE5Cu) {
        ctx->pc = 0x10EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE58u;
        // 0x10ee5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE60u;
        goto label_10ee60;
    }
    ctx->pc = 0x10EE58u;
    SET_GPR_U32(ctx, 31, 0x10EE60u);
    ctx->pc = 0x10EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE58u;
    // 0x10ee5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10EE58u, 0x10EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE60u;
label_10ee60:
    // 0x10ee60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10ee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10ee64:
    // 0x10ee64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ee64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ee68:
    // 0x10ee68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ee6c:
    // 0x10ee6c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10ee70:
    // 0x10ee70: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10ee74:
    // 0x10ee74: 0x3e00008  jr          $ra
label_10ee78:
    if (ctx->pc == 0x10EE78u) {
        ctx->pc = 0x10EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE74u;
        // 0x10ee78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE7Cu;
        goto label_10ee7c;
    }
    ctx->pc = 0x10EE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE74u;
        // 0x10ee78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE7Cu;
label_10ee7c:
    // 0x10ee7c: 0x0  nop
    ctx->pc = 0x10ee7cu;
    // NOP
    ctx->pc = 0x10ee80u;
}
