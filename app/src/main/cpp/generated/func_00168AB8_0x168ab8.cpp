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

// Function: func_00168AB8
// Address: 0x168ab8 - 0x169258
void func_00168AB8_0x168ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00168AB8_0x168ab8");
#endif

    switch (ctx->pc) {
        case 0x168b90u: goto label_168b90;
        case 0x168c78u: goto label_168c78;
        case 0x168cb0u: goto label_168cb0;
        case 0x168cc8u: goto label_168cc8;
        case 0x168cdcu: goto label_168cdc;
        case 0x168d20u: goto label_168d20;
        case 0x168d54u: goto label_168d54;
        case 0x168d6cu: goto label_168d6c;
        case 0x168d80u: goto label_168d80;
        case 0x168db4u: goto label_168db4;
        case 0x168dd8u: goto label_168dd8;
        case 0x168df0u: goto label_168df0;
        case 0x169114u: goto label_169114;
        case 0x169158u: goto label_169158;
        case 0x169160u: goto label_169160;
        case 0x169170u: goto label_169170;
        case 0x169178u: goto label_169178;
        case 0x169188u: goto label_169188;
        case 0x169190u: goto label_169190;
        case 0x1691a0u: goto label_1691a0;
        case 0x1691a8u: goto label_1691a8;
        case 0x1691b0u: goto label_1691b0;
        case 0x169214u: goto label_169214;
        case 0x16921cu: goto label_16921c;
        case 0x169224u: goto label_169224;
        default: break;
    }

    ctx->pc = 0x168ab8u;

    // 0x168ab8: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x168ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x168abc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x168abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x168ac0: 0x8ce27a80  lw          $v0, 0x7A80($a3)
    ctx->pc = 0x168ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x168ac4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x168ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x168ac8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x168ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x168acc: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x168accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x168ad0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x168ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x168ad4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x168ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x168ad8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168adc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x168adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x168ae0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x168ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x168ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ae8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x168ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x168aec: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x168aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x168af0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x168af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x168af4: 0x3c100800  lui         $s0, 0x800
    ctx->pc = 0x168af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2048 << 16));
    // 0x168af8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x168af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x168afc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x168afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x168b00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x168b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x168b04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x168b04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b08: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x168b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x168b0c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x168b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x168b10: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x168b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x168b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168b18: 0xace27a80  sw          $v0, 0x7A80($a3)
    ctx->pc = 0x168b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x168b1c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x168b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x168b20: 0xa4480090  sh          $t0, 0x90($v0)
    ctx->pc = 0x168b20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 8));
    // 0x168b24: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x168b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x168b28: 0xa4680090  sh          $t0, 0x90($v1)
    ctx->pc = 0x168b28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 8));
    // 0x168b2c: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x168b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x168b30: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x168b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168b34: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x168b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x168b38: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x168b38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x168b3c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x168b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x168b40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168b44: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x168b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x168b48: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x168b4c: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x168b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x168b50: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x168b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168b54: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x168b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x168b58: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x168b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x168b5c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x168b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x168b60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168b64: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x168b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x168b68: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x168b6c: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x168b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x168b70: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x168b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168b74: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x168b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x168b78: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x168b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x168b7c: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x168b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x168b80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168b84: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x168b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x168b88: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x168B88u;
    SET_GPR_U32(ctx, 31, 0x168B90u);
    ctx->pc = 0x168B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B88u;
    // 0x168b8c: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x168B88u, 0x168B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B90u;
label_168b90:
    // 0x168b90: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x168b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x168b94: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x168b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x168b98: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x168b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x168b9c: 0x8c62d930  lw          $v0, -0x26D0($v1)
    ctx->pc = 0x168b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD930u));
    // 0x168ba0: 0x80430edd  lb          $v1, 0xEDD($v0)
    ctx->pc = 0x168ba0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
    // 0x168ba4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168BA4u;
    {
        const bool branch_taken_0x168ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BA4u;
        // 0x168ba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ba4) {
            ctx->pc = 0x168BBCu;
            goto label_168bbc;
        }
    }
    ctx->pc = 0x168BACu;
    // 0x168bac: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168BACu;
    {
        const bool branch_taken_0x168bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168bac) {
            ctx->pc = 0x168BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168BACu;
            // 0x168bb0: 0x8e2400ac  lw          $a0, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168BD0u;
            goto label_168bd0;
        }
    }
    ctx->pc = 0x168BB4u;
    // 0x168bb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x168BB4u;
    {
        const bool branch_taken_0x168bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BB4u;
        // 0x168bb8: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bb4) {
            ctx->pc = 0x168BE8u;
            goto label_168be8;
        }
    }
    ctx->pc = 0x168BBCu;
