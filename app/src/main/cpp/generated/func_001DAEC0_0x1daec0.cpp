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

// Function: func_001DAEC0
// Address: 0x1daec0 - 0x1db440
void func_001DAEC0_0x1daec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DAEC0_0x1daec0");
#endif

    switch (ctx->pc) {
        case 0x1daf54u: goto label_1daf54;
        case 0x1daf64u: goto label_1daf64;
        case 0x1daff0u: goto label_1daff0;
        case 0x1db04cu: goto label_1db04c;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db098u: goto label_1db098;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db128u: goto label_1db128;
        case 0x1db13cu: goto label_1db13c;
        case 0x1db170u: goto label_1db170;
        case 0x1db1b4u: goto label_1db1b4;
        case 0x1db204u: goto label_1db204;
        case 0x1db210u: goto label_1db210;
        case 0x1db234u: goto label_1db234;
        case 0x1db290u: goto label_1db290;
        case 0x1db2b8u: goto label_1db2b8;
        case 0x1db38cu: goto label_1db38c;
        case 0x1db39cu: goto label_1db39c;
        case 0x1db3acu: goto label_1db3ac;
        case 0x1db3dcu: goto label_1db3dc;
        case 0x1db3f4u: goto label_1db3f4;
        default: break;
    }

    ctx->pc = 0x1daec0u;

    // 0x1daec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1daec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1daec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1daec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1daec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1daec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1daecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1daeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1daed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1daed4: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1daed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1daed8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1daed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1daedc: 0x10400153  beqz        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x1DAEDCu;
    {
        const bool branch_taken_0x1daedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEDCu;
        // 0x1daee0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daedc) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DAEE4u;
    // 0x1daee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1daee8: 0x2442b3a0  addiu       $v0, $v0, -0x4C60
    ctx->pc = 0x1daee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x1daeec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1daeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1daef0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daef4: 0x800008  jr          $a0
    ctx->pc = 0x1DAEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAEFCu: goto label_1daefc;
            case 0x1DAF20u: goto label_1daf20;
            case 0x1DAF8Cu: goto label_1daf8c;
            case 0x1DB054u: goto label_1db054;
            case 0x1DB0B0u: goto label_1db0b0;
            case 0x1DB0E0u: goto label_1db0e0;
            case 0x1DB23Cu: goto label_1db23c;
            case 0x1DB2D0u: goto label_1db2d0;
            case 0x1DB348u: goto label_1db348;
            case 0x1DB3FCu: goto label_1db3fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAEF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DAEFCu;
label_1daefc:
    // 0x1daefc: 0x92223045  lbu         $v0, 0x3045($s1)
    ctx->pc = 0x1daefcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12357)));
    // 0x1daf00: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1daf04: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1daf04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1daf08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1daf0c: 0xae243028  sw          $a0, 0x3028($s1)
    ctx->pc = 0x1daf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 4));
    // 0x1daf10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1daf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1daf14: 0xa2223045  sb          $v0, 0x3045($s1)
    ctx->pc = 0x1daf14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12357), (uint8_t)GPR_U32(ctx, 2));
    // 0x1daf18: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x1DAF18u;
    {
        const bool branch_taken_0x1daf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF18u;
        // 0x1daf1c: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf18) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DAF20u;
label_1daf20:
    // 0x1daf20: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1daf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1daf24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAF24u;
    {
        const bool branch_taken_0x1daf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF24u;
        // 0x1daf28: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf24) {
            ctx->pc = 0x1DAF34u;
            goto label_1daf34;
        }
    }
    ctx->pc = 0x1DAF2Cu;
    // 0x1daf2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAF2Cu;
    {
        const bool branch_taken_0x1daf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF2Cu;
        // 0x1daf30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf2c) {
            ctx->pc = 0x1DAF3Cu;
            goto label_1daf3c;
        }
    }
    ctx->pc = 0x1DAF34u;
