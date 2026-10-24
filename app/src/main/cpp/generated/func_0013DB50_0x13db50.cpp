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

// Function: func_0013DB50
// Address: 0x13db50 - 0x13de90
void func_0013DB50_0x13db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013DB50_0x13db50");
#endif

    switch (ctx->pc) {
        case 0x13dc04u: goto label_13dc04;
        case 0x13dc10u: goto label_13dc10;
        case 0x13dc2cu: goto label_13dc2c;
        case 0x13dc3cu: goto label_13dc3c;
        case 0x13dc54u: goto label_13dc54;
        case 0x13dcd8u: goto label_13dcd8;
        case 0x13dce8u: goto label_13dce8;
        case 0x13dd1cu: goto label_13dd1c;
        case 0x13ddacu: goto label_13ddac;
        case 0x13dde4u: goto label_13dde4;
        case 0x13de50u: goto label_13de50;
        default: break;
    }

    ctx->pc = 0x13db50u;

    // 0x13db50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13db54: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x13db54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x13db58: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x13db58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x13db5c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x13db5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db60: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x13db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x13db64: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x13db64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x13db68: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x13db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x13db6c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x13db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x13db70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13db74: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x13db74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x13db78: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x13db78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x13db7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13db80: 0x82e3038c  lb          $v1, 0x38C($s7)
    ctx->pc = 0x13db80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
    // 0x13db84: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x13db84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13db88: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x13DB88u;
    {
        const bool branch_taken_0x13db88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB88u;
        // 0x13db8c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db88) {
            ctx->pc = 0x13DE5Cu;
            goto label_13de5c;
        }
    }
    ctx->pc = 0x13DB90u;
    // 0x13db90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13db90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13db94: 0x2442df40  addiu       $v0, $v0, -0x20C0
    ctx->pc = 0x13db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x13db98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13db9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dba0: 0x800008  jr          $a0
    ctx->pc = 0x13DBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DBA8u: goto label_13dba8;
            case 0x13DBB8u: goto label_13dbb8;
            case 0x13DC18u: goto label_13dc18;
            case 0x13DC5Cu: goto label_13dc5c;
            case 0x13DD2Cu: goto label_13dd2c;
            case 0x13DDBCu: goto label_13ddbc;
            case 0x13DDD4u: goto label_13ddd4;
            case 0x13DE5Cu: goto label_13de5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DBA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13DBA8u;
label_13dba8:
    // 0x13dba8: 0x92e2038c  lbu         $v0, 0x38C($s7)
    ctx->pc = 0x13dba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
    // 0x13dbac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13dbb0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x13DBB0u;
    {
        const bool branch_taken_0x13dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBB0u;
        // 0x13dbb4: 0xaee30390  sw          $v1, 0x390($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 912), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbb0) {
            ctx->pc = 0x13DE54u;
            goto label_13de54;
        }
    }
    ctx->pc = 0x13DBB8u;
label_13dbb8:
    // 0x13dbb8: 0x8ee20390  lw          $v0, 0x390($s7)
    ctx->pc = 0x13dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 912)));
    // 0x13dbbc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x13DBBCu;
    {
        const bool branch_taken_0x13dbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBBCu;
        // 0x13dbc0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbbc) {
            ctx->pc = 0x13DDB4u;
            goto label_13ddb4;
        }
    }
    ctx->pc = 0x13DBC4u;
    // 0x13dbc4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x13dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x13dbc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13dbcc: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13dbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x13dbd0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x13dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x13dbd4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x13dbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x13dbd8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x13dbdc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13dbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13dbe0: 0x26f00310  addiu       $s0, $s7, 0x310
    ctx->pc = 0x13dbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 784));
    // 0x13dbe4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13dbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13dbe8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13dbec: 0x30a58080  andi        $a1, $a1, 0x8080
    ctx->pc = 0x13dbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32896);
    // 0x13dbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dbf4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x13dbf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x13dbf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dbfc: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x13DBFCu;
    SET_GPR_U32(ctx, 31, 0x13DC04u);
    ctx->pc = 0x13DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DBFCu;
    // 0x13dc00: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x13DBFCu, 0x13DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC04u;
