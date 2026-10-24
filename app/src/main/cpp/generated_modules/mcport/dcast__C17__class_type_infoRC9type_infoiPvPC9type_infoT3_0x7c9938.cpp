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
// Function: dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3
// Address: 0x7c9938 - 0x7c9b10
void dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3_0x7c9938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3_0x7c9938");
#endif

    switch (ctx->pc) {
        case 0x7c9938u: goto label_7c9938;
        case 0x7c993cu: goto label_7c993c;
        case 0x7c9940u: goto label_7c9940;
        case 0x7c9944u: goto label_7c9944;
        case 0x7c9948u: goto label_7c9948;
        case 0x7c994cu: goto label_7c994c;
        case 0x7c9950u: goto label_7c9950;
        case 0x7c9954u: goto label_7c9954;
        case 0x7c9958u: goto label_7c9958;
        case 0x7c995cu: goto label_7c995c;
        case 0x7c9960u: goto label_7c9960;
        case 0x7c9964u: goto label_7c9964;
        case 0x7c9968u: goto label_7c9968;
        case 0x7c996cu: goto label_7c996c;
        case 0x7c9970u: goto label_7c9970;
        case 0x7c9974u: goto label_7c9974;
        case 0x7c9978u: goto label_7c9978;
        case 0x7c997cu: goto label_7c997c;
        case 0x7c9980u: goto label_7c9980;
        case 0x7c9984u: goto label_7c9984;
        case 0x7c9988u: goto label_7c9988;
        case 0x7c998cu: goto label_7c998c;
        case 0x7c9990u: goto label_7c9990;
        case 0x7c9994u: goto label_7c9994;
        case 0x7c9998u: goto label_7c9998;
        case 0x7c999cu: goto label_7c999c;
        case 0x7c99a0u: goto label_7c99a0;
        case 0x7c99a4u: goto label_7c99a4;
        case 0x7c99a8u: goto label_7c99a8;
        case 0x7c99acu: goto label_7c99ac;
        case 0x7c99b0u: goto label_7c99b0;
        case 0x7c99b4u: goto label_7c99b4;
        case 0x7c99b8u: goto label_7c99b8;
        case 0x7c99bcu: goto label_7c99bc;
        case 0x7c99c0u: goto label_7c99c0;
        case 0x7c99c4u: goto label_7c99c4;
        case 0x7c99c8u: goto label_7c99c8;
        case 0x7c99ccu: goto label_7c99cc;
        case 0x7c99d0u: goto label_7c99d0;
        case 0x7c99d4u: goto label_7c99d4;
        case 0x7c99d8u: goto label_7c99d8;
        case 0x7c99dcu: goto label_7c99dc;
        case 0x7c99e0u: goto label_7c99e0;
        case 0x7c99e4u: goto label_7c99e4;
        case 0x7c99e8u: goto label_7c99e8;
        case 0x7c99ecu: goto label_7c99ec;
        case 0x7c99f0u: goto label_7c99f0;
        case 0x7c99f4u: goto label_7c99f4;
        case 0x7c99f8u: goto label_7c99f8;
        case 0x7c99fcu: goto label_7c99fc;
        case 0x7c9a00u: goto label_7c9a00;
        case 0x7c9a04u: goto label_7c9a04;
        case 0x7c9a08u: goto label_7c9a08;
        case 0x7c9a0cu: goto label_7c9a0c;
        case 0x7c9a10u: goto label_7c9a10;
        case 0x7c9a14u: goto label_7c9a14;
        case 0x7c9a18u: goto label_7c9a18;
        case 0x7c9a1cu: goto label_7c9a1c;
        case 0x7c9a20u: goto label_7c9a20;
        case 0x7c9a24u: goto label_7c9a24;
        case 0x7c9a28u: goto label_7c9a28;
        case 0x7c9a2cu: goto label_7c9a2c;
        case 0x7c9a30u: goto label_7c9a30;
        case 0x7c9a34u: goto label_7c9a34;
        case 0x7c9a38u: goto label_7c9a38;
        case 0x7c9a3cu: goto label_7c9a3c;
        case 0x7c9a40u: goto label_7c9a40;
        case 0x7c9a44u: goto label_7c9a44;
        case 0x7c9a48u: goto label_7c9a48;
        case 0x7c9a4cu: goto label_7c9a4c;
        case 0x7c9a50u: goto label_7c9a50;
        case 0x7c9a54u: goto label_7c9a54;
        case 0x7c9a58u: goto label_7c9a58;
        case 0x7c9a5cu: goto label_7c9a5c;
        case 0x7c9a60u: goto label_7c9a60;
        case 0x7c9a64u: goto label_7c9a64;
        case 0x7c9a68u: goto label_7c9a68;
        case 0x7c9a6cu: goto label_7c9a6c;
        case 0x7c9a70u: goto label_7c9a70;
        case 0x7c9a74u: goto label_7c9a74;
        case 0x7c9a78u: goto label_7c9a78;
        case 0x7c9a7cu: goto label_7c9a7c;
        case 0x7c9a80u: goto label_7c9a80;
        case 0x7c9a84u: goto label_7c9a84;
        case 0x7c9a88u: goto label_7c9a88;
        case 0x7c9a8cu: goto label_7c9a8c;
        case 0x7c9a90u: goto label_7c9a90;
        case 0x7c9a94u: goto label_7c9a94;
        case 0x7c9a98u: goto label_7c9a98;
        case 0x7c9a9cu: goto label_7c9a9c;
        case 0x7c9aa0u: goto label_7c9aa0;
        case 0x7c9aa4u: goto label_7c9aa4;
        case 0x7c9aa8u: goto label_7c9aa8;
        case 0x7c9aacu: goto label_7c9aac;
        case 0x7c9ab0u: goto label_7c9ab0;
        case 0x7c9ab4u: goto label_7c9ab4;
        case 0x7c9ab8u: goto label_7c9ab8;
        case 0x7c9abcu: goto label_7c9abc;
        case 0x7c9ac0u: goto label_7c9ac0;
        case 0x7c9ac4u: goto label_7c9ac4;
        case 0x7c9ac8u: goto label_7c9ac8;
        case 0x7c9accu: goto label_7c9acc;
        case 0x7c9ad0u: goto label_7c9ad0;
        case 0x7c9ad4u: goto label_7c9ad4;
        case 0x7c9ad8u: goto label_7c9ad8;
        case 0x7c9adcu: goto label_7c9adc;
        case 0x7c9ae0u: goto label_7c9ae0;
        case 0x7c9ae4u: goto label_7c9ae4;
        case 0x7c9ae8u: goto label_7c9ae8;
        case 0x7c9aecu: goto label_7c9aec;
        case 0x7c9af0u: goto label_7c9af0;
        case 0x7c9af4u: goto label_7c9af4;
        case 0x7c9af8u: goto label_7c9af8;
        case 0x7c9afcu: goto label_7c9afc;
        case 0x7c9b00u: goto label_7c9b00;
        case 0x7c9b04u: goto label_7c9b04;
        case 0x7c9b08u: goto label_7c9b08;
        case 0x7c9b0cu: goto label_7c9b0c;
        default: break;
    }

    ctx->pc = 0x7c9938u;