label_168bbc:
    // 0x168bbc: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x168bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x168bc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168bc4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x168bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x168bc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168BC8u;
    {
        const bool branch_taken_0x168bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BC8u;
        // 0x168bcc: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bc8) {
            ctx->pc = 0x168BE4u;
            goto label_168be4;
        }
    }
    ctx->pc = 0x168BD0u;
label_168bd0:
    // 0x168bd0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x168bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x168bd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x168bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x168bd8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168bdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x168bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x168be0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_168be4:
    // 0x168be4: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_168be8:
    // 0x168be8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x168be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x168bec: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x168becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x168bf0: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x168bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x168bf4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168bf8: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x168bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x168bfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x168bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x168c00: 0x2627019c  addiu       $a3, $s1, 0x19C
    ctx->pc = 0x168c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x168c04: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x168c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x168c08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168c0c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x168c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x168c10: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x168c10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168c14: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x168c18: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x168c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x168c1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168c20: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168c24: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x168c28: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x168c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x168c2c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168c30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168c34: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168c38: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x168c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x168c3c: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x168c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x168c40: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x168c44: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x168c44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x168c48: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x168c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x168c4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168c50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168c54: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x168c58: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x168c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x168c5c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168c60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168c64: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168c68: 0x8e230198  lw          $v1, 0x198($s1)
    ctx->pc = 0x168c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x168c6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168c70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168c74: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_168c78:
    // 0x168c78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x168c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x168c7c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x168c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x168c80: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x168c84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168c88: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x168c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x168c8c: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x168C8Cu;
    {
        const bool branch_taken_0x168c8c = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x168C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C8Cu;
        // 0x168c90: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c8c) {
            ctx->pc = 0x168C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168c78;
        }
    }
    ctx->pc = 0x168C94u;
    // 0x168c94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x168c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x168c98: 0xa6200202  sh          $zero, 0x202($s1)
    ctx->pc = 0x168c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 514), (uint16_t)GPR_U32(ctx, 0));
    // 0x168c9c: 0x2442ad58  addiu       $v0, $v0, -0x52A8
    ctx->pc = 0x168c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946136));
    // 0x168ca0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x168ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168ca4: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x168ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x168ca8: 0x2414001e  addiu       $s4, $zero, 0x1E
    ctx->pc = 0x168ca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168cac: 0x0  nop
    ctx->pc = 0x168cacu;
    // NOP
label_168cb0:
    // 0x168cb0: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x168cb0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x168cb4: 0x5215000f  beql        $s0, $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x168CB4u;
    {
        const bool branch_taken_0x168cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x168cb4) {
            ctx->pc = 0x168CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CB4u;
            // 0x168cb8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168CF4u;
            goto label_168cf4;
        }
    }
    ctx->pc = 0x168CBCu;
    // 0x168cbc: 0x26d29b70  addiu       $s2, $s6, -0x6490
    ctx->pc = 0x168cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x168cc0: 0xc07f008  jal         func_1FC020
    ctx->pc = 0x168CC0u;
    SET_GPR_U32(ctx, 31, 0x168CC8u);
    ctx->pc = 0x168CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168CC0u;
    // 0x168cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC020u, 0x168CC0u, 0x168CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CC8u;
label_168cc8:
    // 0x168cc8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x168cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168ccc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x168CCCu;
    {
        const bool branch_taken_0x168ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168ccc) {
            ctx->pc = 0x168CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CCCu;
            // 0x168cd0: 0x96220202  lhu         $v0, 0x202($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 514)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168CE8u;
            goto label_168ce8;
        }
    }
    ctx->pc = 0x168CD4u;
    // 0x168cd4: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x168CD4u;
    SET_GPR_U32(ctx, 31, 0x168CDCu);
    ctx->pc = 0x168CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168CD4u;
    // 0x168cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x168CD4u, 0x168CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CDCu;
label_168cdc:
    // 0x168cdc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168CDCu;
    {
        const bool branch_taken_0x168cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168cdc) {
            ctx->pc = 0x168CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CDCu;
            // 0x168ce0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168CF4u;
            goto label_168cf4;
        }
    }
    ctx->pc = 0x168CE4u;
    // 0x168ce4: 0x96220202  lhu         $v0, 0x202($s1)
    ctx->pc = 0x168ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 514)));