label_1daf34:
    // 0x1daf34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1daf34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf38: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1daf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1daf3c:
    // 0x1daf3c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1daf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1daf40: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x1DAF40u;
    {
        const bool branch_taken_0x1daf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF40u;
        // 0x1daf44: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf40) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DAF48u;
    // 0x1daf48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1daf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1daf4c: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x1DAF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF54u);
    ctx->pc = 0x1DAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF4Cu;
    // 0x1daf50: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x1DAF4Cu, 0x1DAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF54u;
label_1daf54:
    // 0x1daf54: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1daf58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1daf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf5c: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DAF5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF64u);
    ctx->pc = 0x1DAF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF5Cu;
    // 0x1daf60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DAF5Cu, 0x1DAF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF64u;
label_1daf64:
    // 0x1daf64: 0x8e243034  lw          $a0, 0x3034($s1)
    ctx->pc = 0x1daf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1daf68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1daf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1daf6c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1daf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1daf70: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1daf70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1daf74: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1daf74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
    // 0x1daf78: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DAF78u;
    {
        const bool branch_taken_0x1daf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daf78) {
            ctx->pc = 0x1DAF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAF78u;
            // 0x1daf7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAF80u;
            goto label_1daf80;
        }
    }
    ctx->pc = 0x1DAF80u;
label_1daf80:
    // 0x1daf80: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1daf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1daf84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1DAF84u;
    {
        const bool branch_taken_0x1daf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF84u;
        // 0x1daf88: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf84) {
            ctx->pc = 0x1DB020u;
            goto label_1db020;
        }
    }
    ctx->pc = 0x1DAF8Cu;
label_1daf8c:
    // 0x1daf8c: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1daf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1daf90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAF90u;
    {
        const bool branch_taken_0x1daf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF90u;
        // 0x1daf94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf90) {
            ctx->pc = 0x1DAFA0u;
            goto label_1dafa0;
        }
    }
    ctx->pc = 0x1DAF98u;
    // 0x1daf98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAF98u;
    {
        const bool branch_taken_0x1daf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF98u;
        // 0x1daf9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf98) {
            ctx->pc = 0x1DAFA8u;
            goto label_1dafa8;
        }
    }
    ctx->pc = 0x1DAFA0u;
label_1dafa0:
    // 0x1dafa0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dafa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafa4: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1dafa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1dafa8:
    // 0x1dafa8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1dafa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dafac: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x1DAFACu;
    {
        const bool branch_taken_0x1dafac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFACu;
        // 0x1dafb0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafac) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DAFB4u;
    // 0x1dafb4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1dafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1dafb8: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1dafb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x1dafbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1dafbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1dafc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAFC0u;
    {
        const bool branch_taken_0x1dafc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFC0u;
        // 0x1dafc4: 0x8e26302c  lw          $a2, 0x302C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafc0) {
            ctx->pc = 0x1DAFD0u;
            goto label_1dafd0;
        }
    }
    ctx->pc = 0x1DAFC8u;
    // 0x1dafc8: 0x54c00019  bnel        $a2, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DAFC8u;
    {
        const bool branch_taken_0x1dafc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dafc8) {
            ctx->pc = 0x1DAFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAFC8u;
            // 0x1dafcc: 0x8e233034  lw          $v1, 0x3034($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB030u;
            goto label_1db030;
        }
    }
    ctx->pc = 0x1DAFD0u;
label_1dafd0:
    // 0x1dafd0: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1dafd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dafd4: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1dafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1dafd8: 0xd01818  mult        $v1, $a2, $s0
    ctx->pc = 0x1dafd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dafdc: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1dafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1dafe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dafe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dafe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafe8: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DAFE8u;
    SET_GPR_U32(ctx, 31, 0x1DAFF0u);
    ctx->pc = 0x1DAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAFE8u;
    // 0x1dafec: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DAFE8u, 0x1DAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFF0u;