label_7c9938:
    // 0x7c9938: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7c9938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_7c993c:
    // 0x7c993c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7c993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_7c9940:
    // 0x7c9940: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7c9940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_7c9944:
    // 0x7c9944: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x7c9944u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7c9948:
    // 0x7c9948: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x7c9948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_7c994c:
    // 0x7c994c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7c994cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7c9950:
    // 0x7c9950: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x7c9950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_7c9954:
    // 0x7c9954: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x7c9954u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7c9958:
    // 0x7c9958: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7c9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_7c995c:
    // 0x7c995c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x7c995cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_7c9960:
    // 0x7c9960: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x7c9960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_7c9964:
    // 0x7c9964: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x7c9964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_7c9968:
    // 0x7c9968: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7c9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_7c996c:
    // 0x7c996c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7c996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_7c9970:
    // 0x7c9970: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7c9970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_7c9974:
    // 0x7c9974: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7c9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_7c9978:
    // 0x7c9978: 0xc1f25f2  jal         func_7C97C8
label_7c997c:
    if (ctx->pc == 0x7C997Cu) {
        ctx->pc = 0x7C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9978u;
        // 0x7c997c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9980u;
        goto label_7c9980;
    }
    ctx->pc = 0x7C9978u;
    SET_GPR_U32(ctx, 31, 0x7C9980u);
    ctx->pc = 0x7C997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9978u;
    // 0x7c997c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C97C8u, 0x7C9978u, 0x7C9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9980u;