label_168ce8:
    // 0x168ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168cec: 0xa6220202  sh          $v0, 0x202($s1)
    ctx->pc = 0x168cecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 514), (uint16_t)GPR_U32(ctx, 2));
    // 0x168cf0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x168cf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_168cf4:
    // 0x168cf4: 0x681ffee  bgez        $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x168CF4u;
    {
        const bool branch_taken_0x168cf4 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x168CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CF4u;
        // 0x168cf8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cf4) {
            ctx->pc = 0x168CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168cb0;
        }
    }
    ctx->pc = 0x168CFCu;
    // 0x168cfc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x168d00: 0xa6200204  sh          $zero, 0x204($s1)
    ctx->pc = 0x168d00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 516), (uint16_t)GPR_U32(ctx, 0));
    // 0x168d04: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x168d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x168d08: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x168d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x168d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d10: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x168d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d14: 0x241e0022  addiu       $fp, $zero, 0x22
    ctx->pc = 0x168d14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x168d18: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x168d18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168d1c: 0x0  nop
    ctx->pc = 0x168d1cu;
    // NOP
label_168d20:
    // 0x168d20: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x168d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x168d24: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x168d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x168d28: 0x105e0036  beq         $v0, $fp, . + 4 + (0x36 << 2)
    ctx->pc = 0x168D28u;
    {
        const bool branch_taken_0x168d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x168D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D28u;
        // 0x168d2c: 0xac74d9ec  sw          $s4, -0x2614($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957548), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d28) {
            ctx->pc = 0x168E04u;
            goto label_168e04;
        }
    }
    ctx->pc = 0x168D30u;
    // 0x168d30: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x168d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x168d34: 0x2484ab64  addiu       $a0, $a0, -0x549C
    ctx->pc = 0x168d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945636));
    // 0x168d38: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x168d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x168d3c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x168d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168d40: 0x3a030021  xori        $v1, $s0, 0x21
    ctx->pc = 0x168d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)33);
    // 0x168d44: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x168D44u;
    {
        const bool branch_taken_0x168d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D44u;
        // 0x168d48: 0x26d29b70  addiu       $s2, $s6, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d44) {
            ctx->pc = 0x168DCCu;
            goto label_168dcc;
        }
    }
    ctx->pc = 0x168D4Cu;
    // 0x168d4c: 0xc07f008  jal         func_1FC020
    ctx->pc = 0x168D4Cu;
    SET_GPR_U32(ctx, 31, 0x168D54u);
    ctx->pc = 0x168D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D4Cu;
    // 0x168d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC020u, 0x168D4Cu, 0x168D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D54u;
label_168d54:
    // 0x168d54: 0x82630019  lb          $v1, 0x19($s3)
    ctx->pc = 0x168d54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
    // 0x168d58: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x168d58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168d5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168D5Cu;
    {
        const bool branch_taken_0x168d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D5Cu;
        // 0x168d60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d5c) {
            ctx->pc = 0x168D78u;
            goto label_168d78;
        }
    }
    ctx->pc = 0x168D64u;
    // 0x168d64: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x168D64u;
    SET_GPR_U32(ctx, 31, 0x168D6Cu);
    ctx->pc = 0x168D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D64u;
    // 0x168d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x168D64u, 0x168D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D6Cu;
label_168d6c:
    // 0x168d6c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x168D6Cu;
    {
        const bool branch_taken_0x168d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d6c) {
            ctx->pc = 0x168D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D6Cu;
            // 0x168d70: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E08u;
            goto label_168e08;
        }
    }
    ctx->pc = 0x168D74u;
    // 0x168d74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168d78:
    // 0x168d78: 0xc07eb4e  jal         func_1FAD38
    ctx->pc = 0x168D78u;
    SET_GPR_U32(ctx, 31, 0x168D80u);
    ctx->pc = 0x168D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D78u;
    // 0x168d7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD38u, 0x168D78u, 0x168D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D80u;
label_168d80:
    // 0x168d80: 0x54570021  bnel        $v0, $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x168D80u;
    {
        const bool branch_taken_0x168d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x168d80) {
            ctx->pc = 0x168D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D80u;
            // 0x168d84: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E08u;
            goto label_168e08;
        }
    }
    ctx->pc = 0x168D88u;
    // 0x168d88: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x168d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x168d8c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x168d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x168d90: 0x2463ab68  addiu       $v1, $v1, -0x5498
    ctx->pc = 0x168d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945640));
    // 0x168d94: 0x600013  mtlo        $v1
    ctx->pc = 0x168d94u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x168d98: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x168d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x168d9c: 0x72031000  madd        $v0, $s0, $v1
    ctx->pc = 0x168d9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x168da0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168da4: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x168DA4u;
    {
        const bool branch_taken_0x168da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168da4) {
            ctx->pc = 0x168DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DA4u;
            // 0x168da8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E08u;
            goto label_168e08;
        }
    }
    ctx->pc = 0x168DACu;
    // 0x168dac: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x168DACu;
    SET_GPR_U32(ctx, 31, 0x168DB4u);
    ctx->pc = 0x168DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DACu;
    // 0x168db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x168DACu, 0x168DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DB4u;