label_1daff0:
    // 0x1daff0: 0x92223045  lbu         $v0, 0x3045($s1)
    ctx->pc = 0x1daff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12357)));
    // 0x1daff4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1daff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1daff8: 0x544000ed  bnel        $v0, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x1DAFF8u;
    {
        const bool branch_taken_0x1daff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daff8) {
            ctx->pc = 0x1DAFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAFF8u;
            // 0x1daffc: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB3B0u;
            goto label_1db3b0;
        }
    }
    ctx->pc = 0x1DB000u;
    // 0x1db000: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1db000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1db004: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1db004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db008: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1db008u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1db00c: 0xae223038  sw          $v0, 0x3038($s1)
    ctx->pc = 0x1db00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12344), GPR_U32(ctx, 2));
    // 0x1db010: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB010u;
    {
        const bool branch_taken_0x1db010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db010) {
            ctx->pc = 0x1DB014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB010u;
            // 0x1db014: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB018u;
            goto label_1db018;
        }
    }
    ctx->pc = 0x1DB018u;
label_1db018:
    // 0x1db018: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db01c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x1db01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_1db020:
    // 0x1db020: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1db020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db024: 0x2012  mflo        $a0
    ctx->pc = 0x1db024u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1db028: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1DB028u;
    {
        const bool branch_taken_0x1db028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB028u;
        // 0x1db02c: 0xae24302c  sw          $a0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db028) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DB030u;
label_1db030:
    // 0x1db030: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1db034: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1db034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
    // 0x1db038: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db03c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1db03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1db040: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1db040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db044: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DB044u;
    SET_GPR_U32(ctx, 31, 0x1DB04Cu);
    ctx->pc = 0x1DB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB044u;
    // 0x1db048: 0xae233034  sw          $v1, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DB044u, 0x1DB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB04Cu;
label_1db04c:
    // 0x1db04c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1DB04Cu;
    {
        const bool branch_taken_0x1db04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB04Cu;
        // 0x1db050: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db04c) {
            ctx->pc = 0x1DB430u;
            goto label_1db430;
        }
    }
    ctx->pc = 0x1DB054u;
label_1db054:
    // 0x1db054: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB058u;
    {
        const bool branch_taken_0x1db058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB058u;
        // 0x1db05c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db058) {
            ctx->pc = 0x1DB068u;
            goto label_1db068;
        }
    }
    ctx->pc = 0x1DB060u;
    // 0x1db060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB060u;
    {
        const bool branch_taken_0x1db060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB060u;
        // 0x1db064: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db060) {
            ctx->pc = 0x1DB070u;
            goto label_1db070;
        }
    }
    ctx->pc = 0x1DB068u;
label_1db068:
    // 0x1db068: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db06c: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db070:
    // 0x1db070: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db074: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x1DB074u;
    {
        const bool branch_taken_0x1db074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB074u;
        // 0x1db078: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db074) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DB07Cu;
    // 0x1db07c: 0xae203040  sw          $zero, 0x3040($s1)
    ctx->pc = 0x1db07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
    // 0x1db080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db084: 0xc077dd6  jal         func_1DF758
    ctx->pc = 0x1DB084u;
    SET_GPR_U32(ctx, 31, 0x1DB08Cu);
    ctx->pc = 0x1DB088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB084u;
    // 0x1db088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF758u, 0x1DB084u, 0x1DB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB08Cu;
label_1db08c:
    // 0x1db08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db090: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB090u;
    SET_GPR_U32(ctx, 31, 0x1DB098u);
    ctx->pc = 0x1DB094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB090u;
    // 0x1db094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB090u, 0x1DB098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB098u;
label_1db098:
    // 0x1db098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db09c: 0xc077e08  jal         func_1DF820
    ctx->pc = 0x1DB09Cu;
    SET_GPR_U32(ctx, 31, 0x1DB0A4u);
    ctx->pc = 0x1DB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB09Cu;
    // 0x1db0a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF820u, 0x1DB09Cu, 0x1DB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0A4u;
label_1db0a4:
    // 0x1db0a4: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db0a8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1DB0A8u;
    {
        const bool branch_taken_0x1db0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0A8u;
        // 0x1db0ac: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0a8) {
            ctx->pc = 0x1DB3B4u;
            goto label_1db3b4;
        }
    }
    ctx->pc = 0x1DB0B0u;
