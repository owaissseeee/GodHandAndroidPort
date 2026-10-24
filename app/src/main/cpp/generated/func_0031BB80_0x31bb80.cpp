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

// Function: func_0031BB80
// Address: 0x31bb80 - 0x31bc98
void func_0031BB80_0x31bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031BB80_0x31bb80");
#endif

    switch (ctx->pc) {
        case 0x31bbdcu: goto label_31bbdc;
        case 0x31bbf8u: goto label_31bbf8;
        case 0x31bc30u: goto label_31bc30;
        case 0x31bc48u: goto label_31bc48;
        case 0x31bc7cu: goto label_31bc7c;
        default: break;
    }

    ctx->pc = 0x31bb80u;

    // 0x31bb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31bb84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x31bb88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31bb8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31bb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x31bb94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31bb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31bb98: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x31bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x31bb9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31bb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31bba0: 0x24857a2c  addiu       $a1, $a0, 0x7A2C
    ctx->pc = 0x31bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31276));
    // 0x31bba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31bba8: 0x26300160  addiu       $s0, $s1, 0x160
    ctx->pc = 0x31bba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x31bbac: 0xa2200360  sb          $zero, 0x360($s1)
    ctx->pc = 0x31bbacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 864), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bbb0: 0xa2200361  sb          $zero, 0x361($s1)
    ctx->pc = 0x31bbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 865), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bbb4: 0x8c827a2c  lw          $v0, 0x7A2C($a0)
    ctx->pc = 0x31bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x31bbb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31bbbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BBBCu;
    {
        const bool branch_taken_0x31bbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBBCu;
        // 0x31bbc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbbc) {
            ctx->pc = 0x31BBD0u;
            goto label_31bbd0;
        }
    }
    ctx->pc = 0x31BBC4u;
    // 0x31bbc4: 0x922204b8  lbu         $v0, 0x4B8($s1)
    ctx->pc = 0x31bbc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1208)));
    // 0x31bbc8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BBC8u;
    {
        const bool branch_taken_0x31bbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bbc8) {
            ctx->pc = 0x31BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BBC8u;
            // 0x31bbcc: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BBE4u;
            goto label_31bbe4;
        }
    }
    ctx->pc = 0x31BBD0u;
label_31bbd0:
    // 0x31bbd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbd4: 0xc0c6f62  jal         func_31BD88
    ctx->pc = 0x31BBD4u;
    SET_GPR_U32(ctx, 31, 0x31BBDCu);
    ctx->pc = 0x31BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBD4u;
    // 0x31bbd8: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BD88u, 0x31BBD4u, 0x31BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBDCu;
label_31bbdc:
    // 0x31bbdc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31BBDCu;
    {
        const bool branch_taken_0x31bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBDCu;
        // 0x31bbe0: 0x8e627a24  lw          $v0, 0x7A24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbdc) {
            ctx->pc = 0x31BC5Cu;
            goto label_31bc5c;
        }
    }
    ctx->pc = 0x31BBE4u;
label_31bbe4:
    // 0x31bbe4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x31bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x31bbe8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31bbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31bbec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31BBECu;
    {
        const bool branch_taken_0x31bbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBECu;
        // 0x31bbf0: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbec) {
            ctx->pc = 0x31BC58u;
            goto label_31bc58;
        }
    }
    ctx->pc = 0x31BBF4u;
    // 0x31bbf4: 0x0  nop
    ctx->pc = 0x31bbf4u;
    // NOP
label_31bbf8:
    // 0x31bbf8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x31bbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31bbfc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x31bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x31bc00: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x31BC00u;
    {
        const bool branch_taken_0x31bc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc00) {
            ctx->pc = 0x31BC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BC00u;
            // 0x31bc04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BC4Cu;
            goto label_31bc4c;
        }
    }
    ctx->pc = 0x31BC08u;
    // 0x31bc08: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x31bc08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31bc0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BC0Cu;
    {
        const bool branch_taken_0x31bc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC0Cu;
        // 0x31bc10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc0c) {
            ctx->pc = 0x31BC1Cu;
            goto label_31bc1c;
        }
    }
    ctx->pc = 0x31BC14u;
    // 0x31bc14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31BC14u;
    {
        const bool branch_taken_0x31bc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC14u;
        // 0x31bc18: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc14) {
            ctx->pc = 0x31BC48u;
            goto label_31bc48;
        }
    }
    ctx->pc = 0x31BC1Cu;
label_31bc1c:
    // 0x31bc1c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x31bc1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x31bc20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BC20u;
    {
        const bool branch_taken_0x31bc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC20u;
        // 0x31bc24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc20) {
            ctx->pc = 0x31BC40u;
            goto label_31bc40;
        }
    }
    ctx->pc = 0x31BC28u;
    // 0x31bc28: 0xc0c6f26  jal         func_31BC98
    ctx->pc = 0x31BC28u;
    SET_GPR_U32(ctx, 31, 0x31BC30u);
    ctx->pc = 0x31BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC28u;
    // 0x31bc2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BC98u, 0x31BC28u, 0x31BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC30u;
label_31bc30:
    // 0x31bc30: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x31bc30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x31bc34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31bc38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31BC38u;
    {
        const bool branch_taken_0x31bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC38u;
        // 0x31bc3c: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc38) {
            ctx->pc = 0x31BC48u;
            goto label_31bc48;
        }
    }
    ctx->pc = 0x31BC40u;
label_31bc40:
    // 0x31bc40: 0xc0c6f5e  jal         func_31BD78
    ctx->pc = 0x31BC40u;
    SET_GPR_U32(ctx, 31, 0x31BC48u);
    ctx->pc = 0x31BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC40u;
    // 0x31bc44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BD78u, 0x31BC40u, 0x31BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC48u;
label_31bc48:
    // 0x31bc48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31bc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31bc4c:
    // 0x31bc4c: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x31bc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x31bc50: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x31BC50u;
    {
        const bool branch_taken_0x31bc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC50u;
        // 0x31bc54: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc50) {
            ctx->pc = 0x31BBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bbf8;
        }
    }
    ctx->pc = 0x31BC58u;
label_31bc58:
    // 0x31bc58: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x31bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
label_31bc5c:
    // 0x31bc5c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31bc60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31bc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31bc64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BC64u;
    {
        const bool branch_taken_0x31bc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC64u;
        // 0x31bc68: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc64) {
            ctx->pc = 0x31BC80u;
            goto label_31bc80;
        }
    }
    ctx->pc = 0x31BC6Cu;
    // 0x31bc6c: 0x26260360  addiu       $a2, $s1, 0x360
    ctx->pc = 0x31bc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x31bc70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc74: 0xc0e604a  jal         func_398128
    ctx->pc = 0x31BC74u;
    SET_GPR_U32(ctx, 31, 0x31BC7Cu);
    ctx->pc = 0x31BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC74u;
    // 0x31bc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398128u, 0x31BC74u, 0x31BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC7Cu;
label_31bc7c:
    // 0x31bc7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31bc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31bc80:
    // 0x31bc80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31bc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31bc84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31bc84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31bc88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31bc88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bc90: 0x3e00008  jr          $ra
    ctx->pc = 0x31BC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC90u;
        // 0x31bc94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BC98u;
}