label_168db4:
    // 0x168db4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x168db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x168db8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x168db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168dbc: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x168DBCu;
    {
        const bool branch_taken_0x168dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168dbc) {
            ctx->pc = 0x168DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DBCu;
            // 0x168dc0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E08u;
            goto label_168e08;
        }
    }
    ctx->pc = 0x168DC4u;
    // 0x168dc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x168DC4u;
    {
        const bool branch_taken_0x168dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DC4u;
        // 0x168dc8: 0x96220204  lhu         $v0, 0x204($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dc4) {
            ctx->pc = 0x168DFCu;
            goto label_168dfc;
        }
    }
    ctx->pc = 0x168DCCu;
label_168dcc:
    // 0x168dcc: 0x26d09b70  addiu       $s0, $s6, -0x6490
    ctx->pc = 0x168dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x168dd0: 0xc07f008  jal         func_1FC020
    ctx->pc = 0x168DD0u;
    SET_GPR_U32(ctx, 31, 0x168DD8u);
    ctx->pc = 0x168DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DD0u;
    // 0x168dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC020u, 0x168DD0u, 0x168DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DD8u;
label_168dd8:
    // 0x168dd8: 0x82630019  lb          $v1, 0x19($s3)
    ctx->pc = 0x168dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
    // 0x168ddc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x168ddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168de0: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x168DE0u;
    {
        const bool branch_taken_0x168de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168de0) {
            ctx->pc = 0x168DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DE0u;
            // 0x168de4: 0x96220204  lhu         $v0, 0x204($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168DFCu;
            goto label_168dfc;
        }
    }
    ctx->pc = 0x168DE8u;
    // 0x168de8: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x168DE8u;
    SET_GPR_U32(ctx, 31, 0x168DF0u);
    ctx->pc = 0x168DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DE8u;
    // 0x168dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x168DE8u, 0x168DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DF0u;
label_168df0:
    // 0x168df0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168DF0u;
    {
        const bool branch_taken_0x168df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168df0) {
            ctx->pc = 0x168DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DF0u;
            // 0x168df4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E08u;
            goto label_168e08;
        }
    }
    ctx->pc = 0x168DF8u;
    // 0x168df8: 0x96220204  lhu         $v0, 0x204($s1)
    ctx->pc = 0x168df8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 516)));
label_168dfc:
    // 0x168dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168e00: 0xa6220204  sh          $v0, 0x204($s1)
    ctx->pc = 0x168e00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 516), (uint16_t)GPR_U32(ctx, 2));
label_168e04:
    // 0x168e04: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x168e04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_168e08:
    // 0x168e08: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x168e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x168e0c: 0x2a820012  slti        $v0, $s4, 0x12
    ctx->pc = 0x168e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x168e10: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x168E10u;
    {
        const bool branch_taken_0x168e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E10u;
        // 0x168e14: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e10) {
            ctx->pc = 0x168D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168d20;
        }
    }
    ctx->pc = 0x168E18u;
    // 0x168e18: 0x8223005a  lb          $v1, 0x5A($s1)
    ctx->pc = 0x168e18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x168e1c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x168e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x168e20: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x168E20u;
    {
        const bool branch_taken_0x168e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E20u;
        // 0x168e24: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e20) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x168E28u;
    // 0x168e28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x168e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x168e2c: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x168e30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168e34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x168e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168e38: 0x800008  jr          $a0
    ctx->pc = 0x168E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168E40u: goto label_168e40;
            case 0x168E4Cu: goto label_168e4c;
            case 0x169094u: goto label_169094;
            case 0x169150u: goto label_169150;
            case 0x169168u: goto label_169168;
            case 0x169180u: goto label_169180;
            case 0x169198u: goto label_169198;
            case 0x169200u: goto label_169200;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x168E40u;
label_168e40:
    // 0x168e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168e44: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x168E44u;
    {
        const bool branch_taken_0x168e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E44u;
        // 0x168e48: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e44) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x168E4Cu;
label_168e4c:
    // 0x168e4c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x168e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x168e50: 0x8c82d930  lw          $v0, -0x26D0($a0)
    ctx->pc = 0x168e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD930u));
    // 0x168e54: 0x80430edd  lb          $v1, 0xEDD($v0)
    ctx->pc = 0x168e54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
    // 0x168e58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168E58u;
    {
        const bool branch_taken_0x168e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E58u;
        // 0x168e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e58) {
            ctx->pc = 0x168E70u;
            goto label_168e70;
        }
    }
    ctx->pc = 0x168E60u;
    // 0x168e60: 0x5062005c  beql        $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x168E60u;
    {
        const bool branch_taken_0x168e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168e60) {
            ctx->pc = 0x168E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168E60u;
            // 0x168e64: 0x822201b4  lb          $v0, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168FD4u;
            goto label_168fd4;
        }
    }
    ctx->pc = 0x168E68u;
    // 0x168e68: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x168E68u;
    {
        const bool branch_taken_0x168e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e68) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x168E70u;