label_7c9980:
    // 0x7c9980: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_7c9984:
    if (ctx->pc == 0x7C9984u) {
        ctx->pc = 0x7C9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9980u;
        // 0x7c9984: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9988u;
        goto label_7c9988;
    }
    ctx->pc = 0x7C9980u;
    {
        const bool branch_taken_0x7c9980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9980u;
        // 0x7c9984: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9980) {
            ctx->pc = 0x7C9AE0u;
            goto label_7c9ae0;
        }
    }
    ctx->pc = 0x7C9988u;
label_7c9988:
    // 0x7c9988: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x7c9988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_7c998c:
    // 0x7c998c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7c998cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c9990:
    // 0x7c9990: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
label_7c9994:
    if (ctx->pc == 0x7C9994u) {
        ctx->pc = 0x7C9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9990u;
        // 0x7c9994: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9998u;
        goto label_7c9998;
    }
    ctx->pc = 0x7C9990u;
    {
        const bool branch_taken_0x7c9990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9990u;
        // 0x7c9994: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9990) {
            ctx->pc = 0x7C9ADCu;
            goto label_7c9adc;
        }
    }
    ctx->pc = 0x7C9998u;
label_7c9998:
    // 0x7c9998: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x7c9998u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c999c:
    // 0x7c999c: 0x0  nop
    ctx->pc = 0x7c999cu;
    // NOP
label_7c99a0:
    // 0x7c99a0: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_7c99a4:
    if (ctx->pc == 0x7C99A4u) {
        ctx->pc = 0x7C99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99A0u;
        // 0x7c99a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C99A8u;
        goto label_7c99a8;
    }
    ctx->pc = 0x7C99A0u;
    {
        const bool branch_taken_0x7c99a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99A0u;
        // 0x7c99a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c99a0) {
            ctx->pc = 0x7C99C8u;
            goto label_7c99c8;
        }
    }
    ctx->pc = 0x7C99A8u;
label_7c99a8:
    // 0x7c99a8: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x7c99a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_7c99ac:
    // 0x7c99ac: 0x2ca1821  addu        $v1, $s6, $t2
    ctx->pc = 0x7c99acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_7c99b0:
    // 0x7c99b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7c99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7c99b4:
    // 0x7c99b4: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x7c99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_7c99b8:
    // 0x7c99b8: 0x14440043  bne         $v0, $a0, . + 4 + (0x43 << 2)
label_7c99bc:
    if (ctx->pc == 0x7C99BCu) {
        ctx->pc = 0x7C99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99B8u;
        // 0x7c99bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C99C0u;
        goto label_7c99c0;
    }
    ctx->pc = 0x7C99B8u;
    {
        const bool branch_taken_0x7c99b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99B8u;
        // 0x7c99bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c99b8) {
            ctx->pc = 0x7C9AC8u;
            goto label_7c9ac8;
        }
    }
    ctx->pc = 0x7C99C0u;
label_7c99c0:
    // 0x7c99c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_7c99c4:
    if (ctx->pc == 0x7C99C4u) {
        ctx->pc = 0x7C99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99C0u;
        // 0x7c99c4: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C99C8u;
        goto label_7c99c8;
    }
    ctx->pc = 0x7C99C0u;
    {
        const bool branch_taken_0x7c99c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99C0u;
        // 0x7c99c4: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c99c0) {
            ctx->pc = 0x7C99D0u;
            goto label_7c99d0;
        }
    }
    ctx->pc = 0x7C99C8u;