label_13dc04:
    // 0x13dc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc08: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x13DC08u;
    SET_GPR_U32(ctx, 31, 0x13DC10u);
    ctx->pc = 0x13DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC08u;
    // 0x13dc0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x13DC08u, 0x13DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC10u;
label_13dc10:
    // 0x13dc10: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x13DC10u;
    {
        const bool branch_taken_0x13dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC10u;
        // 0x13dc14: 0x92e2038c  lbu         $v0, 0x38C($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc10) {
            ctx->pc = 0x13DE54u;
            goto label_13de54;
        }
    }
    ctx->pc = 0x13DC18u;
label_13dc18:
    // 0x13dc18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x13dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13dc1c: 0x26e40120  addiu       $a0, $s7, 0x120
    ctx->pc = 0x13dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 288));
    // 0x13dc20: 0xaee20390  sw          $v0, 0x390($s7)
    ctx->pc = 0x13dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 912), GPR_U32(ctx, 2));
    // 0x13dc24: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x13DC24u;
    SET_GPR_U32(ctx, 31, 0x13DC2Cu);
    ctx->pc = 0x13DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC24u;
    // 0x13dc28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x13DC24u, 0x13DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC2Cu;
label_13dc2c:
    // 0x13dc2c: 0x26f00218  addiu       $s0, $s7, 0x218
    ctx->pc = 0x13dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 536));
    // 0x13dc30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc34: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x13DC34u;
    SET_GPR_U32(ctx, 31, 0x13DC3Cu);
    ctx->pc = 0x13DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC34u;
    // 0x13dc38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x13DC34u, 0x13DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC3Cu;
label_13dc3c:
    // 0x13dc3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13dc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13dc40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13dc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13dc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x13dc48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13dc4c: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x13DC4Cu;
    SET_GPR_U32(ctx, 31, 0x13DC54u);
    ctx->pc = 0x13DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC4Cu;
    // 0x13dc50: 0x96e50390  lhu         $a1, 0x390($s7) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D69A8u, 0x13DC4Cu, 0x13DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC54u;
label_13dc54:
    // 0x13dc54: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x13DC54u;
    {
        const bool branch_taken_0x13dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC54u;
        // 0x13dc58: 0x92e2038c  lbu         $v0, 0x38C($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc54) {
            ctx->pc = 0x13DE54u;
            goto label_13de54;
        }
    }
    ctx->pc = 0x13DC5Cu;
label_13dc5c:
    // 0x13dc5c: 0x8ee20390  lw          $v0, 0x390($s7)
    ctx->pc = 0x13dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 912)));
    // 0x13dc60: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x13DC60u;
    {
        const bool branch_taken_0x13dc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC60u;
        // 0x13dc64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc60) {
            ctx->pc = 0x13DDB4u;
            goto label_13ddb4;
        }
    }
    ctx->pc = 0x13DC68u;
    // 0x13dc68: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x13dc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x13dc6c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x13dc6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x13dc70: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x13dc70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x13dc74: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x13dc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x13dc78: 0x369400ff  ori         $s4, $s4, 0xFF
    ctx->pc = 0x13dc78u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)255);
    // 0x13dc7c: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x13dc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x13dc80: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x13dc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x13dc84: 0x34c600d0  ori         $a2, $a2, 0xD0
    ctx->pc = 0x13dc84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)208);
    // 0x13dc88: 0x3c13ff00  lui         $s3, 0xFF00
    ctx->pc = 0x13dc88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65280 << 16));
    // 0x13dc8c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13dc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13dc90: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x13dc90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x13dc94: 0xd43024  and         $a2, $a2, $s4
    ctx->pc = 0x13dc94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 20));
    // 0x13dc98: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x13dc98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x13dc9c: 0x34c6d000  ori         $a2, $a2, 0xD000
    ctx->pc = 0x13dc9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53248);
    // 0x13dca0: 0x3c160080  lui         $s6, 0x80
    ctx->pc = 0x13dca0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)128 << 16));
    // 0x13dca4: 0x3c1200ff  lui         $s2, 0xFF
    ctx->pc = 0x13dca4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)255 << 16));
    // 0x13dca8: 0x3c0200d0  lui         $v0, 0xD0
    ctx->pc = 0x13dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)208 << 16));
    // 0x13dcac: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x13dcacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x13dcb0: 0xb62825  or          $a1, $a1, $s6
    ctx->pc = 0x13dcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
    // 0x13dcb4: 0xd33024  and         $a2, $a2, $s3
    ctx->pc = 0x13dcb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 19));
    // 0x13dcb8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x13dcb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x13dcbc: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x13dcbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x13dcc0: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x13dcc4: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x13dcc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x13dcc8: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x13dcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13dccc: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x13dcccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x13dcd0: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x13DCD0u;
    SET_GPR_U32(ctx, 31, 0x13DCD8u);
    ctx->pc = 0x13DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCD0u;
    // 0x13dcd4: 0x26e40310  addiu       $a0, $s7, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x13DCD0u, 0x13DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCD8u;