label_168e70:
    // 0x168e70: 0x822301b4  lb          $v1, 0x1B4($s1)
    ctx->pc = 0x168e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x168e74: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x168e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x168e78: 0x2442fe50  addiu       $v0, $v0, -0x1B0
    ctx->pc = 0x168e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966864));
    // 0x168e7c: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x168e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x168e80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x168e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x168e84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x168e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x168e88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x168e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168e94: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x168e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168e98: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x168e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x168e9c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x168e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x168ea0: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x168ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x168ea4: 0x822301b4  lb          $v1, 0x1B4($s1)
    ctx->pc = 0x168ea4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x168ea8: 0x1065001f  beq         $v1, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x168EA8u;
    {
        const bool branch_taken_0x168ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x168EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EA8u;
        // 0x168eac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ea8) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168EB0u;
    // 0x168eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168EB0u;
    {
        const bool branch_taken_0x168eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EB0u;
        // 0x168eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168eb0) {
            ctx->pc = 0x168EC8u;
            goto label_168ec8;
        }
    }
    ctx->pc = 0x168EB8u;
    // 0x168eb8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x168EB8u;
    {
        const bool branch_taken_0x168eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168eb8) {
            ctx->pc = 0x168EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168EB8u;
            // 0x168ebc: 0x8e240128  lw          $a0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168ED8u;
            goto label_168ed8;
        }
    }
    ctx->pc = 0x168EC0u;
    // 0x168ec0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x168EC0u;
    {
        const bool branch_taken_0x168ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EC0u;
        // 0x168ec4: 0x8e23008c  lw          $v1, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ec0) {
            ctx->pc = 0x168FACu;
            goto label_168fac;
        }
    }
    ctx->pc = 0x168EC8u;
label_168ec8:
    // 0x168ec8: 0x50620028  beql        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x168EC8u;
    {
        const bool branch_taken_0x168ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168ec8) {
            ctx->pc = 0x168ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168EC8u;
            // 0x168ecc: 0x8e240128  lw          $a0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168F6Cu;
            goto label_168f6c;
        }
    }
    ctx->pc = 0x168ED0u;
    // 0x168ed0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x168ED0u;
    {
        const bool branch_taken_0x168ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168ED0u;
        // 0x168ed4: 0x8e23008c  lw          $v1, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ed0) {
            ctx->pc = 0x168FACu;
            goto label_168fac;
        }
    }
    ctx->pc = 0x168ED8u;
label_168ed8:
    // 0x168ed8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x168ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x168edc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x168edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x168ee0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x168ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x168ee4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168ee8: 0x24062005  addiu       $a2, $zero, 0x2005
    ctx->pc = 0x168ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    // 0x168eec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x168eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x168ef0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168ef4: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x168ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x168ef8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168efc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168f00: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x168f04: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x168f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x168f08: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168f0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x168f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x168f10: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168f14: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x168f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x168f18: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x168f18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x168f1c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x168f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x168f20: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x168F20u;
    {
        const bool branch_taken_0x168f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F20u;
        // 0x168f24: 0xa4460090  sh          $a2, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f20) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x168F28u;
label_168f28:
    // 0x168f28: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x168f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x168f2c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x168f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x168f30: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x168f34: 0x24072006  addiu       $a3, $zero, 0x2006
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8198));
    // 0x168f38: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168f3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x168f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x168f40: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x168f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x168f44: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x168f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x168f48: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x168f4c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168f50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x168f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x168f54: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168f58: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x168f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x168f5c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168f60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x168f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x168f64: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x168F64u;
    {
        const bool branch_taken_0x168f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F64u;
        // 0x168f68: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f64) {
            ctx->pc = 0x169048u;
            goto label_169048;
        }
    }
    ctx->pc = 0x168F6Cu;