label_7c99c8:
    // 0x7c99c8: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x7c99c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_7c99cc:
    // 0x7c99cc: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x7c99ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_7c99d0:
    // 0x7c99d0: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x7c99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_7c99d4:
    // 0x7c99d4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x7c99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_7c99d8:
    // 0x7c99d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7c99d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_7c99dc:
    // 0x7c99dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x7c99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_7c99e0:
    // 0x7c99e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c99e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_7c99e4:
    // 0x7c99e4: 0x31f42  srl         $v1, $v1, 29
    ctx->pc = 0x7c99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_7c99e8:
    // 0x7c99e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x7c99e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_7c99ec:
    // 0x7c99ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_7c99f0:
    if (ctx->pc == 0x7C99F0u) {
        ctx->pc = 0x7C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99ECu;
        // 0x7c99f0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C99F4u;
        goto label_7c99f4;
    }
    ctx->pc = 0x7C99ECu;
    {
        const bool branch_taken_0x7c99ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C99ECu;
        // 0x7c99f0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c99ec) {
            ctx->pc = 0x7C99F8u;
            goto label_7c99f8;
        }
    }
    ctx->pc = 0x7C99F4u;
label_7c99f4:
    // 0x7c99f4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x7c99f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7c99f8:
    // 0x7c99f8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x7c99f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_7c99fc:
    // 0x7c99fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7c99fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a00:
    // 0x7c9a00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7c9a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a04:
    // 0x7c9a04: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x7c9a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a08:
    // 0x7c9a08: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x7c9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_7c9a0c:
    // 0x7c9a0c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x7c9a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a10:
    // 0x7c9a10: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x7c9a10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a14:
    // 0x7c9a14: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x7c9a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_7c9a18:
    // 0x7c9a18: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7c9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_7c9a1c:
    // 0x7c9a1c: 0x40f809  jalr        $v0
label_7c9a20:
    if (ctx->pc == 0x7C9A20u) {
        ctx->pc = 0x7C9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A1Cu;
        // 0x7c9a20: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9A24u;
        goto label_7c9a24;
    }
    ctx->pc = 0x7C9A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7C9A24u);
        ctx->pc = 0x7C9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A1Cu;
        // 0x7c9a20: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9A1Cu, 0x7C9A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7C9A24u;
label_7c9a24:
    // 0x7c9a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c9a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a28:
    // 0x7c9a28: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_7c9a2c:
    if (ctx->pc == 0x7C9A2Cu) {
        ctx->pc = 0x7C9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A28u;
        // 0x7c9a2c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9A30u;
        goto label_7c9a30;
    }
    ctx->pc = 0x7C9A28u;
    {
        const bool branch_taken_0x7c9a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9a28) {
            ctx->pc = 0x7C9A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9A28u;
            // 0x7c9a2c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9AC4u;
            goto label_7c9ac4;
        }
    }
    ctx->pc = 0x7C9A30u;
label_7c9a30:
    // 0x7c9a30: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_7c9a34:
    if (ctx->pc == 0x7C9A34u) {
        ctx->pc = 0x7C9A38u;
        goto label_7c9a38;
    }
    ctx->pc = 0x7C9A30u;
    {
        const bool branch_taken_0x7c9a30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c9a30) {
            ctx->pc = 0x7C9A40u;
            goto label_7c9a40;
        }
    }
    ctx->pc = 0x7C9A38u;
label_7c9a38:
    // 0x7c9a38: 0x10000021  b           . + 4 + (0x21 << 2)
label_7c9a3c:
    if (ctx->pc == 0x7C9A3Cu) {
        ctx->pc = 0x7C9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A38u;
        // 0x7c9a3c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9A40u;
        goto label_7c9a40;
    }
    ctx->pc = 0x7C9A38u;
    {
        const bool branch_taken_0x7c9a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A38u;
        // 0x7c9a3c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9a38) {
            ctx->pc = 0x7C9AC0u;
            goto label_7c9ac0;
        }
    }
    ctx->pc = 0x7C9A40u;