label_13dcd8:
    // 0x13dcd8: 0x26f1019c  addiu       $s1, $s7, 0x19C
    ctx->pc = 0x13dcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 412));
    // 0x13dcdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dce0: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x13DCE0u;
    SET_GPR_U32(ctx, 31, 0x13DCE8u);
    ctx->pc = 0x13DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCE0u;
    // 0x13dce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x13DCE0u, 0x13DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCE8u;
label_13dce8:
    // 0x13dce8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dcec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dcf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13dcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dcf4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x13dcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13dcf8: 0x508024  and         $s0, $v0, $s0
    ctx->pc = 0x13dcf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x13dcfc: 0x36100080  ori         $s0, $s0, 0x80
    ctx->pc = 0x13dcfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
    // 0x13dd00: 0x2148024  and         $s0, $s0, $s4
    ctx->pc = 0x13dd00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x13dd04: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x13dd04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x13dd08: 0x2138024  and         $s0, $s0, $s3
    ctx->pc = 0x13dd08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x13dd0c: 0x2168025  or          $s0, $s0, $s6
    ctx->pc = 0x13dd0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 22));
    // 0x13dd10: 0x2128024  and         $s0, $s0, $s2
    ctx->pc = 0x13dd10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x13dd14: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x13DD14u;
    SET_GPR_U32(ctx, 31, 0x13DD1Cu);
    ctx->pc = 0x13DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD14u;
    // 0x13dd18: 0x2153025  or          $a2, $s0, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x13DD14u, 0x13DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD1Cu;
label_13dd1c:
    // 0x13dd1c: 0x92e2038c  lbu         $v0, 0x38C($s7)
    ctx->pc = 0x13dd1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
    // 0x13dd20: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13dd24: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x13DD24u;
    {
        const bool branch_taken_0x13dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD24u;
        // 0x13dd28: 0xaee30390  sw          $v1, 0x390($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 912), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd24) {
            ctx->pc = 0x13DE54u;
            goto label_13de54;
        }
    }
    ctx->pc = 0x13DD2Cu;
label_13dd2c:
    // 0x13dd2c: 0x8ee20390  lw          $v0, 0x390($s7)
    ctx->pc = 0x13dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 912)));
    // 0x13dd30: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13DD30u;
    {
        const bool branch_taken_0x13dd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD30u;
        // 0x13dd34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd30) {
            ctx->pc = 0x13DDB4u;
            goto label_13ddb4;
        }
    }
    ctx->pc = 0x13DD38u;
    // 0x13dd38: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x13dd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x13dd3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13dd40: 0x1253024  and         $a2, $t1, $a1
    ctx->pc = 0x13dd40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x13dd44: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x13dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x13dd48: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x13dd48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x13dd4c: 0x34c600d0  ori         $a2, $a2, 0xD0
    ctx->pc = 0x13dd4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)208);
    // 0x13dd50: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x13dd50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x13dd54: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x13dd54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x13dd58: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13dd58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13dd5c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x13dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x13dd60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13dd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13dd64: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13dd64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13dd68: 0x34c6d000  ori         $a2, $a2, 0xD000
    ctx->pc = 0x13dd68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53248);
    // 0x13dd6c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x13dd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13dd70: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13dd70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13dd74: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x13dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x13dd78: 0x3c0300d0  lui         $v1, 0xD0
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)208 << 16));
    // 0x13dd7c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x13dd80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13dd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13dd84: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x13dd84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13dd88: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x13dd88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x13dd8c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13dd8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13dd90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13dd94: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x13dd94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x13dd98: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x13dd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x13dd9c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x13dd9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x13dda0: 0x26e4019c  addiu       $a0, $s7, 0x19C
    ctx->pc = 0x13dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 412));
    // 0x13dda4: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x13DDA4u;
    SET_GPR_U32(ctx, 31, 0x13DDACu);
    ctx->pc = 0x13DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDA4u;
    // 0x13dda8: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x13DDA4u, 0x13DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDACu;