label_168f6c:
    // 0x168f6c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x168f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x168f70: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x168f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x168f74: 0x24072007  addiu       $a3, $zero, 0x2007
    ctx->pc = 0x168f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8199));
    // 0x168f78: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168f7c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x168f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x168f80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x168f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x168f84: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168f88: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x168f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x168f8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x168f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x168f90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x168f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x168f94: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x168f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x168f98: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x168f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x168f9c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168fa0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x168fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x168fa4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x168FA4u;
    {
        const bool branch_taken_0x168fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FA4u;
        // 0x168fa8: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fa4) {
            ctx->pc = 0x169048u;
            goto label_169048;
        }
    }
    ctx->pc = 0x168FACu;
label_168fac:
    // 0x168fac: 0x24042008  addiu       $a0, $zero, 0x2008
    ctx->pc = 0x168facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x168fb0: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x168fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x168fb4: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x168fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168fbc: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x168fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x168fc0: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x168fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x168fc4: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x168fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x168fc8: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x168fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x168fcc: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x168FCCu;
    {
        const bool branch_taken_0x168fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FCCu;
        // 0x168fd0: 0xe4600040  swc1        $f0, 0x40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fcc) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x168FD4u;
label_168fd4:
    // 0x168fd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168FD4u;
    {
        const bool branch_taken_0x168fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fd4) {
            ctx->pc = 0x168FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168FD4u;
            // 0x168fd8: 0x8e250128  lw          $a1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168FECu;
            goto label_168fec;
        }
    }
    ctx->pc = 0x168FDCu;
    // 0x168fdc: 0x5043001f  beql        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x168FDCu;
    {
        const bool branch_taken_0x168fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x168fdc) {
            ctx->pc = 0x168FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168FDCu;
            // 0x168fe0: 0x8e230088  lw          $v1, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16905Cu;
            goto label_16905c;
        }
    }
    ctx->pc = 0x168FE4u;
    // 0x168fe4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x168FE4u;
    {
        const bool branch_taken_0x168fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fe4) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x168FECu;
label_168fec:
    // 0x168fec: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x168fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x168ff0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x168ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x168ff4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x168ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x168ff8: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x168ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168ffc: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x168ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x169000: 0xc441fe50  lwc1        $f1, -0x1B0($v0)
    ctx->pc = 0x169000u;
    { uint32_t bits = FAST_READ32(0x41FE50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169004: 0x24072009  addiu       $a3, $zero, 0x2009
    ctx->pc = 0x169004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8201));
    // 0x169008: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x169008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16900c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x169010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169014: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x169014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x169018: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x169018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x16901c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169020: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x169020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x169024: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169028: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x169028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x16902c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x169030: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x169030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x169034: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x169034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x169038: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x169038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x16903c: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x16903cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x169040: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x169040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x169044: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x169044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_169048:
    // 0x169048: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x16904c: 0xa4670090  sh          $a3, 0x90($v1)
    ctx->pc = 0x16904cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 7));
    // 0x169050: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x169050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x169054: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x169054u;
    {
        const bool branch_taken_0x169054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169054u;
        // 0x169058: 0xa4470090  sh          $a3, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169054) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x16905Cu;
label_16905c:
    // 0x16905c: 0x24042008  addiu       $a0, $zero, 0x2008
    ctx->pc = 0x16905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x169060: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x169060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x169064: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x169064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x169068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16906c: 0x3c014314  lui         $at, 0x4314
    ctx->pc = 0x16906cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17172 << 16));
    // 0x169070: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x169070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169074: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x169074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x169078: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x169078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x16907c: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x16907cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x169080: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x169080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x169084: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x169084u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x169088: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x169088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x16908c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x16908Cu;
    {
        const bool branch_taken_0x16908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16908Cu;
        // 0x169090: 0xa4440090  sh          $a0, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16908c) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169094u;
label_169094:
    // 0x169094: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x169094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x169098: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x169098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x16909c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16909cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1690a0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1690a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1690a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1690a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1690a8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1690a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1690ac: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x1690acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1690b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1690b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1690b4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1690b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1690b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1690b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1690bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1690bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1690c0: 0x0  nop
    ctx->pc = 0x1690c0u;
    // NOP
    // 0x1690c4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1690C4u;
    {
        const bool branch_taken_0x1690c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1690C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C4u;
        // 0x1690c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c4) {
            ctx->pc = 0x16910Cu;
            goto label_16910c;
        }
    }
    ctx->pc = 0x1690CCu;
    // 0x1690cc: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x1690ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1690d0: 0x822301b4  lb          $v1, 0x1B4($s1)
    ctx->pc = 0x1690d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1690d4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1690D4u;
    {
        const bool branch_taken_0x1690d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1690D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690D4u;
        // 0x1690d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690d4) {
            ctx->pc = 0x169104u;
            goto label_169104;
        }
    }
    ctx->pc = 0x1690DCu;
    // 0x1690dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1690DCu;
    {
        const bool branch_taken_0x1690dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690DCu;
        // 0x1690e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690dc) {
            ctx->pc = 0x1690F4u;
            goto label_1690f4;
        }
    }
    ctx->pc = 0x1690E4u;
    // 0x1690e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1690E4u;
    {
        const bool branch_taken_0x1690e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690E4u;
        // 0x1690e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690e4) {
            ctx->pc = 0x169108u;
            goto label_169108;
        }
    }
    ctx->pc = 0x1690ECu;
    // 0x1690ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1690ECu;
    {
        const bool branch_taken_0x1690ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1690ec) {
            ctx->pc = 0x16910Cu;
            goto label_16910c;
        }
    }
    ctx->pc = 0x1690F4u;