label_7c9a40:
    // 0x7c9a40: 0x52700020  beql        $s3, $s0, . + 4 + (0x20 << 2)
label_7c9a44:
    if (ctx->pc == 0x7C9A44u) {
        ctx->pc = 0x7C9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A40u;
        // 0x7c9a44: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9A48u;
        goto label_7c9a48;
    }
    ctx->pc = 0x7C9A40u;
    {
        const bool branch_taken_0x7c9a40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x7c9a40) {
            ctx->pc = 0x7C9A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9A40u;
            // 0x7c9a44: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9AC4u;
            goto label_7c9ac4;
        }
    }
    ctx->pc = 0x7C9A48u;
label_7c9a48:
    // 0x7c9a48: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_7c9a4c:
    if (ctx->pc == 0x7C9A4Cu) {
        ctx->pc = 0x7C9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A48u;
        // 0x7c9a4c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9A50u;
        goto label_7c9a50;
    }
    ctx->pc = 0x7C9A48u;
    {
        const bool branch_taken_0x7c9a48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A48u;
        // 0x7c9a4c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9a48) {
            ctx->pc = 0x7C9AB8u;
            goto label_7c9ab8;
        }
    }
    ctx->pc = 0x7C9A50u;
label_7c9a50:
    // 0x7c9a50: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x7c9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_7c9a54:
    // 0x7c9a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c9a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c9a58:
    // 0x7c9a58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x7c9a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a5c:
    // 0x7c9a5c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x7c9a5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_7c9a60:
    // 0x7c9a60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c9a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a64:
    // 0x7c9a64: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7c9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_7c9a68:
    // 0x7c9a68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c9a68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a6c:
    // 0x7c9a6c: 0x40f809  jalr        $v0
label_7c9a70:
    if (ctx->pc == 0x7C9A70u) {
        ctx->pc = 0x7C9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A6Cu;
        // 0x7c9a70: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9A74u;
        goto label_7c9a74;
    }
    ctx->pc = 0x7C9A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7C9A74u);
        ctx->pc = 0x7C9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A6Cu;
        // 0x7c9a70: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9A6Cu, 0x7C9A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7C9A74u;
label_7c9a74:
    // 0x7c9a74: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x7c9a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_7c9a78:
    // 0x7c9a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c9a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a7c:
    // 0x7c9a7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x7c9a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a80:
    // 0x7c9a80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c9a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c9a84:
    // 0x7c9a84: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x7c9a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_7c9a88:
    // 0x7c9a88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7c9a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a8c:
    // 0x7c9a8c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7c9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_7c9a90:
    // 0x7c9a90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c9a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c9a94:
    // 0x7c9a94: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x7c9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_7c9a98:
    // 0x7c9a98: 0x40f809  jalr        $v0
label_7c9a9c:
    if (ctx->pc == 0x7C9A9Cu) {
        ctx->pc = 0x7C9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A98u;
        // 0x7c9a9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9AA0u;
        goto label_7c9aa0;
    }
    ctx->pc = 0x7C9A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7C9AA0u);
        ctx->pc = 0x7C9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9A98u;
        // 0x7c9a9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9A98u, 0x7C9AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7C9AA0u;
label_7c9aa0:
    // 0x7c9aa0: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
label_7c9aa4:
    if (ctx->pc == 0x7C9AA4u) {
        ctx->pc = 0x7C9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AA0u;
        // 0x7c9aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9AA8u;
        goto label_7c9aa8;
    }
    ctx->pc = 0x7C9AA0u;
    {
        const bool branch_taken_0x7c9aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c9aa0) {
            ctx->pc = 0x7C9AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9AA0u;
            // 0x7c9aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9AE0u;
            goto label_7c9ae0;
        }
    }
    ctx->pc = 0x7C9AA8u;