label_1db0b0:
    // 0x1db0b0: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db0b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB0B4u;
    {
        const bool branch_taken_0x1db0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0B4u;
        // 0x1db0b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0b4) {
            ctx->pc = 0x1DB0C4u;
            goto label_1db0c4;
        }
    }
    ctx->pc = 0x1DB0BCu;
    // 0x1db0bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB0BCu;
    {
        const bool branch_taken_0x1db0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0BCu;
        // 0x1db0c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0bc) {
            ctx->pc = 0x1DB0CCu;
            goto label_1db0cc;
        }
    }
    ctx->pc = 0x1DB0C4u;
label_1db0c4:
    // 0x1db0c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db0c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0c8: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db0cc:
    // 0x1db0cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db0d0: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1DB0D0u;
    {
        const bool branch_taken_0x1db0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0D0u;
        // 0x1db0d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0d0) {
            ctx->pc = 0x1DB430u;
            goto label_1db430;
        }
    }
    ctx->pc = 0x1DB0D8u;
    // 0x1db0d8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1DB0D8u;
    {
        const bool branch_taken_0x1db0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0D8u;
        // 0x1db0dc: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0d8) {
            ctx->pc = 0x1DB3B8u;
            goto label_1db3b8;
        }
    }
    ctx->pc = 0x1DB0E0u;
label_1db0e0:
    // 0x1db0e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1db0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1db0e4: 0x3404cc00  ori         $a0, $zero, 0xCC00
    ctx->pc = 0x1db0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1db0e8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1db0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1db0ec: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x1db0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x1db0f0: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x1db0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x1db0f4: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1db0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1db0f8: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1db0f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1db0fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1db0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1db100: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB100u;
    {
        const bool branch_taken_0x1db100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db100) {
            ctx->pc = 0x1DB104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB100u;
            // 0x1db104: 0xdc4301a0  ld          $v1, 0x1A0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB150u;
            goto label_1db150;
        }
    }
    ctx->pc = 0x1DB108u;
    // 0x1db108: 0x8e223040  lw          $v0, 0x3040($s1)
    ctx->pc = 0x1db108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12352)));
    // 0x1db10c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB10Cu;
    {
        const bool branch_taken_0x1db10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db10c) {
            ctx->pc = 0x1DB110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB10Cu;
            // 0x1db110: 0xae203040  sw          $zero, 0x3040($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB130u;
            goto label_1db130;
        }
    }
    ctx->pc = 0x1DB114u;
    // 0x1db114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db118: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db11c: 0xae223040  sw          $v0, 0x3040($s1)
    ctx->pc = 0x1db11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 2));
    // 0x1db120: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB120u;
    SET_GPR_U32(ctx, 31, 0x1DB128u);
    ctx->pc = 0x1DB124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB120u;
    // 0x1db124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB120u, 0x1DB128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB128u;
label_1db128:
    // 0x1db128: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB128u;
    {
        const bool branch_taken_0x1db128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB128u;
        // 0x1db12c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db128) {
            ctx->pc = 0x1DB140u;
            goto label_1db140;
        }
    }
    ctx->pc = 0x1DB130u;
label_1db130:
    // 0x1db130: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db134: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB134u;
    SET_GPR_U32(ctx, 31, 0x1DB13Cu);
    ctx->pc = 0x1DB138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB134u;
    // 0x1db138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB134u, 0x1DB13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB13Cu;
label_1db13c:
    // 0x1db13c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1db13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1db140:
    // 0x1db140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db144: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1db144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1db148: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DB148u;
    {
        const bool branch_taken_0x1db148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB148u;
        // 0x1db14c: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db148) {
            ctx->pc = 0x1DB220u;
            goto label_1db220;
        }
    }
    ctx->pc = 0x1DB150u;
label_1db150:
    // 0x1db150: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1db150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1db154: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1db154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db158: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB158u;
    {
        const bool branch_taken_0x1db158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB158u;
        // 0x1db15c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db158) {
            ctx->pc = 0x1DB184u;
            goto label_1db184;
        }
    }
    ctx->pc = 0x1DB160u;
    // 0x1db160: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db168: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1DB168u;
    SET_GPR_U32(ctx, 31, 0x1DB170u);
    ctx->pc = 0x1DB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB168u;
    // 0x1db16c: 0xae223040  sw          $v0, 0x3040($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1DB168u, 0x1DB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB170u;
