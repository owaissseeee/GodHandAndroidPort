#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: setProgressCheck__6cMcSys
// Address: 0x7c7cb0 - 0x7c7e80
void setProgressCheck__6cMcSys_0x7c7cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setProgressCheck__6cMcSys_0x7c7cb0");
#endif

    switch (ctx->pc) {
        case 0x7c7d10u: goto label_7c7d10;
        case 0x7c7d38u: goto label_7c7d38;
        case 0x7c7dc8u: goto label_7c7dc8;
        case 0x7c7de8u: goto label_7c7de8;
        case 0x7c7e70u: goto label_7c7e70;
        default: break;
    }

    ctx->pc = 0x7c7cb0u;

    // 0x7c7cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c7cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c7cb4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x7c7cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7cbc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x7c7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x7c7cc0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x7c7cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x7c7cc4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x7c7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7c7cc8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x7C7CC8u;
    {
        const bool branch_taken_0x7c7cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7CC8u;
        // 0x7c7ccc: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7cc8) {
            ctx->pc = 0x7C7E70u;
            goto label_7c7e70;
        }
    }
    ctx->pc = 0x7C7CD0u;
    // 0x7c7cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x7c7cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c7cd4: 0x0  nop
    ctx->pc = 0x7c7cd4u;
    // NOP
    // 0x7c7cd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7c7cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7c7cdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x7c7cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x7c7ce0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7c7ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7c7ce4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7c7ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7c7ce8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7c7ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7c7cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c7cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7cf0: 0x1860002c  blez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x7C7CF0u;
    {
        const bool branch_taken_0x7c7cf0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7C7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7CF0u;
        // 0x7c7cf4: 0x46030042  mul.s       $f1, $f0, $f3 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7cf0) {
            ctx->pc = 0x7C7DA4u;
            goto label_7c7da4;
        }
    }
    ctx->pc = 0x7C7CF8u;
    // 0x7c7cf8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x7c7cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c7cfc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x7c7cfcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7d00: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x7c7d00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c7d04: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x7c7d04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c7d08: 0x24e90088  addiu       $t1, $a3, 0x88
    ctx->pc = 0x7c7d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 136));
    // 0x7c7d0c: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x7c7d0cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_7c7d10:
    // 0x7c7d10: 0x510d0001  beql        $t0, $t5, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C7D10u;
    {
        const bool branch_taken_0x7c7d10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        if (branch_taken_0x7c7d10) {
            ctx->pc = 0x7C7D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7D10u;
            // 0x7c7d14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7D18u;
            goto label_7c7d18;
        }
    }
    ctx->pc = 0x7C7D18u;
label_7c7d18:
    // 0x7c7d18: 0x2010  mfhi        $a0
    ctx->pc = 0x7c7d18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c7d1c: 0x4810010  bgez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C7D1Cu;
    {
        const bool branch_taken_0x7c7d1c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7D1Cu;
        // 0x7c7d20: 0x164102a  slt         $v0, $t3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7d1c) {
            ctx->pc = 0x7C7D60u;
            goto label_7c7d60;
        }
    }
    ctx->pc = 0x7C7D24u;
    // 0x7c7d24: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x7c7d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x7c7d28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7c7d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7c7d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c7d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7d30: 0x24e30088  addiu       $v1, $a3, 0x88
    ctx->pc = 0x7c7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 136));
    // 0x7c7d34: 0x0  nop
    ctx->pc = 0x7c7d34u;
    // NOP
label_7c7d38:
    // 0x7c7d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c7d3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7D3Cu;
    {
        const bool branch_taken_0x7c7d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7D3Cu;
        // 0x7c7d40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7d3c) {
            ctx->pc = 0x7C7D58u;
            goto label_7c7d58;
        }
    }
    ctx->pc = 0x7C7D44u;
    // 0x7c7d44: 0x0  nop
    ctx->pc = 0x7c7d44u;
    // NOP
    // 0x7c7d48: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C7D48u;
    {
        const bool branch_taken_0x7c7d48 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7D48u;
        // 0x7c7d4c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7d48) {
            ctx->pc = 0x7C7D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c7d38;
        }
    }
    ctx->pc = 0x7C7D50u;
    // 0x7c7d50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C7D50u;
    {
        const bool branch_taken_0x7c7d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7D50u;
        // 0x7c7d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7d50) {
            ctx->pc = 0x7C7D8Cu;
            goto label_7c7d8c;
        }
    }
    ctx->pc = 0x7C7D58u;
label_7c7d58:
    // 0x7c7d58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C7D58u;
    {
        const bool branch_taken_0x7c7d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7D58u;
        // 0x7c7d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7d58) {
            ctx->pc = 0x7C7D8Cu;
            goto label_7c7d8c;
        }
    }
    ctx->pc = 0x7C7D60u;
label_7c7d60:
    // 0x7c7d60: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x7c7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c7d64: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x7c7d64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x7c7d68: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c7d68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c7d6c: 0x8c2004  sllv        $a0, $t4, $a0
    ctx->pc = 0x7c7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c7d70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c7d74: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x7c7d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x7c7d78: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x7c7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x7c7d7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7c7d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7c7d80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c7d84: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c7d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c7d88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c7d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c7d8c:
    // 0x7c7d8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7c7d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7c7d90: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C7D90u;
    {
        const bool branch_taken_0x7c7d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c7d90) {
            ctx->pc = 0x7C7D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7D90u;
            // 0x7c7d94: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7D98u;
            goto label_7c7d98;
        }
    }
    ctx->pc = 0x7C7D98u;