label_1690f4:
    // 0x1690f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1690F4u;
    {
        const bool branch_taken_0x1690f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1690F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690F4u;
        // 0x1690f8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690f4) {
            ctx->pc = 0x169108u;
            goto label_169108;
        }
    }
    ctx->pc = 0x1690FCu;
    // 0x1690fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1690FCu;
    {
        const bool branch_taken_0x1690fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1690fc) {
            ctx->pc = 0x16910Cu;
            goto label_16910c;
        }
    }
    ctx->pc = 0x169104u;
label_169104:
    // 0x169104: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x169104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_169108:
    // 0x169108: 0xa222005a  sb          $v0, 0x5A($s1)
    ctx->pc = 0x169108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
label_16910c:
    // 0x16910c: 0xc05a496  jal         func_169258
    ctx->pc = 0x16910Cu;
    SET_GPR_U32(ctx, 31, 0x169114u);
    ctx->pc = 0x169110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16910Cu;
    // 0x169110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169258u, 0x16910Cu, 0x169114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169114u;
label_169114:
    // 0x169114: 0x822301b4  lb          $v1, 0x1B4($s1)
    ctx->pc = 0x169114u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x169118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16911c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16911Cu;
    {
        const bool branch_taken_0x16911c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16911Cu;
        // 0x169120: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16911c) {
            ctx->pc = 0x169170u;
            goto label_169170;
        }
    }
    ctx->pc = 0x169124u;
    // 0x169124: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x169124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x169128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169128u;
    {
        const bool branch_taken_0x169128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169128u;
        // 0x16912c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169128) {
            ctx->pc = 0x169140u;
            goto label_169140;
        }
    }
    ctx->pc = 0x169130u;
    // 0x169130: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x169130u;
    {
        const bool branch_taken_0x169130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169130) {
            ctx->pc = 0x169158u;
            goto label_169158;
        }
    }
    ctx->pc = 0x169138u;
    // 0x169138: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x169138u;
    {
        const bool branch_taken_0x169138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169138) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169140u;
label_169140:
    // 0x169140: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x169140u;
    {
        const bool branch_taken_0x169140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169140) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169148u;
    // 0x169148: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x169148u;
    {
        const bool branch_taken_0x169148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169148) {
            ctx->pc = 0x169188u;
            goto label_169188;
        }
    }
    ctx->pc = 0x169150u;
label_169150:
    // 0x169150: 0xc05a496  jal         func_169258
    ctx->pc = 0x169150u;
    SET_GPR_U32(ctx, 31, 0x169158u);
    ctx->pc = 0x169154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169150u;
    // 0x169154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169258u, 0x169150u, 0x169158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169158u;
label_169158:
    // 0x169158: 0xc05a4d6  jal         func_169358
    ctx->pc = 0x169158u;
    SET_GPR_U32(ctx, 31, 0x169160u);
    ctx->pc = 0x16915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169158u;
    // 0x16915c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169358u, 0x169158u, 0x169160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169160u;
label_169160:
    // 0x169160: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x169160u;
    {
        const bool branch_taken_0x169160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169160) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169168u;
label_169168:
    // 0x169168: 0xc05a496  jal         func_169258
    ctx->pc = 0x169168u;
    SET_GPR_U32(ctx, 31, 0x169170u);
    ctx->pc = 0x16916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169168u;
    // 0x16916c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169258u, 0x169168u, 0x169170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169170u;