label_1db170:
    // 0x1db170: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1db174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db178: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1db178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1db17c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DB17Cu;
    {
        const bool branch_taken_0x1db17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB17Cu;
        // 0x1db180: 0x24060161  addiu       $a2, $zero, 0x161 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db17c) {
            ctx->pc = 0x1DB220u;
            goto label_1db220;
        }
    }
    ctx->pc = 0x1DB184u;
label_1db184:
    // 0x1db184: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db188: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1db188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db18c: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1DB18Cu;
    {
        const bool branch_taken_0x1db18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB18Cu;
        // 0x1db190: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db18c) {
            ctx->pc = 0x1DB430u;
            goto label_1db430;
        }
    }
    ctx->pc = 0x1DB194u;
    // 0x1db194: 0x8e223040  lw          $v0, 0x3040($s1)
    ctx->pc = 0x1db194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12352)));
    // 0x1db198: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB198u;
    {
        const bool branch_taken_0x1db198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db198) {
            ctx->pc = 0x1DB19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB198u;
            // 0x1db19c: 0x8e223034  lw          $v0, 0x3034($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1CCu;
            goto label_1db1cc;
        }
    }
    ctx->pc = 0x1DB1A0u;
    // 0x1db1a0: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1db1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1ac: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DB1ACu;
    SET_GPR_U32(ctx, 31, 0x1DB1B4u);
    ctx->pc = 0x1DB1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1ACu;
    // 0x1db1b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DB1ACu, 0x1DB1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1B4u;
label_1db1b4:
    // 0x1db1b4: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db1b8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1db1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1db1bc: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1db1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
    // 0x1db1c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db1c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DB1C4u;
    {
        const bool branch_taken_0x1db1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1C4u;
        // 0x1db1c8: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1c4) {
            ctx->pc = 0x1DB1F8u;
            goto label_1db1f8;
        }
    }
    ctx->pc = 0x1DB1CCu;
label_1db1cc:
    // 0x1db1cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1db1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db1d0: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db1d4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1db1d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1db1d8: 0xae223038  sw          $v0, 0x3038($s1)
    ctx->pc = 0x1db1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12344), GPR_U32(ctx, 2));
    // 0x1db1dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB1DCu;
    {
        const bool branch_taken_0x1db1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1dc) {
            ctx->pc = 0x1DB1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB1DCu;
            // 0x1db1e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1E4u;
            goto label_1db1e4;
        }
    }
    ctx->pc = 0x1DB1E4u;
label_1db1e4:
    // 0x1db1e4: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db1e8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1db1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1db1ec: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1db1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db1f0: 0x2012  mflo        $a0
    ctx->pc = 0x1db1f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1db1f4: 0xae24302c  sw          $a0, 0x302C($s1)
    ctx->pc = 0x1db1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 4));
label_1db1f8:
    // 0x1db1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1fc: 0xc077dd6  jal         func_1DF758
    ctx->pc = 0x1DB1FCu;
    SET_GPR_U32(ctx, 31, 0x1DB204u);
    ctx->pc = 0x1DB200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1FCu;
    // 0x1db200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF758u, 0x1DB1FCu, 0x1DB204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB204u;
label_1db204:
    // 0x1db204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db208: 0xc077e08  jal         func_1DF820
    ctx->pc = 0x1DB208u;
    SET_GPR_U32(ctx, 31, 0x1DB210u);
    ctx->pc = 0x1DB20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB208u;
    // 0x1db20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF820u, 0x1DB208u, 0x1DB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB210u;
label_1db210:
    // 0x1db210: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1db210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1db214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db218: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1db218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1db21c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1db21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_1db220:
    // 0x1db220: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1db220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db224: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1db224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db228: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db22c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1DB22Cu;
    SET_GPR_U32(ctx, 31, 0x1DB234u);
    ctx->pc = 0x1DB230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB22Cu;
    // 0x1db230: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1DB22Cu, 0x1DB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB234u;
label_1db234:
    // 0x1db234: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1DB234u;
    {
        const bool branch_taken_0x1db234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB234u;
        // 0x1db238: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db234) {
            ctx->pc = 0x1DB430u;
            goto label_1db430;
        }
    }
    ctx->pc = 0x1DB23Cu;