label_7c7d98:
    // 0x7c7d98: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x7c7d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x7c7d9c: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x7C7D9Cu;
    {
        const bool branch_taken_0x7c7d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c7d9c) {
            ctx->pc = 0x7C7DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7D9Cu;
            // 0x7c7da0: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c7d10;
        }
    }
    ctx->pc = 0x7C7DA4u;
label_7c7da4:
    // 0x7c7da4: 0x19400029  blez        $t2, . + 4 + (0x29 << 2)
    ctx->pc = 0x7C7DA4u;
    {
        const bool branch_taken_0x7c7da4 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x7C7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7DA4u;
        // 0x7c7da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7da4) {
            ctx->pc = 0x7C7E4Cu;
            goto label_7c7e4c;
        }
    }
    ctx->pc = 0x7C7DACu;
    // 0x7c7dac: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x7c7dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c7db0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x7c7db0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7db4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7c7db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c7db8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x7c7db8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c7dbc: 0x24e90088  addiu       $t1, $a3, 0x88
    ctx->pc = 0x7c7dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 136));
    // 0x7c7dc0: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x7c7dc0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c7dc4: 0x0  nop
    ctx->pc = 0x7c7dc4u;
    // NOP
label_7c7dc8:
    // 0x7c7dc8: 0x50cc0001  beql        $a2, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C7DC8u;
    {
        const bool branch_taken_0x7c7dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x7c7dc8) {
            ctx->pc = 0x7C7DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7DC8u;
            // 0x7c7dcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7DD0u;
            goto label_7c7dd0;
        }
    }
    ctx->pc = 0x7C7DD0u;
label_7c7dd0:
    // 0x7c7dd0: 0x2010  mfhi        $a0
    ctx->pc = 0x7c7dd0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c7dd4: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C7DD4u;
    {
        const bool branch_taken_0x7c7dd4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7DD4u;
        // 0x7c7dd8: 0x164102a  slt         $v0, $t3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7dd4) {
            ctx->pc = 0x7C7E10u;
            goto label_7c7e10;
        }
    }
    ctx->pc = 0x7C7DDCu;
    // 0x7c7ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7c7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7c7de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c7de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7de4: 0x24e30088  addiu       $v1, $a3, 0x88
    ctx->pc = 0x7c7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 136));
label_7c7de8:
    // 0x7c7de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c7de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c7dec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7DECu;
    {
        const bool branch_taken_0x7c7dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7DECu;
        // 0x7c7df0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7dec) {
            ctx->pc = 0x7C7E08u;
            goto label_7c7e08;
        }
    }
    ctx->pc = 0x7C7DF4u;
    // 0x7c7df4: 0x0  nop
    ctx->pc = 0x7c7df4u;
    // NOP
    // 0x7c7df8: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C7DF8u;
    {
        const bool branch_taken_0x7c7df8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7DF8u;
        // 0x7c7dfc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7df8) {
            ctx->pc = 0x7C7DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c7de8;
        }
    }
    ctx->pc = 0x7C7E00u;
    // 0x7c7e00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C7E00u;
    {
        const bool branch_taken_0x7c7e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7E00u;
        // 0x7c7e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7e00) {
            ctx->pc = 0x7C7E38u;
            goto label_7c7e38;
        }
    }
    ctx->pc = 0x7C7E08u;
label_7c7e08:
    // 0x7c7e08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C7E08u;
    {
        const bool branch_taken_0x7c7e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7E08u;
        // 0x7c7e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7e08) {
            ctx->pc = 0x7C7E38u;
            goto label_7c7e38;
        }
    }
    ctx->pc = 0x7C7E10u;
label_7c7e10:
    // 0x7c7e10: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x7c7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c7e14: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x7c7e14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x7c7e18: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c7e18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c7e1c: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x7c7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c7e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c7e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c7e24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7c7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7c7e28: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x7c7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x7c7e2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c7e30: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c7e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c7e34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c7e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c7e38:
    // 0x7c7e38: 0x50480001  beql        $v0, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C7E38u;
    {
        const bool branch_taken_0x7c7e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7c7e38) {
            ctx->pc = 0x7C7E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7E38u;
            // 0x7c7e3c: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7E40u;
            goto label_7c7e40;
        }
    }
    ctx->pc = 0x7C7E40u;
label_7c7e40:
    // 0x7c7e40: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x7c7e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x7c7e44: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x7C7E44u;
    {
        const bool branch_taken_0x7c7e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c7e44) {
            ctx->pc = 0x7C7E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7E44u;
            // 0x7c7e48: 0xa6001a  div         $zero, $a1, $a2 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c7dc8;
        }
    }
    ctx->pc = 0x7C7E4Cu;
label_7c7e4c:
    // 0x7c7e4c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x7c7e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x7c7e50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7c7e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7c7e54: 0x0  nop
    ctx->pc = 0x7c7e54u;
    // NOP
    // 0x7c7e58: 0x460c1002  mul.s       $f0, $f2, $f12
    ctx->pc = 0x7c7e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x7c7e5c: 0x460c1b02  mul.s       $f12, $f3, $f12
    ctx->pc = 0x7c7e5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x7c7e60: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x7c7e60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x7c7e64: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x7c7e64u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[12]);
    // 0x7c7e68: 0xc1f1fa0  jal         func_7C7E80
    ctx->pc = 0x7C7E68u;
    SET_GPR_U32(ctx, 31, 0x7C7E70u);
    ctx->pc = 0x7C7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7E68u;
    // 0x7c7e6c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7E80u, 0x7C7E68u, 0x7C7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7E70u;
label_7c7e70:
    // 0x7c7e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7e74: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7E74u;
        // 0x7c7e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7E7Cu;
    // 0x7c7e7c: 0x0  nop
    ctx->pc = 0x7c7e7cu;
    // NOP
    ctx->pc = 0x7c7e80u;
}
} // namespace gh_mcport