label_7c9aa8:
    // 0x7c9aa8: 0x52370006  beql        $s1, $s7, . + 4 + (0x6 << 2)
label_7c9aac:
    if (ctx->pc == 0x7C9AACu) {
        ctx->pc = 0x7C9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AA8u;
        // 0x7c9aac: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9AB0u;
        goto label_7c9ab0;
    }
    ctx->pc = 0x7C9AA8u;
    {
        const bool branch_taken_0x7c9aa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x7c9aa8) {
            ctx->pc = 0x7C9AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9AA8u;
            // 0x7c9aac: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9AC4u;
            goto label_7c9ac4;
        }
    }
    ctx->pc = 0x7C9AB0u;
label_7c9ab0:
    // 0x7c9ab0: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_7c9ab4:
    if (ctx->pc == 0x7C9AB4u) {
        ctx->pc = 0x7C9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AB0u;
        // 0x7c9ab4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9AB8u;
        goto label_7c9ab8;
    }
    ctx->pc = 0x7C9AB0u;
    {
        const bool branch_taken_0x7c9ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x7C9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AB0u;
        // 0x7c9ab4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9ab0) {
            ctx->pc = 0x7C9AC0u;
            goto label_7c9ac0;
        }
    }
    ctx->pc = 0x7C9AB8u;
label_7c9ab8:
    // 0x7c9ab8: 0x10000009  b           . + 4 + (0x9 << 2)
label_7c9abc:
    if (ctx->pc == 0x7C9ABCu) {
        ctx->pc = 0x7C9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AB8u;
        // 0x7c9abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9AC0u;
        goto label_7c9ac0;
    }
    ctx->pc = 0x7C9AB8u;
    {
        const bool branch_taken_0x7c9ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AB8u;
        // 0x7c9abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9ab8) {
            ctx->pc = 0x7C9AE0u;
            goto label_7c9ae0;
        }
    }
    ctx->pc = 0x7C9AC0u;
label_7c9ac0:
    // 0x7c9ac0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x7c9ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_7c9ac4:
    // 0x7c9ac4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x7c9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_7c9ac8:
    // 0x7c9ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_7c9acc:
    // 0x7c9acc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x7c9accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_7c9ad0:
    // 0x7c9ad0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x7c9ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_7c9ad4:
    // 0x7c9ad4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_7c9ad8:
    if (ctx->pc == 0x7C9AD8u) {
        ctx->pc = 0x7C9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AD4u;
        // 0x7c9ad8: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9ADCu;
        goto label_7c9adc;
    }
    ctx->pc = 0x7C9AD4u;
    {
        const bool branch_taken_0x7c9ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9AD4u;
        // 0x7c9ad8: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9ad4) {
            ctx->pc = 0x7C99A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c99a0;
        }
    }
    ctx->pc = 0x7C9ADCu;
label_7c9adc:
    // 0x7c9adc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x7c9adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7c9ae0:
    // 0x7c9ae0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x7c9ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_7c9ae4:
    // 0x7c9ae4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x7c9ae4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_7c9ae8:
    // 0x7c9ae8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x7c9ae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_7c9aec:
    // 0x7c9aec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7c9aecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_7c9af0:
    // 0x7c9af0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7c9af0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_7c9af4:
    // 0x7c9af4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7c9af4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_7c9af8:
    // 0x7c9af8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7c9af8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7c9afc:
    // 0x7c9afc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7c9afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_7c9b00:
    // 0x7c9b00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7c9b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7c9b04:
    // 0x7c9b04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7c9b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7c9b08:
    // 0x7c9b08: 0x3e00008  jr          $ra
label_7c9b0c:
    if (ctx->pc == 0x7C9B0Cu) {
        ctx->pc = 0x7C9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9B08u;
        // 0x7c9b0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9B10u;
        goto label_fallthrough_0x7c9b08;
    }
    ctx->pc = 0x7C9B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9B08u;
        // 0x7c9b0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7c9b08:
    ctx->pc = 0x7C9B10u;
}
} // namespace gh_mcport