label_1db23c:
    // 0x1db23c: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB240u;
    {
        const bool branch_taken_0x1db240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB240u;
        // 0x1db244: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db240) {
            ctx->pc = 0x1DB250u;
            goto label_1db250;
        }
    }
    ctx->pc = 0x1DB248u;
    // 0x1db248: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB248u;
    {
        const bool branch_taken_0x1db248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB248u;
        // 0x1db24c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db248) {
            ctx->pc = 0x1DB258u;
            goto label_1db258;
        }
    }
    ctx->pc = 0x1DB250u;
label_1db250:
    // 0x1db250: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db254: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db258:
    // 0x1db258: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db25c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1DB25Cu;
    {
        const bool branch_taken_0x1db25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB25Cu;
        // 0x1db260: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db25c) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DB264u;
    // 0x1db264: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1db264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1db268: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1db268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1db26c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db270: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1db270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db27c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db27cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db284: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db288: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1DB288u;
    SET_GPR_U32(ctx, 31, 0x1DB290u);
    ctx->pc = 0x1DB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB288u;
    // 0x1db28c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DB288u, 0x1DB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB290u;
label_1db290:
    // 0x1db290: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1db290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1db294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db298: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db29c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1db2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db2a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db2a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db2a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1DB2B0u;
    SET_GPR_U32(ctx, 31, 0x1DB2B8u);
    ctx->pc = 0x1DB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2B0u;
    // 0x1db2b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DB2B0u, 0x1DB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2B8u;
label_1db2b8:
    // 0x1db2b8: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1db2b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db2bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1db2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1db2c0: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1db2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
    // 0x1db2c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1db2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1db2c8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1DB2C8u;
    {
        const bool branch_taken_0x1db2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2C8u;
        // 0x1db2cc: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2c8) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DB2D0u;
label_1db2d0:
    // 0x1db2d0: 0xc620302c  lwc1        $f0, 0x302C($s1)
    ctx->pc = 0x1db2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1db2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1db2d8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1db2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1db2dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1db2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1db2e0: 0x8e253004  lw          $a1, 0x3004($s1)
    ctx->pc = 0x1db2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1db2e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1db2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1db2e8: 0xc48181c0  lwc1        $f1, -0x7E40($a0)
    ctx->pc = 0x1db2e8u;
    { uint32_t bits = FAST_READ32(0x5681C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db2ec: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1db2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1db2f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db2f4: 0x248481c0  addiu       $a0, $a0, -0x7E40
    ctx->pc = 0x1db2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934976));
    // 0x1db2f8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1db2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1db2fc: 0x0  nop
    ctx->pc = 0x1db2fcu;
    // NOP
    // 0x1db300: 0x0  nop
    ctx->pc = 0x1db300u;
    // NOP
    // 0x1db304: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1db304u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1db308: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1db308u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1db30c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1db30cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1db310: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1db310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1db314: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1db314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1db318: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1db318u;
    { uint32_t bits = FAST_READ32(0x5681D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db31c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1db31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1db320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1db324: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1db324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1db328: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1db328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1db32c: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1db32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
    // 0x1db330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB330u;
    {
        const bool branch_taken_0x1db330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB330u;
        // 0x1db334: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db330) {
            ctx->pc = 0x1DB340u;
            goto label_1db340;
        }
    }
    ctx->pc = 0x1DB338u;
    // 0x1db338: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1DB338u;
    {
        const bool branch_taken_0x1db338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB338u;
        // 0x1db33c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db338) {
            ctx->pc = 0x1DB424u;
            goto label_1db424;
        }
    }
    ctx->pc = 0x1DB340u;
label_1db340:
    // 0x1db340: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1DB340u;
    {
        const bool branch_taken_0x1db340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB340u;
        // 0x1db344: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db340) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DB348u;
label_1db348:
    // 0x1db348: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1db348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1db34c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1db34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1db350: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1db350u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1db354: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1db354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1db358: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB358u;
    {
        const bool branch_taken_0x1db358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB358u;
        // 0x1db35c: 0x8e26302c  lw          $a2, 0x302C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db358) {
            ctx->pc = 0x1DB36Cu;
            goto label_1db36c;
        }
    }
    ctx->pc = 0x1DB360u;
    // 0x1db360: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1db360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db364: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DB364u;
    {
        const bool branch_taken_0x1db364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB364u;
        // 0x1db368: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db364) {
            ctx->pc = 0x1DB3C4u;
            goto label_1db3c4;
        }
    }
    ctx->pc = 0x1DB36Cu;
label_1db36c:
    // 0x1db36c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1db36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db370: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1db374: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1db374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db378: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1db378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1db37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db380: 0x2812  mflo        $a1
    ctx->pc = 0x1db380u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1db384: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1DB384u;
    SET_GPR_U32(ctx, 31, 0x1DB38Cu);
    ctx->pc = 0x1DB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB384u;
    // 0x1db388: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1DB384u, 0x1DB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB38Cu;
label_1db38c:
    // 0x1db38c: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1db38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1db390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db394: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DB394u;
    SET_GPR_U32(ctx, 31, 0x1DB39Cu);
    ctx->pc = 0x1DB398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB394u;
    // 0x1db398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DB394u, 0x1DB39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB39Cu;
label_1db39c:
    // 0x1db39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3a4: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DB3A4u;
    SET_GPR_U32(ctx, 31, 0x1DB3ACu);
    ctx->pc = 0x1DB3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3A4u;
    // 0x1db3a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DB3A4u, 0x1DB3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3ACu;
label_1db3ac:
    // 0x1db3ac: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1db3b0:
    // 0x1db3b0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1db3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1db3b4:
    // 0x1db3b4: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1db3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
label_1db3b8:
    // 0x1db3b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db3bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DB3BCu;
    {
        const bool branch_taken_0x1db3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3BCu;
        // 0x1db3c0: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3bc) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DB3C4u;
label_1db3c4:
    // 0x1db3c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1db3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1db3c8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1db3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1db3cc: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1db3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
    // 0x1db3d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1db3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db3d4: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1DB3D4u;
    SET_GPR_U32(ctx, 31, 0x1DB3DCu);
    ctx->pc = 0x1DB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3D4u;
    // 0x1db3d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1DB3D4u, 0x1DB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3DCu;
label_1db3dc:
    // 0x1db3dc: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1db3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1db3e0: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db3e4: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1db3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1db3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3ec: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DB3ECu;
    SET_GPR_U32(ctx, 31, 0x1DB3F4u);
    ctx->pc = 0x1DB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3ECu;
    // 0x1db3f0: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DB3ECu, 0x1DB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3F4u;
label_1db3f4:
    // 0x1db3f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DB3F4u;
    {
        const bool branch_taken_0x1db3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3F4u;
        // 0x1db3f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3f4) {
            ctx->pc = 0x1DB430u;
            goto label_1db430;
        }
    }
    ctx->pc = 0x1DB3FCu;
label_1db3fc:
    // 0x1db3fc: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB400u;
    {
        const bool branch_taken_0x1db400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB400u;
        // 0x1db404: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db400) {
            ctx->pc = 0x1DB410u;
            goto label_1db410;
        }
    }
    ctx->pc = 0x1DB408u;
    // 0x1db408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB408u;
    {
        const bool branch_taken_0x1db408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB408u;
        // 0x1db40c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db408) {
            ctx->pc = 0x1DB418u;
            goto label_1db418;
        }
    }
    ctx->pc = 0x1DB410u;
label_1db410:
    // 0x1db410: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db414: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db418:
    // 0x1db418: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db41c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB41Cu;
    {
        const bool branch_taken_0x1db41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB41Cu;
        // 0x1db420: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db41c) {
            ctx->pc = 0x1DB42Cu;
            goto label_1db42c;
        }
    }
    ctx->pc = 0x1DB424u;
label_1db424:
    // 0x1db424: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1db424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db428: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1db428u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1db42c:
    // 0x1db42c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1db42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db430:
    // 0x1db430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db438: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB438u;
        // 0x1db43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB440u;
}