label_13ddac:
    // 0x13ddac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13DDACu;
    {
        const bool branch_taken_0x13ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDACu;
        // 0x13ddb0: 0x92e2038c  lbu         $v0, 0x38C($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddac) {
            ctx->pc = 0x13DE54u;
            goto label_13de54;
        }
    }
    ctx->pc = 0x13DDB4u;
label_13ddb4:
    // 0x13ddb4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13DDB4u;
    {
        const bool branch_taken_0x13ddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDB4u;
        // 0x13ddb8: 0xaee20390  sw          $v0, 0x390($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddb4) {
            ctx->pc = 0x13DE5Cu;
            goto label_13de5c;
        }
    }
    ctx->pc = 0x13DDBCu;
label_13ddbc:
    // 0x13ddbc: 0x96e30092  lhu         $v1, 0x92($s7)
    ctx->pc = 0x13ddbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
    // 0x13ddc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ddc4: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13DDC4u;
    {
        const bool branch_taken_0x13ddc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDC4u;
        // 0x13ddc8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddc4) {
            ctx->pc = 0x13DE60u;
            goto label_13de60;
        }
    }
    ctx->pc = 0x13DDCCu;
    // 0x13ddcc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x13DDCCu;
    {
        const bool branch_taken_0x13ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDCCu;
        // 0x13ddd0: 0x92e2038c  lbu         $v0, 0x38C($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddcc) {
            ctx->pc = 0x13DE54u;
            goto label_13de54;
        }
    }
    ctx->pc = 0x13DDD4u;
label_13ddd4:
    // 0x13ddd4: 0x26f00294  addiu       $s0, $s7, 0x294
    ctx->pc = 0x13ddd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 660));
    // 0x13ddd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dddc: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x13DDDCu;
    SET_GPR_U32(ctx, 31, 0x13DDE4u);
    ctx->pc = 0x13DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDDCu;
    // 0x13dde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x13DDDCu, 0x13DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDE4u;
label_13dde4:
    // 0x13dde4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x13dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x13dde8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13ddec: 0x2453024  and         $a2, $s2, $a1
    ctx->pc = 0x13ddecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x13ddf0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x13ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x13ddf4: 0x2252824  and         $a1, $s1, $a1
    ctx->pc = 0x13ddf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x13ddf8: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x13ddf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x13ddfc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x13ddfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x13de00: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x13de00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x13de04: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x13de04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x13de08: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13de08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13de0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13de0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13de10: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x13de10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x13de14: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13de14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13de18: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x13de1c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13de1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13de20: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x13de20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x13de24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13de28: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x13de28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x13de2c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x13de2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13de30: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x13de30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x13de34: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x13de34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13de38: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13de38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13de3c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13de3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13de40: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x13de40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x13de44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13de44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de48: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x13DE48u;
    SET_GPR_U32(ctx, 31, 0x13DE50u);
    ctx->pc = 0x13DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE48u;
    // 0x13de4c: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x13DE48u, 0x13DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE50u;
label_13de50:
    // 0x13de50: 0x92e2038c  lbu         $v0, 0x38C($s7)
    ctx->pc = 0x13de50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
label_13de54:
    // 0x13de54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13de54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13de58: 0xa2e2038c  sb          $v0, 0x38C($s7)
    ctx->pc = 0x13de58u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 908), (uint8_t)GPR_U32(ctx, 2));
label_13de5c:
    // 0x13de5c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x13de5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13de60:
    // 0x13de60: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x13de60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13de64: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x13de64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13de68: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x13de68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13de6c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x13de6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13de70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13de70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13de74: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x13de74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13de78: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x13de78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13de7c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x13de7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13de80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13de80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13de84: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE84u;
        // 0x13de88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE8Cu;
    // 0x13de8c: 0x0  nop
    ctx->pc = 0x13de8cu;
    // NOP
    ctx->pc = 0x13de90u;
}