label_169170:
    // 0x169170: 0xc05a77e  jal         func_169DF8
    ctx->pc = 0x169170u;
    SET_GPR_U32(ctx, 31, 0x169178u);
    ctx->pc = 0x169174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169170u;
    // 0x169174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DF8u, 0x169170u, 0x169178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169178u;
label_169178:
    // 0x169178: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x169178u;
    {
        const bool branch_taken_0x169178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169178) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169180u;
label_169180:
    // 0x169180: 0xc05a496  jal         func_169258
    ctx->pc = 0x169180u;
    SET_GPR_U32(ctx, 31, 0x169188u);
    ctx->pc = 0x169184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169180u;
    // 0x169184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169258u, 0x169180u, 0x169188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169188u;
label_169188:
    // 0x169188: 0xc05a936  jal         func_16A4D8
    ctx->pc = 0x169188u;
    SET_GPR_U32(ctx, 31, 0x169190u);
    ctx->pc = 0x16918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169188u;
    // 0x16918c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A4D8u, 0x169188u, 0x169190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169190u;
label_169190:
    // 0x169190: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x169190u;
    {
        const bool branch_taken_0x169190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169190) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169198u;
label_169198:
    // 0x169198: 0xc05a936  jal         func_16A4D8
    ctx->pc = 0x169198u;
    SET_GPR_U32(ctx, 31, 0x1691A0u);
    ctx->pc = 0x16919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169198u;
    // 0x16919c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A4D8u, 0x169198u, 0x1691A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691A0u;
label_1691a0:
    // 0x1691a0: 0xc05a77e  jal         func_169DF8
    ctx->pc = 0x1691A0u;
    SET_GPR_U32(ctx, 31, 0x1691A8u);
    ctx->pc = 0x1691A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691A0u;
    // 0x1691a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DF8u, 0x1691A0u, 0x1691A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691A8u;
label_1691a8:
    // 0x1691a8: 0xc05a4d6  jal         func_169358
    ctx->pc = 0x1691A8u;
    SET_GPR_U32(ctx, 31, 0x1691B0u);
    ctx->pc = 0x1691ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691A8u;
    // 0x1691ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169358u, 0x1691A8u, 0x1691B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691B0u;
label_1691b0:
    // 0x1691b0: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x1691b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1691b4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1691b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1691b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1691bc: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1691bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1691c0: 0x3c0143af  lui         $at, 0x43AF
    ctx->pc = 0x1691c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17327 << 16));
    // 0x1691c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1691c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1691c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1691c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1691cc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1691ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1691d0: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1691d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1691d4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1691d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1691d8: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1691d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1691dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1691dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1691e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1691e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1691e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1691e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1691e8: 0x0  nop
    ctx->pc = 0x1691e8u;
    // NOP
    // 0x1691ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1691ECu;
    {
        const bool branch_taken_0x1691ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1691F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691ECu;
        // 0x1691f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691ec) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x1691F4u;
    // 0x1691f4: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x1691f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1691f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1691F8u;
    {
        const bool branch_taken_0x1691f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691F8u;
        // 0x1691fc: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691f8) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169200u;
label_169200:
    // 0x169200: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x169200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169204: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x169204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x169208: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x169208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_16920c:
    // 0x16920c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16920Cu;
    SET_GPR_U32(ctx, 31, 0x169214u);
    ctx->pc = 0x169210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16920Cu;
    // 0x169210: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16920Cu, 0x169214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169214u;
label_169214:
    // 0x169214: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x169214u;
    SET_GPR_U32(ctx, 31, 0x16921Cu);
    ctx->pc = 0x169218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169214u;
    // 0x169218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x169214u, 0x16921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16921Cu;
label_16921c:
    // 0x16921c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16921Cu;
    SET_GPR_U32(ctx, 31, 0x169224u);
    ctx->pc = 0x169220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16921Cu;
    // 0x169220: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16921Cu, 0x169224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169224u;
label_169224:
    // 0x169224: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x169224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x169228: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x169228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16922c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16922cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x169230: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x169230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169234: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x169234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169238: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x169238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16923c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16923cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169240: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x169240u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169244: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x169244u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16924c: 0x3e00008  jr          $ra
    ctx->pc = 0x16924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16924Cu;
        // 0x169250: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16924Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169254u;
    // 0x169254: 0x0  nop
    ctx->pc = 0x169254u;
    // NOP
    ctx->pc = 0x169258u;
}
